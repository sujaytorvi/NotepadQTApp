/********************************************************************************
** Form generated from reading UI file 'dialogbox.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGBOX_H
#define UI_DIALOGBOX_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_DialogBox
{
public:
    QLabel *label;

    void setupUi(QDialog *DialogBox)
    {
        if (DialogBox->objectName().isEmpty())
            DialogBox->setObjectName(QString::fromUtf8("DialogBox"));
        DialogBox->resize(547, 674);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/ImageResource/resume.png"), QSize(), QIcon::Normal, QIcon::Off);
        DialogBox->setWindowIcon(icon);
        label = new QLabel(DialogBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 541, 671));

        retranslateUi(DialogBox);

        QMetaObject::connectSlotsByName(DialogBox);
    } // setupUi

    void retranslateUi(QDialog *DialogBox)
    {
        DialogBox->setWindowTitle(QApplication::translate("DialogBox", "Resume ", nullptr));
        label->setText(QApplication::translate("DialogBox", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogBox: public Ui_DialogBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGBOX_H
