/****************************************************************************
** Meta object code from reading C++ file 'signalslots.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Dictionary/signalslots.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'signalslots.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_signalslots_t {
    QByteArrayData data[18];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_signalslots_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_signalslots_t qt_meta_stringdata_signalslots = {
    {
QT_MOC_LITERAL(0, 0, 11), // "signalslots"
QT_MOC_LITERAL(1, 12, 11), // "nameChanged"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 7), // "newName"
QT_MOC_LITERAL(4, 33, 11), // "consChanged"
QT_MOC_LITERAL(5, 45, 7), // "newCons"
QT_MOC_LITERAL(6, 53, 11), // "vowsChanged"
QT_MOC_LITERAL(7, 65, 7), // "newVows"
QT_MOC_LITERAL(8, 73, 16), // "structureChanged"
QT_MOC_LITERAL(9, 90, 12), // "newStructure"
QT_MOC_LITERAL(10, 103, 7), // "setName"
QT_MOC_LITERAL(11, 111, 1), // "n"
QT_MOC_LITERAL(12, 113, 7), // "setCons"
QT_MOC_LITERAL(13, 121, 1), // "c"
QT_MOC_LITERAL(14, 123, 7), // "setVows"
QT_MOC_LITERAL(15, 131, 1), // "v"
QT_MOC_LITERAL(16, 133, 12), // "setStructure"
QT_MOC_LITERAL(17, 146, 1) // "s"

    },
    "signalslots\0nameChanged\0\0newName\0"
    "consChanged\0newCons\0vowsChanged\0newVows\0"
    "structureChanged\0newStructure\0setName\0"
    "n\0setCons\0c\0setVows\0v\0setStructure\0s"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_signalslots[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    1,   57,    2, 0x06 /* Public */,
       6,    1,   60,    2, 0x06 /* Public */,
       8,    1,   63,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   66,    2, 0x0a /* Public */,
      12,    1,   69,    2, 0x0a /* Public */,
      14,    1,   72,    2, 0x0a /* Public */,
      16,    1,   75,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    9,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::QString,   17,

       0        // eod
};

void signalslots::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        signalslots *_t = static_cast<signalslots *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->nameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->consChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->vowsChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->structureChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->setName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->setCons((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->setVows((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->setStructure((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (signalslots::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&signalslots::nameChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (signalslots::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&signalslots::consChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (signalslots::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&signalslots::vowsChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (signalslots::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&signalslots::structureChanged)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject signalslots::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_signalslots.data,
      qt_meta_data_signalslots,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *signalslots::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *signalslots::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_signalslots.stringdata0))
        return static_cast<void*>(const_cast< signalslots*>(this));
    return QObject::qt_metacast(_clname);
}

int signalslots::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void signalslots::nameChanged(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void signalslots::consChanged(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void signalslots::vowsChanged(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void signalslots::structureChanged(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
