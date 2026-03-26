#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Array_clicked()
{
    int N = ui->lineEdit_N->text().toInt();

    QString input = ui->textEdit_Array->toPlainText();
    QStringList numbers = input.split(" ", Qt::SkipEmptyParts);

    // Проверка
    if (numbers.size() != N) {
        ui->label_ArrayResult->setText("Ошибка: введите " + QString::number(N) + " чисел!");
        return;
    }

    // массив
    QVector<int> arr;
    for (int i = 0; i < N; i++) {
        arr.append(numbers[i].toInt());
    }

    int firstElem = arr[0];

    for (int i = 1; i < N - 1; i++) {
        if (arr[i] % 2 == 0) {
            arr[i] = arr[i] + firstElem;
        }
    }

    QString result;
    for (int i = 0; i < N; i++) {
        result += QString::number(arr[i]) + " ";
    }

    ui->label_ArrayResult->setText("Результат: " + result);
}


void MainWindow::on_pushButton_Matrix_clicked()
{

    int m = ui->lineEdit_m->text().toInt();
    int n = ui->lineEdit_n->text().toInt();

    QString input = ui->textEdit_Matrix->toPlainText();
    QStringList lines = input.split("\n", Qt::SkipEmptyParts);

    if (lines.size() != m) {
        ui->label_MatrixResult->setText("Ошибка: введите " + QString::number(m) + " строк!");
        return;
    }

    QVector<QVector<int>> matrix;

    for (int i = 0; i < m; i++) {
        QStringList numbers = lines[i].split(" ", Qt::SkipEmptyParts);

        if (numbers.size() != n) {
            ui->label_MatrixResult->setText("Ошибка: в строке " + QString::number(i+1) +
                                            " должно быть " + QString::number(n) + " чисел!");
            return;
        }

        QVector<int> row;
        for (int j = 0; j < n; j++) {
            row.append(numbers[j].toInt());
        }
        matrix.append(row);
    }

    QString result;
    for (int i = 0; i < m; i++) {
        // среднее ариф
        int sum = 0;
        for (int j = 0; j < n; j++) {
            sum += matrix[i][j];
        }
        double average = (double)sum / n;

        int count = 0;
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] > average) {
                count++;
            }
        }

        result += "Строка " + QString::number(i+1) + ": " + QString::number(count) +
                  " элементов > среднего (" + QString::number(average, 'f', 2) + ")\n";
    }

    ui->label_MatrixResult->setText(result);
}

