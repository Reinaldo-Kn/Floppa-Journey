#include "quadro.h"
#include "quadro_historia.h"
#include "quadro_escolha.h"
#include "quadro_final.h"
#include <QDebug>
#include <QLabel>
#include <QRectF>
#include <QWidget>
#include <QPixmap>
#include <QBrush>
#include <QPushButton>
#include <QWindow>
#include <QString>

std::vector<int> quadro::v_pos_tipo;
std::vector<QString> quadro::v;
int quadro::pontuacao;

quadro::quadro(QWidget *parent)
    : QWidget{parent}
{

}

void quadro::prosseguir(int posicao){
    if(posicao == 7){
        prox_quadro = quadro_final::getInstancia();
        prox_quadro->show();
    }else{
        if(v_pos_tipo[posicao+1])
        {
            prox_quadro = new quadro_historia(posicao+1);
            prox_quadro->show();
        }
        else if(v_pos_tipo[posicao+1] == 0)
        {
            prox_quadro = new quadro_escolha(posicao+1);
            prox_quadro->show();
        }
    }
}

void quadro::fill_v_pos_tipo()
{
    if(v_pos_tipo.empty()){
        v_pos_tipo.push_back(1);
        v_pos_tipo.push_back(1);
        v_pos_tipo.push_back(1);
        v_pos_tipo.push_back(0);
        v_pos_tipo.push_back(1);
        v_pos_tipo.push_back(0);
        v_pos_tipo.push_back(1);
        v_pos_tipo.push_back(0);
    }
}

void quadro::fill_v_img(){
    if(v.empty()){
        v.push_back(":/imagens/1.png");
        v.push_back(":/imagens/2.png");
        v.push_back(":/imagens/3.png");
        v.push_back(":/imagens/4.png");
        v.push_back(":/imagens/5.png");
        v.push_back(":/imagens/6.png");
        v.push_back(":/imagens/7.png");
        v.push_back(":/imagens/8.png");
    }
}
