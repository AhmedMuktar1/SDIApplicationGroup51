/****************************************************************************
** Meta object code from reading C++ file 'mainhub.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainhub.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainhub.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mainhub_t {
    QByteArrayData data[12];
    char stringdata0[229];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mainhub_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mainhub_t qt_meta_stringdata_mainhub = {
    {
QT_MOC_LITERAL(0, 0, 7), // "mainhub"
QT_MOC_LITERAL(1, 8, 23), // "on_logOutButton_clicked"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 24), // "on_AccountButton_clicked"
QT_MOC_LITERAL(4, 58, 16), // "on_chat1_clicked"
QT_MOC_LITERAL(5, 75, 15), // "on_chat_clicked"
QT_MOC_LITERAL(6, 91, 22), // "on_sendMessage_clicked"
QT_MOC_LITERAL(7, 114, 22), // "on_powerButton_clicked"
QT_MOC_LITERAL(8, 137, 24), // "on_restartButton_clicked"
QT_MOC_LITERAL(9, 162, 26), // "on_RecipientButton_clicked"
QT_MOC_LITERAL(10, 189, 20), // "updateLogStateChange"
QT_MOC_LITERAL(11, 210, 18) // "brokerDisconnected"

    },
    "mainhub\0on_logOutButton_clicked\0\0"
    "on_AccountButton_clicked\0on_chat1_clicked\0"
    "on_chat_clicked\0on_sendMessage_clicked\0"
    "on_powerButton_clicked\0on_restartButton_clicked\0"
    "on_RecipientButton_clicked\0"
    "updateLogStateChange\0brokerDisconnected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mainhub[] = {

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

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    0,   73,    2, 0x08 /* Private */,

 // slots: parameters
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

void mainhub::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<mainhub *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_logOutButton_clicked(); break;
        case 1: _t->on_AccountButton_clicked(); break;
        case 2: _t->on_chat1_clicked(); break;
        case 3: _t->on_chat_clicked(); break;
        case 4: _t->on_sendMessage_clicked(); break;
        case 5: _t->on_powerButton_clicked(); break;
        case 6: _t->on_restartButton_clicked(); break;
        case 7: _t->on_RecipientButton_clicked(); break;
        case 8: _t->updateLogStateChange(); break;
        case 9: _t->brokerDisconnected(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject mainhub::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_mainhub.data,
    qt_meta_data_mainhub,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mainhub::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mainhub::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mainhub.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int mainhub::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
