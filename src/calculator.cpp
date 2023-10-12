#include "calculator.h"
#include "./ui_calculator.h"

Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculatorform)
{
    ui->setupUi(this);
}

Calculator::~Calculator()
{
    delete ui;
}

