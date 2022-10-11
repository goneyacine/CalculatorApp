#include "CalculatorApp.h"

CalculatorApp::CalculatorApp(QWidget *parent) 
    : QMainWindow(parent)
{
    ui.setupUi(this);
    firstNumber = 0;
    operation = 0;
    secondNumber = 0;
    currentNumber = &firstNumber;

    //connecting number buttons
    connect(ui.number_zero, SIGNAL(clicked()), this, SLOT(numberZero()));
    connect(ui.number_one, SIGNAL(clicked()), this, SLOT(numberOne()));
    connect(ui.number_two, SIGNAL(clicked()), this, SLOT(numberTwo()));
    connect(ui.number_three, SIGNAL(clicked()), this, SLOT(numberThree()));
    connect(ui.number_four, SIGNAL(clicked()), this, SLOT(numberFour()));
    connect(ui.number_five, SIGNAL(clicked()), this, SLOT(numberFive()));
    connect(ui.number_six, SIGNAL(clicked()), this, SLOT(numberSix()));
    connect(ui.number_seven, SIGNAL(clicked()), this, SLOT(numberSeven()));
    connect(ui.number_eight, SIGNAL(clicked()), this, SLOT(numberEight()));
    connect(ui.number_nine, SIGNAL(clicked()), this, SLOT(numberNine()));

    //connecting operation buttons
    connect(ui.addition, SIGNAL(clicked()), this, SLOT(add()));
    connect(ui.subtraction, SIGNAL(clicked()), this, SLOT(subtract()));
    connect(ui.multiplication, SIGNAL(clicked()), this, SLOT(multiply()));
    connect(ui.division, SIGNAL(clicked()), this, SLOT(divide()));
    connect(ui.equal, SIGNAL(clicked()), this, SLOT(equals()));

    //other
    connect(ui.clear, SIGNAL(clicked()), this, SLOT(clear()));
}

CalculatorApp::~CalculatorApp()
{
}


void CalculatorApp::calculateResult()
{
    if (currentNumber == &firstNumber)
    {
        ui.outputField->display(firstNumber);
        ui.outputField->repaint();
            return;
    }


    switch (operation)
    {
    case 0:
        return;
        break;
    case 1:
        firstNumber = firstNumber + secondNumber;
        ui.outputField->display(firstNumber);
        ui.outputField->repaint();
        secondNumber = 0;
        currentNumber = &firstNumber;
        operation = 0;
        break;
    case 2:
        firstNumber = firstNumber - secondNumber;
        ui.outputField->display(firstNumber);
        ui.outputField->repaint();
        secondNumber = 0;
        currentNumber = &firstNumber;
        operation = 0;
        break;
    case 3:
        firstNumber = firstNumber * secondNumber;
        ui.outputField->display(firstNumber);
        ui.outputField->repaint();
        secondNumber = 0;
        currentNumber = &firstNumber;
        operation = 0;
        break;
    case 4:
        if (secondNumber != 0)
            firstNumber = firstNumber / secondNumber;
        else
            firstNumber = 0xFFFFFFFF;
        ui.outputField->display(firstNumber);
        ui.outputField->repaint();
        secondNumber = 0;
        currentNumber = &firstNumber;
        operation = 0;
        break;
    }
}


void CalculatorApp::numberZero()
{
    if ((int)(*currentNumber) != *currentNumber)
        return;

    (* currentNumber) *= 10;
    ui.outputField->display(*currentNumber);
    ui.outputField->repaint();
}
void CalculatorApp::numberOne()
{
    if ((int)(*currentNumber) != *currentNumber)
    {
       *currentNumber += 1 / pow(10,countDigits(*currentNumber));
    }
    else 
    {
        (*currentNumber) *= 10;
        (*currentNumber)++;
    }
        ui.outputField->display(*currentNumber);
        ui.outputField->repaint();
}
void CalculatorApp::numberTwo()
{
    if ((int)(*currentNumber) != *currentNumber)
    {
        *currentNumber += 2 / pow(10, countDigits(*currentNumber));
    }
    else
    {
        (*currentNumber) *= 10;
        (*currentNumber) += 2;
    }
        ui.outputField->display(*currentNumber);
        ui.outputField->repaint();
}
void CalculatorApp::numberThree()
{
    if ((int)(*currentNumber) != *currentNumber)
    {
        *currentNumber += 3 / pow(10, countDigits(*currentNumber));
    }
    else
    {
        (*currentNumber) *= 10;
        (*currentNumber) += 3;
    }
        ui.outputField->display(*currentNumber);
        ui.outputField->repaint();
}
void CalculatorApp::numberFour()
{
    if ((int)(*currentNumber) != *currentNumber)
    {
        *currentNumber += 4 / pow(10, countDigits(*currentNumber));
    }
    else
    {
        (*currentNumber) *= 10;
        (*currentNumber) += 4;
    }
        ui.outputField->display(*currentNumber);
        ui.outputField->repaint();
}
void CalculatorApp::numberFive()
{
    if ((int)(*currentNumber) != *currentNumber)
    {
        *currentNumber += 5 / pow(10, countDigits(*currentNumber));
    }
    else
    {
        (*currentNumber) *= 10;
        (*currentNumber) += 5;
    }
        ui.outputField->display(*currentNumber);
        ui.outputField->repaint();
}
void CalculatorApp::numberSix()
{
    if ((int)(*currentNumber) != *currentNumber)
    {
        *currentNumber += 6 / pow(10, countDigits(*currentNumber));
    }
    else
    {
        (*currentNumber) *= 10;
        (*currentNumber) += 6;
    }
        ui.outputField->display(*currentNumber);
        ui.outputField->repaint();

}
void CalculatorApp::numberSeven()
{
    if ((int)(*currentNumber) != *currentNumber)
    {
        *currentNumber += 7 / pow(10, countDigits(*currentNumber));
    }
    else
    {
        (*currentNumber) *= 10;
        (*currentNumber) += 7;
    }
        ui.outputField->display(*currentNumber);
        ui.outputField->repaint();
}
void CalculatorApp::numberEight()
{
    if ((int)(*currentNumber) != *currentNumber)
    {
        *currentNumber += 8 / pow(10, countDigits(*currentNumber));
    }
    else
    {
        (*currentNumber) *= 10;
        (*currentNumber) += 8;
    }
        ui.outputField->display(*currentNumber);
        ui.outputField->repaint();
}
void CalculatorApp::numberNine()
{
    if ((int)(*currentNumber) != *currentNumber)
    {
        *currentNumber += 9 / pow(10, countDigits(*currentNumber));
    }
    else
    {
        (*currentNumber) *= 10;
        (*currentNumber) += 9;
    }
        ui.outputField->display(*currentNumber);
        ui.outputField->repaint();
}

void CalculatorApp::add()
{

    if (currentNumber == &secondNumber)
    {
        calculateResult();
        return;
    }
    currentNumber = &secondNumber;
    *currentNumber = 0;
    operation = 1;
    ui.outputField->display(0);
    ui.outputField->repaint();
}


void CalculatorApp::subtract()
{

    if (currentNumber == &secondNumber)
    {
        calculateResult();
        return;
    }
    currentNumber = &secondNumber;
    *currentNumber = 0;
    operation = 2;
    ui.outputField->display(0);
    ui.outputField->repaint();
}



void CalculatorApp::multiply()
{

    if (currentNumber == &secondNumber)
    {
        calculateResult();
        return;
    }
    currentNumber = &secondNumber;
    *currentNumber = 0;
    operation = 3;
    ui.outputField->display(0);
    ui.outputField->repaint();
}



void CalculatorApp::divide()
{

    if (currentNumber == &secondNumber)
    {
        calculateResult();
        return;
    }
    currentNumber = &secondNumber;
    *currentNumber = 0;
    operation = 4;
    ui.outputField->display(0);
    ui.outputField->repaint();
}
void CalculatorApp::equals()
{
    calculateResult();
}

void CalculatorApp::clear()
{
    firstNumber = 0;
    secondNumber = 0;
    operation = 0;
    currentNumber = &firstNumber;
    ui.outputField->display(0);
    ui.outputField->repaint();
}

int countDigits(float number)
{
    int digitsCount = 0;
    while (number != 0)
    {
        number *= 10;
        number = number - (int)number;
        digitsCount++;
    }

        return digitsCount;
}