#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "owner.h"
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
     owner jay;
private:
    Ui::MainWindow *ui;
public slots:
    void pool();
};

#endif // MAINWINDOW_H
