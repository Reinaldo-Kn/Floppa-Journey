#include <QApplication>
#include <iostream>
#include "janela.h"

int main(int argc, char *argv[])
{
    
    try
    {
        QApplication app(argc, argv);
        Janela janela;
        janela.show();
        return app.exec();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }


}
