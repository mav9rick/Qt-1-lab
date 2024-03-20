#ifndef AREA_H
#define AREA_H
#include "figura.h"
#include "QMainWindow"
#include "QObject"
#include "QWidget"
class Area : public QWidget
{
    int myTimer; // Индентификатор таймера
    float alpha; // Угол поворота
public:
    Area(QWidget *parent = 0);
    ~Area();
    MyLine *myline;
    MyRect *myrect;
protected:
    // Обработчики событий
    void paintEvent(QPaintEvent *event);
    void timerEvent(QTimerEvent *event);
    void showEvent(QShowEvent *event);
    void hideEvent(QHideEvent *event);
};
#endif

