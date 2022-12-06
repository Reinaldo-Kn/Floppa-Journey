#include "quadro_escolha.h"
#include "quadro_historia.h"
#include "quadro.h"
#include <QDebug>
#include <QString>

std::vector<int> quadro_escolha::v_decisao;
std::vector<QString> quadro_escolha::v_decisao_text;

quadro_escolha::quadro_escolha(QWidget *parent)
    : quadro{parent}
{
}

quadro_escolha::quadro_escolha(int posicao){
    fill_v_decisao();
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

void quadro_escolha::buttonDisplay(){

    QPushButton *escolha1 = new QPushButton("Fazer isso", this);
    escolha1->setGeometry(650, 670, 350, 55);

    QPushButton *escolha2 = new QPushButton("Fazer isso", this);
    escolha2->setGeometry(15, 670, 350, 55);

    connect(escolha1, SIGNAL(clicked(bool)), this, SLOT(AcaoAoClicar1()));

    connect(escolha2, SIGNAL(clicked(bool)), this, SLOT(AcaoAoClicar2()));


    escolha1->setStyleSheet("background-color: white;"
                              "border-style: outset;"
                              "color: black;"
                              "font-size: 28px");

    escolha2->setStyleSheet("background-color: white;"
                              "border-style: outset;"
                              "color: black;"
                              "font-size: 28px");

}

void quadro_escolha::AcaoAoClicar1(){
    if(v_decisao[posicao] == 0){
        pontuacao = pontuacao + 1;
    }

    this->hide();
    prosseguir(posicao);
    delete this;
}

void quadro_escolha::AcaoAoClicar2(){
    if(v_decisao[posicao] == 1){
        pontuacao = pontuacao + 1;
    }

    this->hide();
    prosseguir(posicao);
    delete this;
}

void quadro_escolha::fill_v_decisao(){
    if(v_decisao.empty()){
        v_decisao.push_back(1);
        v_decisao.push_back(1);
        v_decisao.push_back(1);
        v_decisao.push_back(1);//
        v_decisao.push_back(1);
        v_decisao.push_back(0);//
        v_decisao.push_back(1);
        v_decisao.push_back(0);//
    }
}
