/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_3;
    QPushButton *O0;
    QPushButton *O1;
    QPushButton *O2;
    QPushButton *O3;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(403, 254);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 0, 120, 31));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(140, 0, 120, 31));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(270, 0, 120, 31));
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 60, 90, 30));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(110, 60, 90, 30));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(10, 30, 120, 24));
        lineEdit->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        lineEdit->setReadOnly(true);
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(140, 30, 120, 24));
        lineEdit_2->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        lineEdit_2->setReadOnly(true);
        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(270, 30, 120, 24));
        lineEdit_3->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        lineEdit_3->setReadOnly(true);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(210, 60, 90, 30));
        O0 = new QPushButton(centralwidget);
        O0->setObjectName("O0");
        O0->setGeometry(QRect(310, 60, 80, 30));
        O1 = new QPushButton(centralwidget);
        O1->setObjectName("O1");
        O1->setGeometry(QRect(310, 100, 80, 30));
        O2 = new QPushButton(centralwidget);
        O2->setObjectName("O2");
        O2->setGeometry(QRect(310, 140, 80, 30));
        O3 = new QPushButton(centralwidget);
        O3->setObjectName("O3");
        O3->setGeometry(QRect(310, 180, 80, 30));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(210, 100, 90, 30));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(10, 100, 90, 30));
        pushButton_10 = new QPushButton(centralwidget);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setGeometry(QRect(110, 100, 90, 30));
        pushButton_11 = new QPushButton(centralwidget);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setGeometry(QRect(110, 140, 90, 30));
        pushButton_12 = new QPushButton(centralwidget);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setGeometry(QRect(10, 140, 90, 30));
        pushButton_13 = new QPushButton(centralwidget);
        pushButton_13->setObjectName("pushButton_13");
        pushButton_13->setGeometry(QRect(210, 140, 90, 30));
        pushButton_14 = new QPushButton(centralwidget);
        pushButton_14->setObjectName("pushButton_14");
        pushButton_14->setGeometry(QRect(210, 180, 90, 30));
        pushButton_15 = new QPushButton(centralwidget);
        pushButton_15->setObjectName("pushButton_15");
        pushButton_15->setGeometry(QRect(10, 180, 90, 30));
        pushButton_16 = new QPushButton(centralwidget);
        pushButton_16->setObjectName("pushButton_16");
        pushButton_16->setGeometry(QRect(110, 180, 90, 30));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 403, 21));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Laskin", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Number 1", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Number 2", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Result", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        O0->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        O1->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        O2->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        O3->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_13->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_14->setText(QCoreApplication::translate("MainWindow", "enter", nullptr));
        pushButton_15->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_16->setText(QCoreApplication::translate("MainWindow", "clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
