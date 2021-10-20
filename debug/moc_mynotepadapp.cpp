/****************************************************************************
** Meta object code from reading C++ file 'mynotepadapp.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Notepad_QT_App/mynotepadapp.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mynotepadapp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MyNotepadApp_t {
    const uint offsetsAndSize[24];
    char stringdata0[245];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MyNotepadApp_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MyNotepadApp_t qt_meta_stringdata_MyNotepadApp = {
    {
QT_MOC_LITERAL(0, 12), // "MyNotepadApp"
QT_MOC_LITERAL(13, 21), // "on_actionBold_toggled"
QT_MOC_LITERAL(35, 0), // ""
QT_MOC_LITERAL(36, 4), // "arg1"
QT_MOC_LITERAL(41, 25), // "on_actionItalic_triggered"
QT_MOC_LITERAL(67, 7), // "checked"
QT_MOC_LITERAL(75, 26), // "on_actionUnderLine_toggled"
QT_MOC_LITERAL(102, 23), // "on_actionItalic_toggled"
QT_MOC_LITERAL(126, 26), // "on_actionSubScript_toggled"
QT_MOC_LITERAL(153, 28), // "on_actionSuperScript_toggled"
QT_MOC_LITERAL(182, 28), // "on_textEdit_selectionChanged"
QT_MOC_LITERAL(211, 33) // "on_actionView_My_Resume_trigg..."

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
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   62,    2, 0x08,    1 /* Private */,
       4,    1,   65,    2, 0x08,    3 /* Private */,
       6,    1,   68,    2, 0x08,    5 /* Private */,
       7,    1,   71,    2, 0x08,    7 /* Private */,
       8,    1,   74,    2, 0x08,    9 /* Private */,
       9,    1,   77,    2, 0x08,   11 /* Private */,
      10,    0,   80,    2, 0x08,   13 /* Private */,
      11,    0,   81,    2, 0x08,   14 /* Private */,

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
        (void)_t;
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

const QMetaObject MyNotepadApp::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MyNotepadApp.offsetsAndSize,
    qt_meta_data_MyNotepadApp,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MyNotepadApp_t
, QtPrivate::TypeAndForceComplete<MyNotepadApp, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
