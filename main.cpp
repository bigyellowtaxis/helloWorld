#include <QApplication>
#include "indow.h"

int main(int argc, char **argv)
{
    QApplication app (argc, argv);
    window indow;
    indow.show();

    return app.exec();
}
