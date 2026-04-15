#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSet>
#include <QMap>

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
    void on_btn_AddSupply_clicked();
    void on_btn_Analyze_clicked();

    void on_btn_ClearResult_clicked();

private:
    Ui::MainWindow *ui;

    QStringList cars;
    QStringList countries;
    QMap<QString, QSet<QString>> supplies;

    void updateSupplyList();
};

#endif // MAINWINDOW_H