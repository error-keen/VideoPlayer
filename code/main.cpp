#include "videoplayer.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    videoplayer w;
    w.show();
    return a.exec();
}
