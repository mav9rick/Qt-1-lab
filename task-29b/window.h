#ifndef WINDOW_H
#define WINDOW_H
#include "QWidget"
#include "area.h"
#include "Qpushbutton"
class Window : public QWidget
{
protected:
    QTextCodec *codec;
    Area * area;
    QPushButton * btn;
public:
    Window();
};
#endif

