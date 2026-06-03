#include "mainwindow.h"
#include <QPainter>
#include <QPen>
#include <QBrush>
#include <QFont>
#include <QtMath>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle("Аналоговые часы");
    setFixedSize(400, 400);

    // Таймер для обновления каждую секунду
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::updateClock);
    timer->start(1000);

    currentTime = QTime::currentTime();
}

MainWindow::~MainWindow()
{
    timer->stop();
}

void MainWindow::updateClock()
{
    currentTime = QTime::currentTime();
    update(); // Перерисовываем окно
}

void MainWindow::drawClockFace(QPainter &painter)
{
    int side = qMin(width(), height());
    painter.setRenderHint(QPainter::Antialiasing);

    // Перемещаем центр в середину окна
    painter.translate(width() / 2, height() / 2);
    painter.scale(side / 200.0, side / 200.0);

    // Рисуем круг циферблата
    painter.setPen(QPen(Qt::black, 2));
    painter.setBrush(QBrush(Qt::white));
    painter.drawEllipse(-95, -95, 190, 190);

    // Рисуем деления
    painter.setPen(QPen(Qt::black, 1));
    for (int i = 0; i < 60; ++i) {
        double angle = i * 6.0; // 360 / 60 = 6 градусов
        double rad = angle * M_PI / 180.0;
        int x1 = 85 * cos(rad);
        int y1 = 85 * sin(rad);

        if (i % 5 == 0) {
            // Часовые деления (жирные)
            int x2 = 75 * cos(rad);
            int y2 = 75 * sin(rad);
            painter.drawLine(x1, y1, x2, y2);
        } else {
            // Минутные деления (тонкие)
            int x2 = 80 * cos(rad);
            int y2 = 80 * sin(rad);
            painter.drawLine(x1, y1, x2, y2);
        }
    }

    // Рисуем числа (1-12)
    QFont font = painter.font();
    font.setPointSize(12);
    painter.setFont(font);
    painter.setPen(QPen(Qt::black, 1));

    for (int i = 1; i <= 12; ++i) {
        double angle = (i * 30.0) * M_PI / 180.0;
        int x = 65 * cos(angle);
        int y = 65 * sin(angle);
        painter.drawText(x - 10, y - 8, 20, 16, Qt::AlignCenter, QString::number(i));
    }
}

void MainWindow::drawHourHand(QPainter &painter, int hour, int minute)
{
    // 360 / 12 = 30 градусов на час, плюс поправка на минуты (0.5 градуса в минуту)
    double angle = (hour % 12) * 30.0 + minute * 0.5;
    double rad = angle * M_PI / 180.0;

    painter.setPen(QPen(Qt::black, 3, Qt::SolidLine, Qt::RoundCap));
    painter.drawLine(0, 0, 50 * cos(rad), 50 * sin(rad));
}

void MainWindow::drawMinuteHand(QPainter &painter, int minute)
{
    // 360 / 60 = 6 градусов в минуту
    double angle = minute * 6.0;
    double rad = angle * M_PI / 180.0;

    painter.setPen(QPen(Qt::black, 2, Qt::SolidLine, Qt::RoundCap));
    painter.drawLine(0, 0, 75 * cos(rad), 75 * sin(rad));
}

void MainWindow::drawSecondHand(QPainter &painter, int second)
{
    // 360 / 60 = 6 градусов в секунду
    double angle = second * 6.0;
    double rad = angle * M_PI / 180.0;

    painter.setPen(QPen(Qt::red, 1, Qt::SolidLine, Qt::RoundCap));
    painter.drawLine(0, 0, 85 * cos(rad), 85 * sin(rad));

    // Рисуем маленький красный кружок в центре
    painter.setBrush(QBrush(Qt::red));
    painter.drawEllipse(-3, -3, 6, 6);
}

void MainWindow::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);

    QPainter painter(this);

    // Рисуем циферблат
    drawClockFace(painter);

    // Рисуем стрелки
    drawHourHand(painter, currentTime.hour(), currentTime.minute());
    drawMinuteHand(painter, currentTime.minute());
    drawSecondHand(painter, currentTime.second());
}