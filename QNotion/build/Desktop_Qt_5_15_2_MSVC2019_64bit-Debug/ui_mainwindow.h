/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTextEdit *content;
    QPushButton *openBtn;
    QPushButton *saveBtn;
    QPushButton *saveClose;
    QLabel *displayTime;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(950, 700);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        content = new QTextEdit(centralwidget);
        content->setObjectName(QString::fromUtf8("content"));
        content->setGeometry(QRect(10, 20, 760, 660));
        content->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 193);\n"
"color: rgb(0, 0, 0);"));
        openBtn = new QPushButton(centralwidget);
        openBtn->setObjectName(QString::fromUtf8("openBtn"));
        openBtn->setGeometry(QRect(780, 70, 161, 41));
        openBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border-radius: 5px;\n"
"font: 10pt \"Segoe UI\";"));
        saveBtn = new QPushButton(centralwidget);
        saveBtn->setObjectName(QString::fromUtf8("saveBtn"));
        saveBtn->setGeometry(QRect(780, 130, 161, 41));
        saveBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 85, 0);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 5px;\n"
"font: 10pt \"Segoe UI\";"));
        saveClose = new QPushButton(centralwidget);
        saveClose->setObjectName(QString::fromUtf8("saveClose"));
        saveClose->setGeometry(QRect(780, 180, 161, 41));
        saveClose->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 5px;\n"
"font: 10pt \"Segoe UI\";"));
        displayTime = new QLabel(centralwidget);
        displayTime->setObjectName(QString::fromUtf8("displayTime"));
        displayTime->setGeometry(QRect(786, 19, 151, 41));
        displayTime->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);\n"
"font: 700 11pt \"Segoe UI\";"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 950, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        openBtn->setText(QCoreApplication::translate("MainWindow", "Open text file", nullptr));
        saveBtn->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        saveClose->setText(QCoreApplication::translate("MainWindow", "Save and Close", nullptr));
        displayTime->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
