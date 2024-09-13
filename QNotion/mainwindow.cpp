#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect_Display_Time();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete timer;
}

void MainWindow::on_saveBtn_clicked()
{
    save(false);
}

void MainWindow::on_openBtn_clicked()
{
    QString filter = "All Files (*.*) ;; Text Files (*.txt)";
    currentFilePath = QFileDialog::getOpenFileName(this, "Open File", "/", filter);
    if (currentFilePath.isEmpty()) {
        return;
    }
    QFile file(currentFilePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::critical(this, "Error", "Could not open the file for reading.");
        return;
    }
    QTextStream in(&file);
    QString fileContent = in.readAll();
    file.close();
    ui->content->setPlainText(fileContent);
    QMessageBox::information(this, "Success", "File read successfully!");
}

void MainWindow::on_saveClose_clicked()
{
    save(true);
}

void MainWindow::save(bool wannaClose)
{
    QFile file(currentFilePath);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qDebug() << "Could not open file for writing";
        return;
    }
    QTextStream out(&file);
    QString text = ui->content->toPlainText();
    out << text;
    file.close();
    QMessageBox::information(this, "Success", "File written successfully!");
    if (wannaClose)
        this->close();
}

void MainWindow::connect_Display_Time()
{
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::funcDisplayTime);
    timer->start(500);
}

void MainWindow::funcDisplayTime()
{
    ui->displayTime->clear();
    ui->displayTime->setText(QDateTime::currentDateTimeUtc().toString("hh:mm:ss t"));
    qDebug() << QDateTime::currentDateTime();
}
