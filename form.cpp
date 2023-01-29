#include "form.h"
#include "ui_form.h"
#include <QString>

Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
}

Form::~Form()
{
    delete ui;
}

void Form::on_pushButton_clicked()
{
    QString text = ui->addText->text();
    sendText(text);
    //close();
}

