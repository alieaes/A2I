#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_A2I.h"

class A2I : public QMainWindow
{
    Q_OBJECT

public:
    A2I( QWidget* parent = Q_NULLPTR );

private:
    Ui::A2IClass ui;
};
