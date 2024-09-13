#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDebug>
#include <QFile>
#include <QFileDialog>
#include <QMainWindow>
#include <QMessageBox>
#include <QTextStream>

#include <QDateTime>
#include <QTimeZone>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void save(bool wannaClose);
    void funcDisplayTime();
    void connect_Display_Time();

private slots:
    void on_saveBtn_clicked();
    void on_openBtn_clicked();
    void on_saveClose_clicked();

private:
    Ui::MainWindow *ui;
    QString currentFilePath;
    QTimer *timer;
};
#endif // MAINWINDOW_H
