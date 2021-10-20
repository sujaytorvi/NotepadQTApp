/****************************************************************************
** Meta object code from reading C++ file 'mynotepadapp.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.11)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Notepad_QT_App/mynotepadapp.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mynotepadapp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.11. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MyNotepadApp_t {
    QByteArrayData data[12];
    char stringdata0[245];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyNotepadApp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyNotepadApp_t qt_meta_stringdata_MyNotepadApp = {
    {
QT_MOC_LITERAL(0, 0, 12), // "MyNotepadApp"
QT_MOC_LITERAL(1, 13, 21), // "on_actionBold_toggled"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 4), // "arg1"
QT_MOC_LITERAL(4, 41, 25), // "on_actionItalic_triggered"
QT_MOC_LITERAL(5, 67, 7), // "checked"
QT_MOC_LITERAL(6, 75, 26), // "on_actionUnderLine_toggled"
QT_MOC_LITERAL(7, 102, 23), // "on_actionItalic_toggled"
QT_MOC_LITERAL(8, 126, 26), // "on_actionSubScript_toggled"
QT_MOC_LITERAL(9, 153, 28), // "on_actionSuperScript_toggled"
QT_MOC_LITERAL(10, 182, 28), // "on_textEdit_selectionChanged"
QT_MOC_LITERAL(11, 211, 33) // "on_actionView_My_Resume_trigg..."

    },
    "MyNotepadApp\0on_actionBold_toggled\0\0"
    "arg1\0on_actionItalic_triggered\0checked\0"
    "on_actionUnderLine_toggled\0"
    "on_actionItalic_toggled\0"
    "on_actionSubScript_toggled\0"
    "on_actionSuperScript_toggled\0"
    "on_textEdit_selectionChanged\0"
    "on_actionView_My_Resume_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyNotepadApp[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x08 /* Private */,
       4,    1,   57,    2, 0x08 /* Private */,
       6,    1,   60,    2, 0x08 /* Private */,
       7,    1,   63,    2, 0x08 /* Private */,
       8,    1,   66,    2, 0x08 /* Private */,
       9,    1,   69,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    0,   73,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MyNotepadApp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MyNotepadApp *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_actionBold_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->on_actionItalic_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_actionUnderLine_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_actionItalic_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_actionSubScript_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_actionSuperScript_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_textEdit_selectionChanged(); break;
        case 7: _t->on_actionView_My_Resume_triggered(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MyNotepadApp::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MyNotepadApp.data,
    qt_meta_data_MyNotepadApp,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MyNotepadApp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyNotepadApp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyNotepadApp.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MyNotepadApp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
