#include <QApplication>
// Підключаємо .h файл з визначенням
// нашого класу ParentWidget
#include "parentwidget.h"
int main(int lArgc, char *lArgv[])
{
QApplication lApplication(lArgc, lArgv);
// Створюємо та показуємо вікно програми
ParentWidget lParentWidget;
lParentWidget.show();
return lApplication.exec();
}
