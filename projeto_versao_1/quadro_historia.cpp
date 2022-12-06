#include "quadro_historia.h"
#include "quadro_escolha.h"
#include "quadro.h"
#include <QDebug>
#include <QString>

quadro_historia::quadro_historia(QWidget *parent)
    : quadro{parent}
{
}

quadro_historia::quadro_historia(int posicao){

    setGeometry(300, 50, 1000, 750);
    this->posicao = posicao;
    labelquadro = new QLabel(this);
    pix.load(v[this->posicao]);


    labelquadro->setFixedWidth(this->width());
    labelquadro->setFixedHeight(this->height());
    labelquadro->setGeometry(this->width()/2 - labelquadro->width()/2,
                                    this->height()/2 - labelquadro->height()/2,
                                    this->width(),
                                    this->height());
    int w = labelquadro->width();
    int h = labelquadro->height();
    labelquadro->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));


    buttonDisplay();
}

void quadro_historia::buttonDisplay(){

    QPushButton *prosseguir = new QPushButton("Continuar", this);
    prosseguir->setGeometry(795, 680, 200, 55);

    prosseguir->setStyleSheet("background-color: white;"
                              "border-style: outset;"
                              "color: black;"
                              "font-size: 28px");

    connect(prosseguir, SIGNAL(clicked(bool)), this, SLOT(AcaoAoClicar()));
}

void quadro_historia::AcaoAoClicar(){
    // o que estiver aqui vai ser executado
    //quadro1 = new quadro(this, Qt::Window);
    //quadro1->show();
    prosseguir(posicao);
    delete this;
}
