#ifndef QUADRO_H
#define QUADRO_H

#include <QWidget>
#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include <QPixmap>


class quadro : public QWidget
{
    Q_OBJECT
protected:
    QLabel *labelquadro;
    QPixmap pix;
    int posicao;
    int tipo;
    static std::vector<int> v_pos_tipo;
    static std::vector<QString> v;
    static int pontuacao;
    QWidget *prox_quadro;

public:
    explicit quadro(QWidget *parent = nullptr);
    explicit quadro(int posicao);
    void prosseguir(int posicao);
    static void fill_v_pos_tipo();
    static void fill_v_img();
    virtual void buttonDisplay() = 0;

signals:

public slots:

};

#endif // QUADRO_H
