#ifndef JANELA_H
#define JANELA_H

#include "quadro.h"
#include "quadro_historia.h"
#include <QMainWindow>
#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QPixmap>


class Janela : public QMainWindow
{
    Q_OBJECT

    QLabel *label;
    QPixmap pix;
    int w, h;
    QWidget *quadro_historia1;
public:
    explicit Janela(QWidget *parent = nullptr);
    //void setGeometry(const QRect &);
signals:

public slots:
    void AcaoAoClicar();
};

#endif // JANELA_H
