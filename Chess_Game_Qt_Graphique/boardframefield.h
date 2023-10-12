#ifndef BOARDFRAMEFIELD_H
#define BOARDFRAMEFIELD_H

#include <QGraphicsRectItem> //Cette partie inclut le fichier d'en-tête nécessaire pour la classe "BoardFrameField". Il inclut le fichier d'en-tête "QGraphicsRectItem".

class BoardFrameField: public QGraphicsRectItem  { //Cette partie définit la classe "BoardFrameField" qui hérite de la classe "QGraphicsRectItem". Cela signifie que la classe "BoardFrameField" a tous les membres et les fonctionnalités de la classe "QGraphicsRectItem" en plus de ses propres membres et fonctionnalités spécifiques aux cases du cadre du plateau.

public:
    BoardFrameField(QGraphicsItem *parent = nullptr);

    void setTitle(QString title);
    //Cette partie déclare le constructeur de la classe "BoardFrameField". Le constructeur prend en paramètre un pointeur vers l'élément graphique parent (par défaut, nullptr).

    //La classe "BoardFrameField" a également une fonction publique "setTitle()" qui permet de définir le titre du cadre du plateau.
};

#endif // BOARDFRAMEFIELD_H
