#ifndef QUADRO_ESCOLHA_H
#define QUADRO_ESCOLHA_H

#include <QWidget>
#include <QString>

#include "quadro.h"

class quadro_escolha : public quadro
{
    Q_OBJECT
    static std::vector<int> v_decisao;
    static std::vector<QString> v_decisao_text;
    static void fill_v_decisao();
public:
    explicit quadro_escolha(QWidget *parent = nullptr);
    explicit quadro_escolha(int posicao);
    void buttonDisplay();

signals:

public slots:
    void AcaoAoClicar1();
    void AcaoAoClicar2();
};

#endif // QUADRO_ESCOLHA_H
