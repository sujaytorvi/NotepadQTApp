#include "dialogbox.h"
#include "ui_dialogbox.h"

DialogBox::DialogBox(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogBox)
{
    ui->setupUi(this);
    //display image
    QPixmap pm(":/ImageResource/0001.jpg");
    ui->label->setPixmap(pm);
    ui->label->setScaledContents(true);
}

DialogBox::~DialogBox()
{
    delete ui;
}
