#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    cars = {"Lada", "BMW", "Toyota", "Mercedes"};

    countries = {"Россия", "Германия", "США", "Китай"};

    ui->combo_Car->addItems(cars);
    ui->combo_Country->addItems(countries);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateSupplyList()
{
    ui->list_Supplies->clear();
    QList<QString> keys = supplies.keys();
    for (int i = 0; i < keys.size(); ++i) {
        const QString &car = keys[i];
        QSet<QString> countriesSet = supplies[car];
        QList<QString> countryList = countriesSet.values();
        for (int j = 0; j < countryList.size(); ++j) {
            ui->list_Supplies->addItem(car + " -> " + countryList[j]);
        }
    }
}

void MainWindow::on_btn_AddSupply_clicked()
{
    QString car = ui->combo_Car->currentText();
    QString country = ui->combo_Country->currentText();

    supplies[car].insert(country);
    updateSupplyList();
}

void MainWindow::on_btn_Analyze_clicked()
{
    QSet<QString> allCountries = QSet<QString>(countries.begin(), countries.end());

    QString result;
    result += "Результат анализа\n\n";

    for (int i = 0; i < cars.size(); ++i) {
        const QString &car = cars[i];
        QSet<QString> carCountries = supplies.value(car, QSet<QString>());

        QString status;
        if (carCountries.isEmpty()) {
            status = "Не доставлена ни в одну страну";
        } else if (carCountries == allCountries) {
            status = "Доставлена во все страны";
        } else {
            QList<QString> delivered = carCountries.values();
            QList<QString> missing;
            QList<QString> allCountriesList = allCountries.values();
            for (int j = 0; j < allCountriesList.size(); ++j) {
                const QString &country = allCountriesList[j];
                if (!carCountries.contains(country)) {
                    missing.append(country);
                }
            }

            QString deliveredStr;
            for (int j = 0; j < delivered.size(); ++j) {
                if (j > 0) deliveredStr += ", ";
                deliveredStr += delivered[j];
            }

            QString missingStr;
            for (int j = 0; j < missing.size(); ++j) {
                if (j > 0) missingStr += ", ";
                missingStr += missing[j];
            }

            status = QString("Доставлена в некоторые страны\n"
                             "   Поставляется в: %1\n"
                             "   Не поставляется в: %2")
                         .arg(deliveredStr, missingStr);

        }

        result += QString("Марка: %1\n%2\n\n").arg(car, status);
    }

    ui->textEdit_Result->setText(result);
}
void MainWindow::on_btn_ClearResult_clicked()
{
    ui->textEdit_Result->clear();
}

