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
    int wartoscProgressBara = 0;

private slots:
    void on_pierwszySlider_valueChanged(int value);
    void on_zatwierdzButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
