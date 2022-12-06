#include "janela.h"
#include "quadro.h"
#include "quadro_historia.h"
#include "quadro_escolha.h"
#include <QDebug>
#include <QLabel>
#include <QRectF>
#include <QWidget>
#include <QPixmap>
#include <QBrush>
#include <QPushButton>
#include <QWindow>
#include <string>


Janela::Janela(QWidget *parent)
    : QMainWindow{parent}
{
    setGeometry(300, 50, 1000, 750);
    label = new QLabel(this);
    pix.load(":/imagens/Capa.png");

    label->setFixedWidth(this->width());
    label->setFixedHeight(this->height());
    label->setGeometry(this->width()/2 - label->width()/2,
                                    this->height()/2 - label->height()/2,
                                    this->width(),
                                    this->height());
    w = label->width();
    h = label->height();
    label->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));

    QPushButton *prosseguir = new QPushButton("Novo Jogo", this);
    prosseguir->setGeometry(100,650,800,70);
    prosseguir->setStyleSheet("background-color: black;"
                              "border-style: outset;"
                              "color: white;"
                              "font-size: 34px");

    quadro::fill_v_pos_tipo();
    quadro::fill_v_img();

    connect(prosseguir, SIGNAL(clicked(bool)), this, SLOT(AcaoAoClicar()));
}

void Janela::AcaoAoClicar(){
    // o que estiver aqui vai ser executado
    //quadro1 = new quadro(this, Qt::Window);
    //quadro1->show();
    quadro_historia1 = new quadro_historia(0);
    quadro_historia1->show();
    this->hide();
}

