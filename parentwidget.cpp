#include "parentwidget.h"
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
ParentWidget::ParentWidget(QWidget *parent) : QWidget(parent)
{
    // Створюємо мітку
    QLabel *lLabel = new QLabel(this); // Задаємо батьківський віджет – this,
    // тобто екземпляр класу ParentWidget.
    lLabel->setGeometry(50, 0, 100, 30); // Позиція відносно лівого верхнього
    // кута батьківського віджета.
    lLabel->setText("Text Label"); // Текст на мітці.
    // Створюємо кнопку, задаємо "батька", геометрію та текст
    QPushButton *lPushButton = new QPushButton(this);
    lPushButton->setGeometry(50, 50, 100, 30);
    lPushButton->setText("Close text Lable");

    connect(lPushButton, SIGNAL(clicked()), lLabel, SLOT(close()));

    QPushButton *lNewButton = new QPushButton(this);
    lNewButton->setGeometry(50, 150, 100, 30);
    lNewButton->setText("Close Window");

    // Створюємо поле вводу, задаємо "батька", геометрію та текст
    QLineEdit *lLineEdit = new QLineEdit(this);
    lLineEdit->setGeometry(50, 100, 100, 30);
    lLineEdit->setText("LineEdit");
    //lLineEdit->selectAll(); // Виділяємо текст у полі вводу(просто для прикладу)
    // Врешті решт змінюємо розміри батьківського віджета
    setGeometry(x(), y(), 400, 200);
    // та встановлюємо текст заголовку вікна
    setWindowTitle("Parent Widget Example");

    connect(lNewButton, SIGNAL(clicked()), this, SLOT(close()));
}
