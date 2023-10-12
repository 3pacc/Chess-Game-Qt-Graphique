#include "boardframefield.h"
#include "constants.h"
#include "utils.h"
#include "gameview.h"
#include <QFont>

//Cette partie inclut les fichiers d'en-tête nécessaires pour la classe "BoardFrameField". Il inclut les fichiers d'en-tête "constants.h", "utils.h" et "gameview.h".

extern GameView *game; //Cette déclaration externe indique l'existence d'un objet "GameView" externe nommé "game". Cela signifie que cet objet est défini dans un autre fichier source et est utilisé ici.


BoardFrameField::BoardFrameField(QGraphicsItem *parent): QGraphicsRectItem(parent) {
    QColor backgroundColor = QColor(55, 51, 63);
    Utils::setBackgroundColor(backgroundColor, this);
    setPen(Qt::NoPen);
    /*Cette partie définit le constructeur de la classe "BoardFrameField". Le constructeur prend en paramètre un pointeur vers l'élément graphique parent.

Dans le constructeur, la couleur d'arrière-plan du cadre du plateau est définie sur une couleur spécifique (55, 51, 63) en utilisant la classe "QColor". La fonction "setBackgroundColor" de la classe "Utils" est ensuite appelée pour définir la couleur d'arrière-plan du cadre du plateau en utilisant la couleur spécifiée. Enfin, la fonction "setPen" est utilisée pour désactiver le contour du cadre en utilisant "Qt::NoPen".
*/
}


/* Cette fonction "setTitle" permet de définir le titre du cadre du plateau. Elle prend en paramètre une chaîne de caractères représentant le titre.

Dans la fonction, un objet "QGraphicsTextItem" est créé en utilisant la fonction "createTextItem" de la classe "Utils". Le titre est affiché avec une taille de police de 16 et une couleur de texte par défaut spécifiée dans la classe "Constants".

Les positions x et y du titre sont calculées en fonction de la position et de la taille du cadre du plateau. Ensuite, la position du titre est définie en utilisant la fonction "setPos" de la classe "QGraphicsTextItem". Enfin, le titre est ajouté à la scène de jeu en utilisant l'objet "game->scene".
*/
void BoardFrameField::setTitle(QString title) {
    QGraphicsTextItem *titleItem = Utils::createTextItem(title, 16, Constants::defaultTextColor);

    double titleXPosition = this->pos().x() + this->boundingRect().width()/2 - titleItem->boundingRect().width()/2;
    double titleYPosition = this->pos().y() + this->boundingRect().height()/2 - titleItem->boundingRect().height()/2;;
    titleItem->setPos(titleXPosition, titleYPosition);
    game->scene->addItem(titleItem);
}
