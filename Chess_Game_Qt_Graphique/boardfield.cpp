#include "boardfield.h"
#include <utils.h>
#include <gameview.h>
//Cette partie inclut les fichiers d'en-tête nécessaires pour la classe "BoardField". Il inclut les fichiers d'en-tête "utils.h" et "gameview.h".

int BoardField::defaultWidthHeight = 60; //Cette ligne initialise la variable statique "defaultWidthHeight" de la classe "BoardField" avec une valeur de 60. Cette variable représente la largeur et la hauteur par défaut d'une case du plateau.

extern GameView *game; //Cette déclaration externe indique l'existence d'un objet "GameView" externe nommé "game". Cela signifie que cet objet est défini dans un autre fichier source et est utilisé ici.

BoardField::BoardField(QColor backgroundColor,
                       BoardPosition position,
                       QGraphicsItem *parent): QGraphicsRectItem(parent) {
    this->position = position;

    Utils::setBackgroundColor(backgroundColor, this);
    setPen(Qt::NoPen);
    setAcceptHoverEvents(true);
    //ette partie définit le constructeur de la classe "BoardField". Le constructeur prend en paramètres la couleur de l'arrière-plan de la case, la position de la case sur le plateau et un pointeur vers l'élément graphique parent.

    //Dans le constructeur, la position de la case est initialisée avec la valeur fournie. Ensuite, la fonction "setBackgroundColor" de la classe "Utils" est appelée pour définir la couleur d'arrière-plan de la case en utilisant la couleur fournie. La fonction "setPen" est utilisée pour désactiver le contour de la case en utilisant "Qt::NoPen". Enfin, la fonction "setAcceptHoverEvents" est utilisée pour permettre à la case de répondre aux événements de survol.
}

BoardPosition BoardField::getPosition() { //Cette fonction "getPosition" renvoie la position de la case sur le plateau.
    return position;
}
