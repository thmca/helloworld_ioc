#ifndef CALCULATORFORM_H
#define CALCULATORFORM_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class calculatorform; }
QT_END_NAMESPACE

class calculatorform : public QMainWindow
{
    Q_OBJECT

public:
    calculatorform(QWidget *parent = nullptr);
    ~calculatorform();

private:
    Ui::calculatorform *ui;
};
#endif // CALCULATORFORM_H
