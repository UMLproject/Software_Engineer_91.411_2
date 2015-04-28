/****************************************************************************
** Meta object code from reading C++ file 'User.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/User.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'User.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_User[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       6,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      13,    5, 0x0a095003,
      24,    5, 0x0a095003,
      39,    5, 0x0a095003,
      54,    5, 0x0a095003,
      90,   73, 0x0009500b,
     106,    5, 0x0a095003,

       0        // eod
};

static const char qt_meta_stringdata_User[] = {
    "User\0QString\0getNameStr\0getUsernameStr\0"
    "getPasswordStr\0getEmailAddressStr\0"
    "QVector<QString>\0getExercisesVec\0"
    "getNoteStr\0"
};

void User::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData User::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject User::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_User,
      qt_meta_data_User, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &User::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *User::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *User::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_User))
        return static_cast<void*>(const_cast< User*>(this));
    return QObject::qt_metacast(_clname);
}

int User::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = getNameStr(); break;
        case 1: *reinterpret_cast< QString*>(_v) = getUsernameStr(); break;
        case 2: *reinterpret_cast< QString*>(_v) = getPasswordStr(); break;
        case 3: *reinterpret_cast< QString*>(_v) = getEmailAddressStr(); break;
        case 4: *reinterpret_cast< QVector<QString>*>(_v) = getExercisesVec(); break;
        case 5: *reinterpret_cast< QString*>(_v) = getNoteStr(); break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setNameStr(*reinterpret_cast< QString*>(_v)); break;
        case 1: setUsernameStr(*reinterpret_cast< QString*>(_v)); break;
        case 2: setPasswordStr(*reinterpret_cast< QString*>(_v)); break;
        case 3: setEmailAddressStr(*reinterpret_cast< QString*>(_v)); break;
        case 4: setExercisesVec(*reinterpret_cast< QVector<QString>*>(_v)); break;
        case 5: setNoteStr(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
