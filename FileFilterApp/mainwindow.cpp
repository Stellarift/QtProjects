#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QFileDialog>
#include <QMessageBox>
#include <cmath>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->cb_Even->setChecked(true);
    ui->cb_DivisibleBy3Not7->setChecked(true);
    ui->cb_PerfectSquares->setChecked(true);

    ui->lineEdit_InputFile->setText("input.txt");
    ui->lineEdit_OutputFile->setText("output.txt");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_SelectInput_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this,
                                                    "Выберите входной файл", "", "Text Files (*.txt)");
    if (!filename.isEmpty()) {
        ui->lineEdit_InputFile->setText(filename);
    }
}

void MainWindow::on_btn_SelectOutput_clicked()
{
    QString filename = QFileDialog::getSaveFileName(this,
                                                    "Выберите выходной файл", "", "Text Files (*.txt)");
    if (!filename.isEmpty()) {
        ui->lineEdit_OutputFile->setText(filename);
    }
}

QVector<int> MainWindow::readNumbersFromFile(const QString &filename)
{
    QVector<int> numbers;
    QFile file(filename);

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        return numbers;
    }

    QTextStream stream(&file);
    while (!stream.atEnd()) {
        int num;
        stream >> num;
        if (!stream.status()) {
            numbers.append(num);
        }
    }

    file.close();
    return numbers;
}

bool MainWindow::writeNumbersToFile(const QString &filename, const QVector<int> &numbers)
{
    QFile file(filename);

    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        return false;
    }

    QTextStream stream(&file);
    for (int i = 0; i < numbers.size(); ++i) {
        stream << numbers[i];
        if (i < numbers.size() - 1) {
            stream << " ";
        }
    }

    file.close();
    return true;
}

bool MainWindow::isEven(int n)
{
    return n % 2 == 0;
}

bool MainWindow::isDivisibleBy3Not7(int n)
{
    return (n % 3 == 0) && (n % 7 != 0);
}

bool MainWindow::isPerfectSquare(int n)
{
    if (n < 0) return false;
    int root = static_cast<int>(std::sqrt(n));
    return (root * root == n);
}

void MainWindow::on_btn_Process_clicked()
{
    QString inputFile = ui->lineEdit_InputFile->text();
    QString outputFile = ui->lineEdit_OutputFile->text();

    if (inputFile.isEmpty()) {
        QMessageBox::warning(this, "Ошибка", "Укажите входной файл!");
        return;
    }

    if (outputFile.isEmpty()) {
        QMessageBox::warning(this, "Ошибка", "Укажите выходной файл!");
        return;
    }

    QVector<int> numbers = readNumbersFromFile(inputFile);

    if (numbers.isEmpty()) {
        QMessageBox::warning(this, "Ошибка", "Файл пуст или не содержит чисел!");
        return;
    }

    QVector<int> filteredNumbers;
    QString resultText;

    resultText += "Исходные числа: ";
    for (int i = 0; i < numbers.size(); ++i) {
        resultText += QString::number(numbers[i]) + " ";
    }
    resultText += "\n\n";

    bool evenFilter = ui->cb_Even->isChecked();
    bool divFilter = ui->cb_DivisibleBy3Not7->isChecked();
    bool squareFilter = ui->cb_PerfectSquares->isChecked();

    for (int num : numbers) {
        bool include = false;

        if (evenFilter && isEven(num)) {
            include = true;
        }
        else if (divFilter && isDivisibleBy3Not7(num)) {
            include = true;
        }
        else if (squareFilter && isPerfectSquare(num)) {
            include = true;
        }

        if (include) {
            filteredNumbers.append(num);
        }
    }

    if (writeNumbersToFile(outputFile, filteredNumbers)) {
        ui->lbl_Status->setText("Обработка завершена");
        ui->lbl_Status->setStyleSheet("color: green;");
    } else {
        ui->lbl_Status->setText("Ошибка при записи файла!");
        ui->lbl_Status->setStyleSheet("color: red;");
        QMessageBox::warning(this, "Ошибка", "Не удалось записать в выходной файл!");
        return;
    }

    resultText += "Отфильтрованные числа (" + QString::number(filteredNumbers.size()) + "):\n";
    for (int i = 0; i < filteredNumbers.size(); ++i) {
        resultText += QString::number(filteredNumbers[i]) + " ";
    }

    ui->textEdit_Result->setText(resultText);

    QMessageBox::information(this, "Готово", "Найдено чисел: " + QString::number(filteredNumbers.size()));
}