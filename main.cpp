#include "texasui.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    texasui w;
    w.show();

    return a.exec();
}
