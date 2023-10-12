#include "basepawnmodel.h"

BasePawnModel::BasePawnModel(BoardPosition position, PlayerType owner, PawnType type, QString imagePath) {
    this->position = position;
    this->owner = owner;
    this->type = type;
    this->imagePath = imagePath;
    didTakeFirstMove = false;

    /*Cette partie est la définition du constructeur
    de la classe "BasePawnModel". Il initialise les membres
de la classe avec les valeurs fournies en paramètres.
 La position, le propriétaire, le type de pion et le chemin
de l'image sont affectés aux membres correspondants de la classe,
 et la variable "didTakeFirstMove" est initialisée à false.
 */
}

bool BasePawnModel::pawnWantsToMoveByOneField(BoardPosition positionToMove) {
    int xDiference = positionToMove.x - this->position.x;
    int yDiference = positionToMove.y - this->position.y;
    int numbeOfFieldsToMove = std::max(abs(xDiference), abs(yDiference));

    return (numbeOfFieldsToMove == 1);

    /*Cette fonction vérifie si le pion souhaite se déplacer
     *  d'un seul champ sur le plateau. Elle calcule la différence
     *   en x et en y entre la position actuelle du pion et la
     *    position de destination. Le nombre de champs à parcourir
     *    est déterminé en prenant la valeur absolue de la plus grande
     *     différence entre les deux.

        La fonction renvoie true si le nombre de champs à parcourir est égal
 à 1, ce qui signifie que le déplacement est valide pour se déplacer
 d'un seul champ.
 */
}

bool BasePawnModel::validateDiagonalMove(BoardPosition positionToMove, BasePawnModel *pawnOnPositionToMove) {
    if (pawnOnPositionToMove && pawnOnPositionToMove->owner == this->owner) {
        return false;
    }

    int xDiference = positionToMove.x - this->position.x;
    int yDiference = positionToMove.y - this->position.y;

    if (abs(xDiference) != abs(yDiference)) {
        return false;
    }

    return true;

   /*Cette fonction valide les mouvements diagonaux du pion.
    *  Elle vérifie d'abord si un autre pion se trouve sur
    *   la position de destination, et si c'est le cas, elle vérifie
    *    si ce pion appartient au même propriétaire. Si le pion sur la
    *     position de destination appartient au même propriétaire,
    *      le mouvement est invalide et la fonction renvoie false.
    *      */
}

bool BasePawnModel::validateVerticalOrHorizontalMove(BoardPosition positionToMove, BasePawnModel *pawnOnPositionToMove) {
    if (pawnOnPositionToMove && pawnOnPositionToMove->owner == this->owner) {
        return false;
    }

    if ((positionToMove.x != this->position.x && positionToMove.y != this->position.y)) {
        return false;
    }

    return true;
}
