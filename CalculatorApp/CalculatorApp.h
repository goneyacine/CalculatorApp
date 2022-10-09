#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_CalculatorApp.h"

class CalculatorApp : public QMainWindow
{
    Q_OBJECT

public:
    CalculatorApp(QWidget *parent = nullptr);
    ~CalculatorApp();

private:
    Ui::CalculatorAppClass ui;
};
