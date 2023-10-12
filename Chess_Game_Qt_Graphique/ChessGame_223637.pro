QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets #Ces lignes définissent les modules de la bibliothèque Qt utilisés dans votre application. "core" et "gui" sont nécessaires, et si la version de Qt est supérieure à 4, le module "widgets" est également inclus.

####################

TARGET = ChessGame_TRIBAK
TEMPLATE = app
#Ces lignes définissent le nom de votre application (ChessGame_TRIBAK) et le type de projet (app).
########################



DEFINES += QT_DEPRECATED_WARNINGS #Cette ligne ajoute une définition pour activer les avertissements liés aux fonctionnalités obsolètes de Qt.


CONFIG += c++11 #Cette ligne configure le projet pour utiliser les fonctionnalités du langage C++11


####################################
#Ces lignes spécifient les fichiers sources (.cpp) à inclure dans votre projet.
SOURCES += \
        actionbutton.cpp \
        basepawnmodel.cpp \
        bishoppawnmodel.cpp \
        boardfield.cpp \
        boardframefield.cpp \
        boardview.cpp \
        boardviewmodel.cpp \
        congratulationsview.cpp \
        constants.cpp \
        gameview.cpp \
        kingpawnmodel.cpp \
        knightpawnmodel.cpp \
        main.cpp \
        pawnfield.cpp \
        pawnpawnmodel.cpp \
        pawnviemodel.cpp \
        playerview.cpp \
        queenpawnmodel.cpp \
        rookpawnmodel.cpp \
        utils.cpp
#####################################
#Ces lignes spécifient les fichiers d'en-tête (.h) à inclure dans votre projet.
HEADERS += \
        actionbutton.h \
        basepawnmodel.h \
        bishoppawnmodel.h \
        boardfield.h \
        boardframefield.h \
        boardposition.h \
        boardview.h \
        boardviewmodel.h \
        congratulationsview.h \
        constants.h \
        gameview.h \
        helpers.h \
        kingpawnmodel.h \
        knightpawnmodel.h \
        pawnfield.h \
        pawnpawnmodel.h \
        pawnviewmodel.h \
        playerview.h \
        queenpawnmodel.h \
        rookpawnmodel.h \
        utils.h
######################################

FORMS += #Cette ligne spécifie les fichiers de formulaire (.ui) à inclure dans votre projet. Dans votre cas, il est vide, ce qui signifie qu'il n'y a pas de fichiers de formulaire inclus.

####################################################
#Ces lignes définissent le chemin de destination pour le binaire généré lors de la construction de votre application. Selon la plateforme, le chemin peut différer. Par exemple, sur QNX, le chemin est défini comme "/tmp/ChessGame_TRIBAK/bin", et sur les systèmes Unix autres qu'Android, le chemin est défini comme "/opt/ChessGame_TRIBAK/bin". La dernière ligne ajoute la cible à la liste des installations si le chemin de destination n'est pas vide.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
#######################################################

DISTFILES += #Cette ligne spécifie les fichiers à distribuer avec votre application lors de la construction. Dans votre cas, il est vide, ce qui signifie qu'il n'y a pas de fichiers supplémentaires à distribuer.

##########################
RESOURCES += \
    resources.qrc
    #Cette ligne spécifie le fichier de ressources (.qrc) à inclure dans votre projet. Le fichier "resources.qrc" contient des ressources telles que des images, des icônes ou d'autres fichiers nécessaires à votre application.
