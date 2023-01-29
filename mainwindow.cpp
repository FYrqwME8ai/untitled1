#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "form.h"
#include <QString>
#include <QChar>
//#include <Qobject_
// #include <iostream>>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_callButton_clicked()
{
    Form *vid;
    vid = new Form();
    connect( vid, SIGNAL(sendText(const QString)), this, SLOT(getText(const QString) ) );

    vid->show();
}

void MainWindow::getText (const QString text ) {

    if (comporate(text))
        ui->listWidget->addItem(text);
    else //if (!comporate(text))
        ui->listWidgetrus->addItem(text);
}

bool MainWindow::comporate(const QString text){

    QChar alphabet [] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    QChar textStr [text.length()];
    int engCount = 0;
    int rusCount = 0;

    for(int i = 0; i < text.length(); i++){
        textStr[i] = text.at(i);
        for (int j = 0; j < sizeof(alphabet); j++){
            if (textStr[i] == alphabet[j])
                engCount++;
        }
        rusCount++;
    }

    if (engCount >= rusCount)
        return true;
    else
        return false;

}

