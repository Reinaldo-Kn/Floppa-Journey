#ifndef QUADRO_HISTORIA_H
#define QUADRO_HISTORIA_H

#include <QWidget>

#include "quadro.h"

class quadro_historia : public quadro
{
    Q_OBJECT


public:
    explicit quadro_historia(QWidget *parent = nullptr);
    explicit quadro_historia(int posicao);
    void buttonDisplay();

signals:

public slots:
    void AcaoAoClicar();

};

#endif // QUADRO_HISTORIA_H
