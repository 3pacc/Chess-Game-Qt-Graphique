#include "bishoppawnmodel.h"

BishopPawnModel::BishopPawnModel(BoardPosition position, PlayerType owner, PawnType type, QString imagePath): BasePawnModel (position, owner, type, imagePath) {}

//Cette partie est la définition du constructeur de la classe "BishopPawnModel". Le constructeur utilise la liste d'initialisation pour appeler le constructeur de la classe de base "BasePawnModel" avec les paramètres fournis. Cela initialise la position, le propriétaire, le type et le chemin de l'image du pion fou à l'aide du constructeur de la classe de base.

bool BishopPawnModel::validateMove(BoardPosition positionToMove, BasePawnModel *pawnOnPositionToMove, BoardPosition *requestedActivePawnPosition) {
    if (pawnOnPositionToMove && pawnOnPositionToMove->owner == this->owner) {
        return false;
    }

    return validateDiagonalMove(positionToMove, pawnOnPositionToMove);
//Cette fonction "validateMove" implémente la validation du mouvement spécifique pour le pion fou. Elle vérifie d'abord si un autre pion se trouve sur la position de destination et si ce pion appartient au même propriétaire. Si c'est le cas, le mouvement est invalide et la fonction renvoie false.

    //Ensuite, la fonction appelle la fonction héritée "validateDiagonalMove" de la classe "BasePawnModel" pour vérifier si le mouvement est diagonal. La fonction "validateDiagonalMove" est définie dans la classe de base et effectue les vérifications spécifiques pour un mouvement diagonal.

    //Si les vérifications passent, la fonction renvoie true, indiquant que le mouvement est valide pour un pion fou.

    //J'espère que cela vous aide à comprendre le contenu du fichier source "bishoppawnmodel.cpp".
}
