#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

//#include "form.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    bool comporate(const QString text);

public slots:
    void getText( const QString text ); // set new text in mainwindow form

private slots:
    void on_callButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
