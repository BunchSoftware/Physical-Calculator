/****************************************************************************
** Meta object code from reading C++ file 'plottingForm.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../PhysicalCalculator/forms/plottingForm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'plottingForm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PlottingForm_t {
    QByteArrayData data[11];
    char stringdata0[153];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlottingForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlottingForm_t qt_meta_stringdata_PlottingForm = {
    {
QT_MOC_LITERAL(0, 0, 12), // "PlottingForm"
QT_MOC_LITERAL(1, 13, 18), // "PlottingFormWindow"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(4, 55, 9), // "TimerSlot"
QT_MOC_LITERAL(5, 65, 21), // "on_comboBox_activated"
QT_MOC_LITERAL(6, 87, 5), // "index"
QT_MOC_LITERAL(7, 93, 26), // "UpdateLableAndLineInWindow"
QT_MOC_LITERAL(8, 120, 10), // "textLabel1"
QT_MOC_LITERAL(9, 131, 10), // "textLabel2"
QT_MOC_LITERAL(10, 142, 10) // "textLabel3"

    },
    "PlottingForm\0PlottingFormWindow\0\0"
    "on_pushButton_clicked\0TimerSlot\0"
    "on_comboBox_activated\0index\0"
    "UpdateLableAndLineInWindow\0textLabel1\0"
    "textLabel2\0textLabel3"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlottingForm[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    1,   42,    2, 0x08 /* Private */,
       7,    3,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    8,    9,   10,

       0        // eod
};

void PlottingForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PlottingForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->PlottingFormWindow(); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->TimerSlot(); break;
        case 3: _t->on_comboBox_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->UpdateLableAndLineInWindow((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PlottingForm::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlottingForm::PlottingFormWindow)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PlottingForm::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_PlottingForm.data,
    qt_meta_data_PlottingForm,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PlottingForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlottingForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PlottingForm.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int PlottingForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void PlottingForm::PlottingFormWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
