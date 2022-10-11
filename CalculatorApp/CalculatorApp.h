#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_CalculatorApp.h"




int countDigits(float number);

class CalculatorApp : public QMainWindow
{
    Q_OBJECT

public:
    CalculatorApp(QWidget *parent = nullptr);
    ~CalculatorApp();

    void calculateResult();

public slots:

    //number buttons 
    void numberZero();
    void numberOne();
    void numberTwo();
    void numberThree();
    void numberFour();
    void numberFive();
    void numberSix();
    void numberSeven();
    void numberEight();
    void numberNine();

    //operation buttons
    void add();
    void subtract();
    void divide();
    void multiply();
    void equals();

    //ohter
    void clear();
private:
    float firstNumber;
    //the code of the operation (0 means there is no operation)
    /*
    > note about the operation codes
    - 0 for no operation
    - 1 for addition
    - 2 for subtraction
    - 3 for multiplication
    - 4 for division
    */
    unsigned int operation;
    float secondNumber;
    float* currentNumber;
    Ui::CalculatorAppClass ui;
};
