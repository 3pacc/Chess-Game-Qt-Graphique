#include "actionbutton.h"
#include <QBrush>
#include <QGraphicsRectItem>
#include <QFont>
#include "constants.h"
#include "utils.h"

ActionButton::ActionButton(QString title) {
    setRect(0, 0, 200, 50);

    QColor backgroundColor = QColor(157, 128, 101);
    Utils::setBackgroundColor(backgroundColor, this);

    QColor textColor = QColor(44, 41, 51);
    QGraphicsTextItem *text = Utils::createTextItem(title, 20, textColor, this);
    double xPosition = rect().width()/2 - text->boundingRect().width()/2;
    double yPosition = rect().height()/2 - text->boundingRect().height()/2;

    text->setPos(xPosition, yPosition);

    // allow responding to hover events
    setAcceptHoverEvents(true);
    /* Cette partie est la définition du
     *  constructeur ActionButton. Elle configure
     *  la taille et les dimensions du bouton en utilisant
     *   setRect(0, 0, 200, 50). Ensuite, elle définit la couleu
     *   r de fond du bouton en utilisant la fonction
     *   setBackgroundColor de la classe Utils
     *   avec la couleur définie (157, 128, 101).
     *


Elle crée également un objet QGraphicsTextItem pour afficher le titre du bouton en utilisant la fonction createTextItem de la classe Utils. Le texte est centré horizontalement et verticalement dans le bouton en utilisant les calculs des positions xPosition et yPosition.
*/
}


void ActionButton::mousePressEvent(QGraphicsSceneMouseEvent *event) {
    emit buttonPressed();
    //Cette fonction est appelée lorsqu'un événement de clic de souris est détecté sur le bouton. Elle émet le signal buttonPressed().
}

void ActionButton::hoverEnterEvent(QGraphicsSceneHoverEvent *event) {
    QColor backgroundColor = QColor(196, 178, 140);
    Utils::setBackgroundColor(backgroundColor, this);
    //Cette fonction est appelée lorsque l'événement de survol du bouton est détecté. Elle change la couleur de fond du bouton en utilisant la fonction setBackgroundColor de la classe Utils avec la nouvelle couleur (196, 178, 140).
}

void ActionButton::hoverLeaveEvent(QGraphicsSceneHoverEvent *event) {
    QColor backgroundColor = QColor(157, 128, 101);
    Utils::setBackgroundColor(backgroundColor, this);
    //Cette fonction est appelée lorsque le pointeur de la souris quitte la zone du bouton après un survol. Elle rétablit la couleur de fond initiale du bouton en utilisant la fonction setBackgroundColor de la classe Utils avec la couleur d'origine (157, 128, 101).
}
