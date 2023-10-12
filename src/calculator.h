#ifndef CALCULATORFORM_H
#define CALCULATORFORM_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Calculatorform; }
QT_END_NAMESPACE

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    Calculator(QWidget *parent = nullptr);
    ~Calculator();

private:
    Ui::Calculatorform *ui;
};
#endif // CALCULATORFORM_H
