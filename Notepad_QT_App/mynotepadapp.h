#ifndef MYNOTEPADAPP_H
#define MYNOTEPADAPP_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MyNotepadApp; }
QT_END_NAMESPACE

class MyNotepadApp : public QMainWindow
{
    Q_OBJECT

public:
    MyNotepadApp(QWidget *parent = nullptr);
    ~MyNotepadApp();

private slots:
    void on_actionBold_toggled(bool arg1);

    void on_actionItalic_triggered(bool checked);

    void on_actionUnderLine_toggled(bool arg1);

    void on_actionItalic_toggled(bool arg1);

    void on_actionSubScript_toggled(bool arg1);

    void on_actionSuperScript_toggled(bool arg1);

    void on_textEdit_selectionChanged();

    void on_actionView_My_Resume_triggered();

private:
    Ui::MyNotepadApp *ui;
};
#endif // MYNOTEPADAPP_H
