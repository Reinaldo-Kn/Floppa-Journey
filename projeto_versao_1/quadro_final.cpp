#include "quadro_final.h"
#include "quadro_historia.h"
#include "quadro_escolha.h"
#include "janela.h"
#include <QDebug>
#include <QString>

quadro_final * quadro_final::instancia;

quadro_final* quadro_final::getInstancia(){
    if(instancia == nullptr)
    {
        instancia = new quadro_final();
    }
    return instancia;
}

quadro_final::quadro_final(QWidget *parent)
    : quadro{parent}
{
    setGeometry(300, 50, 1000, 750);
    labelquadro = new QLabel(this);

    labelquadro->setFixedWidth(this->width());
    labelquadro->setFixedHeight(this->height());
    labelquadro->setGeometry(this->width()/2 - labelquadro->width()/2,
                                    this->height()/2 - labelquadro->height()/2,
                                    this->width(),
                                    this->height());
    int w = labelquadro->width();
    int h = labelquadro->height();

    if(pontuacao > 1){
        pix.load(":/imagens/GOODfinal.png");
    }else{
        pix.load(":/imagens/BADFinal.png");
    }

    labelquadro->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
    quadro_final::buttonDisplay();
}

quadro_final::~quadro_final(){
    pontuacao = 0;
}

void quadro_final::buttonDisplay(){
    QPushButton *prosseguir = new QPushButton("Voltar a tela inicial", this);
    prosseguir->setGeometry(400, 685, 250, 55);

    prosseguir->setStyleSheet("background-color: black;"
                              "border-style: outset;"
                              "color: white;"
                              "font-size: 28px");

    connect(prosseguir, SIGNAL(clicked(bool)), this, SLOT(AcaoAoClicar()));
    qDebug() << this->posicao;
}

void quadro_final::AcaoAoClicar(){
    // o que estiver aqui vai ser executado
    //quadro1 = new quadro(this, Qt::Window);
    //quadro1->show();
    Janela *j = new Janela();
    j->show();
    instancia = nullptr;
    delete this;
}


