#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QTime>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:
    void paintEvent(QPaintEvent *event) override;

private slots:
    void updateClock();

private:
    QTimer *timer;
    QTime currentTime;

    void drawClockFace(QPainter &painter);
    void drawHourHand(QPainter &painter, int hour, int minute);
    void drawMinuteHand(QPainter &painter, int minute);
    void drawSecondHand(QPainter &painter, int second);
};

#endif // MAINWINDOW_H