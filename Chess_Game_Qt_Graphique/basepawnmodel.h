#ifndef PAWNMODEL_H
#define PAWNMODEL_H

#include <QString>
#include "boardposition.h"
// Cette partie inclut les fichiers d'en-tête nécessaires. "QString" est inclus pour utiliser des chaînes de caractères, et "boardposition.h" est inclus car la classe "BasePawnModel" utilise la structure "BoardPosition".

enum class PawnType {
    king,
    queen,
    rook,
    bishop,
    knight,
    pawn
    //Ces énumérations définissent les types de pièces d'échecs et les types de joueurs. L'énumération "PawnType" représente les différents types de pions (roi, reine, tour, fou, cavalier, pion), et l'énumération "PlayerType" représente les différents types de joueurs (noir, blanc).
};

enum class PlayerType {
    black,
    white
};

class BasePawnModel {
    //Cette partie définit la classe "BasePawnModel". Elle contient des membres publics, notamment les attributs "position" (position du pion sur le plateau), "owner" (propriétaire du pion), "type" (type de pion), "imagePath" (chemin de l'image associée au pion) et "didTakeFirstMove" (booléen indiquant si le pion a déjà effectué son premier déplacement).

    //La classe a également une fonction virtuelle pure "validateMove" qui doit être implémentée dans les classes dérivées. Cette fonction est utilisée pour valider les mouvements du pion sur le plateau d'échecs. Elle prend en compte la position de destination du mouvement, le pion présent sur cette position et la position du pion actif qui souhaite effectuer le mouvement.

    //La classe "BasePawnModel" a également des fonctions protégées, telles que "pawnWantsToMoveByOneField" qui vérifie si le pion veut se déplacer d'un seul champ, "validateDiagonalMove" qui valide les mouvements diagonaux et "validateVerticalOrHorizontalMove" qui valide les mouvements verticaux ou horizontaux.
public:
    BasePawnModel(BoardPosition position, PlayerType owner, PawnType type, QString imagePath);

    BoardPosition position;
    PlayerType owner;
    PawnType type;
    QString imagePath;
    bool didTakeFirstMove;

    virtual bool validateMove(BoardPosition positionToMove,
                              BasePawnModel *pawnOnPositionToMove,
                              BoardPosition *requestedActivePawnPosition) = 0;
    virtual ~BasePawnModel() = default;

protected:
    bool pawnWantsToMoveByOneField(BoardPosition positionToMove);
    bool validateDiagonalMove(BoardPosition positionToMove, BasePawnModel *pawnOnPositionToMove);
    bool validateVerticalOrHorizontalMove(BoardPosition positionToMove, BasePawnModel *pawnOnPositionToMove);
};

#endif // PAWNMODEL_H
