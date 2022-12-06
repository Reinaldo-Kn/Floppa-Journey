#ifndef QUADRO_FINAL_H
#define QUADRO_FINAL_H

#include <QWidget>

#include "quadro.h"

class quadro_final : public quadro
{
    Q_OBJECT
    static quadro_final *instancia;
    explicit quadro_final(QWidget *parent = nullptr);
public:
    void buttonDisplay();
    quadro_final operator=(quadro_final obj) = delete;
    quadro_final (const quadro_final &obj) = delete;
    static quadro_final *getInstancia();

    ~quadro_final();
signals:

public slots:
    void AcaoAoClicar();
};

#endif // QUADRO_FINAL_H
