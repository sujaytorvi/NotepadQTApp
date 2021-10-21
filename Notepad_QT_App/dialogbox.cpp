#include "dialogbox.h"
#include "ui_dialogbox.h"
#include "QScrollArea"
DialogBox::DialogBox(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogBox)
{
    ui->setupUi(this);
    //display image
    QPixmap pm(":/ImageResource/0001.jpg");
    ui->label->setPixmap(pm);
    ui->label->setScaledContents(true);
    QScrollArea *scrollarea = new QScrollArea(this);
    scrollarea->setBackgroundRole(QPalette :: Dark);
    scrollarea->setWidget(ui->label);

}

DialogBox::~DialogBox()
{
    delete ui;
}
