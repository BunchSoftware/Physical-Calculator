/****************************************************************************
** Meta object code from reading C++ file 'mainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../PhysicalCalculator/forms/mainWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[12];
    char stringdata0[257];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 24), // "onReportProblemTriggered"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 25), // "onSuggestFeatureTriggered"
QT_MOC_LITERAL(4, 63, 20), // "onGetReviewTriggered"
QT_MOC_LITERAL(5, 84, 29), // "onAboutDocumentationTriggered"
QT_MOC_LITERAL(6, 114, 24), // "onAboutProgrammTriggered"
QT_MOC_LITERAL(7, 139, 22), // "onLastProjectTriggered"
QT_MOC_LITERAL(8, 162, 22), // "onOpenProjectTriggered"
QT_MOC_LITERAL(9, 185, 22), // "onSaveProjectTriggered"
QT_MOC_LITERAL(10, 208, 23), // "onCloseProjectTriggered"
QT_MOC_LITERAL(11, 232, 24) // "onCreateProjectTriggered"

    },
    "MainWindow\0onReportProblemTriggered\0"
    "\0onSuggestFeatureTriggered\0"
    "onGetReviewTriggered\0onAboutDocumentationTriggered\0"
    "onAboutProgrammTriggered\0"
    "onLastProjectTriggered\0onOpenProjectTriggered\0"
    "onSaveProjectTriggered\0onCloseProjectTriggered\0"
    "onCreateProjectTriggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x02 /* Public */,
       3,    0,   65,    2, 0x02 /* Public */,
       4,    0,   66,    2, 0x02 /* Public */,
       5,    0,   67,    2, 0x02 /* Public */,
       6,    0,   68,    2, 0x02 /* Public */,
       7,    0,   69,    2, 0x02 /* Public */,
       8,    0,   70,    2, 0x02 /* Public */,
       9,    0,   71,    2, 0x02 /* Public */,
      10,    0,   72,    2, 0x02 /* Public */,
      11,    0,   73,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onReportProblemTriggered(); break;
        case 1: _t->onSuggestFeatureTriggered(); break;
        case 2: _t->onGetReviewTriggered(); break;
        case 3: _t->onAboutDocumentationTriggered(); break;
        case 4: _t->onAboutProgrammTriggered(); break;
        case 5: _t->onLastProjectTriggered(); break;
        case 6: _t->onOpenProjectTriggered(); break;
        case 7: _t->onSaveProjectTriggered(); break;
        case 8: _t->onCloseProjectTriggered(); break;
        case 9: _t->onCreateProjectTriggered(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
