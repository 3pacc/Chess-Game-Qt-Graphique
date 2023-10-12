#ifndef ACTIONBUTTON_H
#define ACTIONBUTTON_H

#include <QObject>
#include <QGraphicsRectItem>
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsSceneHoverEvent>
//Ces lignes incluent les fichiers d'en-tête nécessaires pour les classes et événements utilisés dans la définition de la classe ActionButton. QObject est inclus pour bénéficier des fonctionnalités de la métaprogrammation de Qt, QGraphicsRectItem est inclus car ActionButton hérite de cette classe, et QGraphicsSceneMouseEvent et QGraphicsSceneHoverEvent sont inclus pour gérer les événements de la scène graphique.

class ActionButton: public QObject, public QGraphicsRectItem  {
    Q_OBJECT
public:
    //cette partie définit la classe ActionButton, qui hérite à la fois de QObject et de QGraphicsRectItem. Elle contient des membres publics, tels que le constructeur ActionButton prenant un titre en paramètre, et les fonctions mousePressEvent, hoverEnterEvent et hoverLeaveEvent pour gérer les événements de la scène graphique.
    ActionButton(QString title);

    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void hoverEnterEvent(QGraphicsSceneHoverEvent *event);
    void hoverLeaveEvent(QGraphicsSceneHoverEvent *event);

signals:
    void buttonPressed();
    //La classe a également un signal nommé buttonPressed() qui sera émis lorsque le bouton est pressé.

private:
    void setBackgroundColor(Qt::GlobalColor color);//Enfin, il y a une fonction privée setBackgroundColor qui permet de définir la couleur de fond du bouton.
};

#endif // ACTIONBUTTON_H
