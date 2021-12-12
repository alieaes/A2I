#include "stdafx.h"

#include "A2I.h"
#include <QtWidgets/QApplication>

int main( int argc, char* argv[] )
{
    QApplication a( argc, argv );
    A2I w;
    w.show();
    return a.exec();
}
