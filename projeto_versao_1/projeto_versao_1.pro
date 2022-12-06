TEMPLATE = app
TARGET = projeto_versao_1
QT = core gui widgets

SOURCES += \
    janela.cpp \
    main.cpp \
    quadro.cpp \
    quadro_escolha.cpp \
    quadro_final.cpp \
    quadro_historia.cpp

HEADERS += \
    janela.h \
    quadro.h \
    quadro_escolha.h \
    quadro_final.h \
    quadro_historia.h

DISTFILES += \
    1.png \
    2.png \
    3.png \
    4.png \
    5.png \
    6.png \
    7.png \
    8.png \
    BADFinal.png \
    GOODfinal.png

RESOURCES += \
    imagens.qrc
