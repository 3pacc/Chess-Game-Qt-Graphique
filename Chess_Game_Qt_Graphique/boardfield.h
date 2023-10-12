#ifndef BOARDFIELD_H
#define BOARDFIELD_H

#include <QGraphicsRectItem>
#include <QGraphicsSceneMouseEvent>
#include <boardposition.h>
//Cette partie inclut les fichiers d'en-tête nécessaires pour la classe "BoardField". Il inclut les fichiers d'en-tête "QGraphicsRectItem" et "QGraphicsSceneMouseEvent", ainsi que le fichier d'en-tête "boardposition.h".

class BoardField: public QGraphicsRectItem { //Cette partie définit la classe "BoardField" qui hérite de la classe "QGraphicsRectItem". Cela signifie que la classe "BoardField" a tous les membres et les fonctionnalités de la classe "QGraphicsRectItem" en plus de ses propres membres et fonctionnalités spécifiques aux cases du plateau.

public:
    BoardField(QColor backgroundColor,
               BoardPosition position,
               QGraphicsItem *parent = nullptr);

    static int defaultWidthHeight;

    BoardPosition getPosition();

private:
    BoardPosition position;
    //Cette partie déclare le constructeur de la classe "BoardField". Le constructeur prend en paramètres la couleur de l'arrière-plan de la case, la position de la case sur le plateau et un pointeur vers l'élément graphique parent (par défaut, nullptr).

    //La classe "BoardField" a également une variable statique "defaultWidthHeight" qui représente la largeur et la hauteur par défaut d'une case du plateau.

    //La classe a une fonction publique "getPosition()" qui renvoie la position de la case sur le plateau.
};

#endif // BOARDFIELD_H
