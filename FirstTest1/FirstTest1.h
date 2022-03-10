#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_FirstTest1.h"


class FirstTest1 : public QMainWindow
{
    Q_OBJECT

public:
    FirstTest1(QWidget *parent = Q_NULLPTR);

private:
    Ui::FirstTest1Class ui;
};
