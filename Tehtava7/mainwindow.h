#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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

private:
    Ui::MainWindow *ui;
    short operand = 0;
    int state = 1;
    bool resultShowing = false;
private slots:
    void digit_pressed();
    void clear_pressed();
    void operator_pressed();
    void enter_pressed();
};
#endif // MAINWINDOW_H
