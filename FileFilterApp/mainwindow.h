#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btn_SelectInput_clicked();
    void on_btn_SelectOutput_clicked();
    void on_btn_Process_clicked();

private:
    Ui::MainWindow *ui;

    QVector<int> readNumbersFromFile(const QString &filename);
    bool writeNumbersToFile(const QString &filename, const QVector<int> &numbers);

    bool isEven(int n);
    bool isDivisibleBy3Not7(int n);
    bool isPerfectSquare(int n);
};

#endif // MAINWINDOW_H