#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    int xx;
    int yy;

private slots:
    void on_p11_clicked();
    void on_p12_clicked();
    void on_p13_clicked();
    void on_p14_clicked();
    void on_p15_clicked();
    void on_p21_clicked();
    void on_p22_clicked();
    void on_p23_clicked();
    void on_p24_clicked();
    void on_p25_clicked();
    void on_p31_clicked();
    void on_p32_clicked();
    void on_p33_clicked();
    void on_p34_clicked();
    void on_p35_clicked();
    void on_p41_clicked();
    void on_p42_clicked();
    void on_p43_clicked();
    void on_p44_clicked();
    void on_p45_clicked();
    void on_p51_clicked();
    void on_p52_clicked();
    void on_p53_clicked();
    void on_p54_clicked();
    void on_p55_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
