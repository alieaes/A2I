#include "stdafx.h"
#include "A2I.h"
#include "Logger/SharedLogger.h"

A2I::A2I( QWidget* parent )
    : QMainWindow( parent )
{
    LOGD( "TEST", "VERBOSE TEST {} {}", "asd", "Asd" );

    ui.setupUi( this );
}
