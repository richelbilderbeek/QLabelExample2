#include <QApplication>
#include "qtdialog.h"

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  QtDialog d;
  d.show();
  return a.exec();
}

