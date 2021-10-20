#include "mynotepadapp.h"
#include "ui_mynotepadapp.h"
#include "dialogbox.h"
MyNotepadApp::MyNotepadApp(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MyNotepadApp)
{
    ui->setupUi(this);
    this -> setCentralWidget(ui->textEdit); // allows the text edit widget to cover entire space

}

MyNotepadApp::~MyNotepadApp()
{
    delete ui;
}


void MyNotepadApp::on_actionBold_toggled(bool isToggled)
{
    QTextCharFormat format;
    // if bold is active will make text bold else normal
    if(isToggled)
    {
      format.setFontWeight(QFont::Bold);
    }
    else{
        format.setFontWeight(QFont::Normal);

    }

    ui->textEdit->textCursor().mergeCharFormat(format); // this will make text bold/normal to the selected text
    ui->textEdit->mergeCurrentCharFormat(format); // this will apply format change (bold/normal) to new char entries
}




void MyNotepadApp::on_actionItalic_triggered(bool checked)
{
    // unused
}


void MyNotepadApp::on_actionUnderLine_toggled(bool isToggled)
{
    QTextCharFormat format;
    // if bold is active will make text underlined else normal
    if(isToggled)
    {
      ui->textEdit->setFontUnderline(isToggled);;
    }
    else{
        ui->textEdit->setFontUnderline(isToggled);

    }

    ui->textEdit->textCursor().mergeCharFormat(format); // this will make text underline/normal to the selected text
    ui->textEdit->mergeCurrentCharFormat(format); // this will apply format change (underline/normal) to new char entries
}


void MyNotepadApp::on_actionItalic_toggled(bool isToggled)
{
    QTextCharFormat format;
    // this will apply format change (italic/normal) to new char entries
    if(isToggled)
    {
      ui->textEdit->setFontItalic(isToggled);;
    }
    else{
        ui->textEdit->setFontItalic(isToggled);

    }

    ui->textEdit->textCursor().mergeCharFormat(format); // this will make text italic/normal to the selected text
    ui->textEdit->mergeCurrentCharFormat(format); // this will apply format change (italic /normal) to new char entries
}


void MyNotepadApp::on_actionSubScript_toggled(bool isToggled)
{
    QTextCharFormat format;
    if(isToggled){
        ui->actionSuperScript->setChecked(false); // cannot have both subscript & superscript ON at the same time
        format.setVerticalAlignment(QTextCharFormat::AlignSubScript);
    }

    else{
        format.setVerticalAlignment(QTextCharFormat::AlignNormal);
    }
    ui->textEdit->textCursor().mergeCharFormat(format);
    ui -> textEdit -> mergeCurrentCharFormat(format);

}


void MyNotepadApp::on_actionSuperScript_toggled(bool isToggled)
{
    QTextCharFormat format;
    if(isToggled){
        ui->actionSubScript->setChecked(false); // cannot have both subscript & superscript ON at the same time
        format.setVerticalAlignment(QTextCharFormat::AlignSuperScript);
    }

    else{
        format.setVerticalAlignment(QTextCharFormat::AlignNormal);
    }
    ui->textEdit->textCursor().mergeCharFormat(format);
    ui -> textEdit -> mergeCurrentCharFormat(format);

}


void MyNotepadApp::on_textEdit_selectionChanged()
{
    // whenever a text is selected below code checks
    // if any of them are bold, underline or italic and set their switch on


// <== Code is faulty ==>

//    QTextCursor cursor = ui->textEdit->textCursor();
//    cursor.charFormat().font().bold() ? ui->actionBold->setChecked(true) : ui->actionBold->setChecked(false);
//    cursor.charFormat().font().underline() ? ui->actionUnderLine->setChecked(true) : ui->actionUnderLine->setChecked(false);
//    cursor.charFormat().font().italic() ? ui->actionItalic->setChecked(true) : ui->actionItalic->setChecked(false);


}

void MyNotepadApp::on_actionView_My_Resume_triggered()
{
    // dialog to show resume
    DialogBox dbox;
    dbox.setModal(true);
    dbox.exec();
}

