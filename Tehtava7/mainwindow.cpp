#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Connect digit buttons
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_3,SIGNAL(clicked()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_8,SIGNAL(clicked()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_9,SIGNAL(clicked()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_10,SIGNAL(clicked()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_11,SIGNAL(clicked()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_12,SIGNAL(clicked()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_13,SIGNAL(clicked()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_15,SIGNAL(clicked()),this,SLOT(digit_pressed()));

    // Connect operator buttons
    connect(ui->O0,SIGNAL(clicked()),this,SLOT(operator_pressed()));
    connect(ui->O1,SIGNAL(clicked()),this,SLOT(operator_pressed()));
    connect(ui->O2,SIGNAL(clicked()),this,SLOT(operator_pressed()));
    connect(ui->O3,SIGNAL(clicked()),this,SLOT(operator_pressed()));

    // Connect other buttons like clear, enter
    connect(ui->pushButton_14,SIGNAL(clicked()),this,SLOT(enter_pressed()));
    connect(ui->pushButton_16,SIGNAL(clicked()),this,SLOT(clear_pressed()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::digit_pressed()
{
    if (MainWindow::resultShowing)
        MainWindow::clear_pressed();

    QPushButton * button = (QPushButton*)sender();

    if (MainWindow::state == 1)
        ui->lineEdit->setText(ui->lineEdit->text() + button->text());
    else
        ui->lineEdit_2->setText(ui->lineEdit_2->text() + button->text());
}

void MainWindow::operator_pressed()
{
    if (MainWindow::resultShowing)
        MainWindow::clear_pressed();

    MainWindow::state = 2;

    // Store operator name for later use
    QPushButton * button = (QPushButton*)sender();
    MainWindow::operand = button->objectName()[1].digitValue();
}

void MainWindow::clear_pressed()
{
    MainWindow::resultShowing = false;
    ui->lineEdit->setText("");
    ui->lineEdit_2->setText("");
    ui->lineEdit_3->setText("");
    MainWindow::operand=0;
    MainWindow::state = 1;
}

void MainWindow::enter_pressed()
{
    if (MainWindow::state == 2)
    {
        float num1 = ui->lineEdit->text().toFloat();
        float num2 = ui->lineEdit_2->text().toFloat();

        float res = 0;
        switch (MainWindow::operand)
        {
        case 0:
            res = num1+num2;
            break;
        case 1:
            res = num1-num2;
            break;
        case 2:
            res = num1*num2;
            break;
        case 3:
            res = num1/num2;
            break;
        }

        ui->lineEdit_3->setText(QString::number(res));

        MainWindow::resultShowing = true;
    }
}
