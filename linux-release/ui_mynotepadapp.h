/********************************************************************************
** Form generated from reading UI file 'mynotepadapp.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYNOTEPADAPP_H
#define UI_MYNOTEPADAPP_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyNotepadApp
{
public:
    QAction *actionBold;
    QAction *actionItalic;
    QAction *actionUnderLine;
    QAction *actionView_My_Resume;
    QAction *actionSubScript;
    QAction *actionSuperScript;
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuAbout_Me;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MyNotepadApp)
    {
        if (MyNotepadApp->objectName().isEmpty())
            MyNotepadApp->setObjectName(QString::fromUtf8("MyNotepadApp"));
        MyNotepadApp->resize(601, 344);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/ImageResource/notepad_37173.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        MyNotepadApp->setWindowIcon(icon);
        actionBold = new QAction(MyNotepadApp);
        actionBold->setObjectName(QString::fromUtf8("actionBold"));
        actionBold->setCheckable(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/ImageResource/bold.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QString::fromUtf8(":/ImageResource/bold-1.png"), QSize(), QIcon::Normal, QIcon::On);
        actionBold->setIcon(icon1);
        actionItalic = new QAction(MyNotepadApp);
        actionItalic->setObjectName(QString::fromUtf8("actionItalic"));
        actionItalic->setCheckable(true);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/ImageResource/italic-1.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QString::fromUtf8(":/ImageResource/italic-11.png"), QSize(), QIcon::Normal, QIcon::On);
        actionItalic->setIcon(icon2);
        actionUnderLine = new QAction(MyNotepadApp);
        actionUnderLine->setObjectName(QString::fromUtf8("actionUnderLine"));
        actionUnderLine->setCheckable(true);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/ImageResource/u-1.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon3.addFile(QString::fromUtf8(":/ImageResource/u-11.png"), QSize(), QIcon::Normal, QIcon::On);
        actionUnderLine->setIcon(icon3);
        actionView_My_Resume = new QAction(MyNotepadApp);
        actionView_My_Resume->setObjectName(QString::fromUtf8("actionView_My_Resume"));
        actionSubScript = new QAction(MyNotepadApp);
        actionSubScript->setObjectName(QString::fromUtf8("actionSubScript"));
        actionSubScript->setCheckable(true);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/ImageResource/subscript.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon4.addFile(QString::fromUtf8(":/ImageResource/subscripttrigger.png"), QSize(), QIcon::Normal, QIcon::On);
        actionSubScript->setIcon(icon4);
        actionSuperScript = new QAction(MyNotepadApp);
        actionSuperScript->setObjectName(QString::fromUtf8("actionSuperScript"));
        actionSuperScript->setCheckable(true);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/ImageResource/superscript.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon5.addFile(QString::fromUtf8(":/ImageResource/superscripttrigger.png"), QSize(), QIcon::Normal, QIcon::On);
        actionSuperScript->setIcon(icon5);
        centralwidget = new QWidget(MyNotepadApp);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(0, 0, 601, 291));
        MyNotepadApp->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MyNotepadApp);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 601, 21));
        menuAbout_Me = new QMenu(menubar);
        menuAbout_Me->setObjectName(QString::fromUtf8("menuAbout_Me"));
        MyNotepadApp->setMenuBar(menubar);
        statusbar = new QStatusBar(MyNotepadApp);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MyNotepadApp->setStatusBar(statusbar);
        toolBar = new QToolBar(MyNotepadApp);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MyNotepadApp->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuAbout_Me->menuAction());
        menuAbout_Me->addAction(actionView_My_Resume);
        toolBar->addAction(actionBold);
        toolBar->addAction(actionItalic);
        toolBar->addAction(actionUnderLine);
        toolBar->addAction(actionSubScript);
        toolBar->addAction(actionSuperScript);

        retranslateUi(MyNotepadApp);

        QMetaObject::connectSlotsByName(MyNotepadApp);
    } // setupUi

    void retranslateUi(QMainWindow *MyNotepadApp)
    {
        MyNotepadApp->setWindowTitle(QApplication::translate("MyNotepadApp", "MyNotepadApp", nullptr));
        actionBold->setText(QApplication::translate("MyNotepadApp", "Bold", nullptr));
        actionItalic->setText(QApplication::translate("MyNotepadApp", "Italic", nullptr));
        actionUnderLine->setText(QApplication::translate("MyNotepadApp", "UnderLine", nullptr));
        actionView_My_Resume->setText(QApplication::translate("MyNotepadApp", "View My Resume", nullptr));
        actionSubScript->setText(QApplication::translate("MyNotepadApp", "SubScript", nullptr));
        actionSuperScript->setText(QApplication::translate("MyNotepadApp", "SuperScript", nullptr));
        menuAbout_Me->setTitle(QApplication::translate("MyNotepadApp", "About Me", nullptr));
        toolBar->setWindowTitle(QApplication::translate("MyNotepadApp", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyNotepadApp: public Ui_MyNotepadApp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYNOTEPADAPP_H
