#include "CalculatorApp.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CalculatorApp w;
    w.show();
    return a.exec();
}
