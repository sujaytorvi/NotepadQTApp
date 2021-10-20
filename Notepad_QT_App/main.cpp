#include "mynotepadapp.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyNotepadApp w;
    w.show();
    return a.exec();
}
