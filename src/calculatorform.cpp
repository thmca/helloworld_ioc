#include "calculatorform.h"
#include "./ui_calculatorform.h"

calculatorform::calculatorform(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::calculatorform)
{
    ui->setupUi(this);
}

calculatorform::~calculatorform()
{
    delete ui;
}

