/****************************************************************************
** Meta object code from reading C++ file 'physicalCalculateForm.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../PhysicalCalculator/forms/physicalCalculateForm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'physicalCalculateForm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PhysicalCalculateForm_t {
    QByteArrayData data[20];
    char stringdata0[276];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PhysicalCalculateForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PhysicalCalculateForm_t qt_meta_stringdata_PhysicalCalculateForm = {
    {
QT_MOC_LITERAL(0, 0, 21), // "PhysicalCalculateForm"
QT_MOC_LITERAL(1, 22, 23), // "PhysicalCalculateWindow"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(4, 69, 21), // "on_comboBox_activated"
QT_MOC_LITERAL(5, 91, 5), // "index"
QT_MOC_LITERAL(6, 97, 10), // "Calclulate"
QT_MOC_LITERAL(7, 108, 26), // "UpdateLableAndLineInWindow"
QT_MOC_LITERAL(8, 135, 9), // "arrayData"
QT_MOC_LITERAL(9, 145, 17), // "UpdateDescription"
QT_MOC_LITERAL(10, 163, 5), // "image"
QT_MOC_LITERAL(11, 169, 9), // "textLabel"
QT_MOC_LITERAL(12, 179, 5), // "Error"
QT_MOC_LITERAL(13, 185, 17), // "FromFloatToString"
QT_MOC_LITERAL(14, 203, 5), // "value"
QT_MOC_LITERAL(15, 209, 20), // "CheckLineEditIsEmpty"
QT_MOC_LITERAL(16, 230, 19), // "std::vector<double>"
QT_MOC_LITERAL(17, 250, 6), // "result"
QT_MOC_LITERAL(18, 257, 13), // "GetJsonObject"
QT_MOC_LITERAL(19, 271, 4) // "path"

    },
    "PhysicalCalculateForm\0PhysicalCalculateWindow\0"
    "\0on_pushButton_clicked\0on_comboBox_activated\0"
    "index\0Calclulate\0UpdateLableAndLineInWindow\0"
    "arrayData\0UpdateDescription\0image\0"
    "textLabel\0Error\0FromFloatToString\0"
    "value\0CheckLineEditIsEmpty\0"
    "std::vector<double>\0result\0GetJsonObject\0"
    "path"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PhysicalCalculateForm[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   65,    2, 0x08 /* Private */,
       4,    1,   66,    2, 0x08 /* Private */,
       6,    0,   69,    2, 0x08 /* Private */,
       7,    1,   70,    2, 0x08 /* Private */,
       9,    2,   73,    2, 0x08 /* Private */,
      12,    0,   78,    2, 0x08 /* Private */,
      13,    1,   79,    2, 0x08 /* Private */,
      15,    1,   82,    2, 0x08 /* Private */,
      18,    1,   85,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QJsonArray,    8,
    QMetaType::Void, QMetaType::QPixmap, QMetaType::QString,   10,   11,
    QMetaType::Void,
    QMetaType::QString, QMetaType::Float,   14,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::QJsonObject, QMetaType::QString,   19,

       0        // eod
};

void PhysicalCalculateForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PhysicalCalculateForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->PhysicalCalculateWindow(); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->on_comboBox_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->Calclulate(); break;
        case 4: _t->UpdateLableAndLineInWindow((*reinterpret_cast< QJsonArray(*)>(_a[1]))); break;
        case 5: _t->UpdateDescription((*reinterpret_cast< QPixmap(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 6: _t->Error(); break;
        case 7: { QString _r = _t->FromFloatToString((*reinterpret_cast< float(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->CheckLineEditIsEmpty((*reinterpret_cast< std::vector<double>(*)>(_a[1]))); break;
        case 9: { QJsonObject _r = _t->GetJsonObject((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QJsonObject*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PhysicalCalculateForm::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PhysicalCalculateForm::PhysicalCalculateWindow)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PhysicalCalculateForm::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_PhysicalCalculateForm.data,
    qt_meta_data_PhysicalCalculateForm,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PhysicalCalculateForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PhysicalCalculateForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PhysicalCalculateForm.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int PhysicalCalculateForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void PhysicalCalculateForm::PhysicalCalculateWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
