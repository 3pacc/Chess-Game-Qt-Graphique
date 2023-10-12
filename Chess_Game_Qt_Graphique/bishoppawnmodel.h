#ifndef BISHOPPAWNMODEL_H
#define BISHOPPAWNMODEL_H

#include "basepawnmodel.h" //Cette partie inclut le fichier d'en-tête "basepawnmodel.h" car la classe "BishopPawnModel" hérite de la classe "BasePawnModel".

class BishopPawnModel: public BasePawnModel { //Cette partie définit la classe "BishopPawnModel" qui hérite de la classe "BasePawnModel". Cela signifie que la classe "BishopPawnModel" a tous les membres et les fonctionnalités de la classe "BasePawnModel" en plus de ses propres membres et fonctionnalités spécifiques aux pions de type fou.

public:
    BishopPawnModel(BoardPosition position, PlayerType owner, PawnType type, QString imagePath);

    bool validateMove(BoardPosition positionToMove, BasePawnModel *pawnOnPositionToMove, BoardPosition *requestedActivePawnPosition);
//Cette partie déclare le constructeur de la classe "BishopPawnModel". Le constructeur prend en paramètres la position du pion sur le plateau, le propriétaire du pion, le type de pion, et le chemin de l'image associée au pion.

    //La classe "BishopPawnModel" implémente également la fonction "validateMove", héritée de la classe "BasePawnModel". Cette fonction est utilisée pour valider les mouvements spécifiques aux pions de type fou sur le plateau d'échecs. Elle prend en compte la position de destination du mouvement, le pion présent sur cette position et la position du pion actif qui souhaite effectuer le mouvement.
};

#endif // BISHOPPAWNMODEL_H
