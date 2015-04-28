/****************************************************************************
** Meta object code from reading C++ file 'UsersGui.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/UsersGui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UsersGui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UsersGui[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x08,
      30,    9,    9,    9, 0x08,
      49,    9,    9,    9, 0x08,
      71,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UsersGui[] = {
    "UsersGui\0\0handleMoreBtnSlot()\0"
    "handleAddBtnSlot()\0handleModifyBtnSlot()\0"
    "handleRemoveBtnSlot()\0"
};

void UsersGui::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UsersGui *_t = static_cast<UsersGui *>(_o);
        switch (_id) {
        case 0: _t->handleMoreBtnSlot(); break;
        case 1: _t->handleAddBtnSlot(); break;
        case 2: _t->handleModifyBtnSlot(); break;
        case 3: _t->handleRemoveBtnSlot(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UsersGui::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UsersGui::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UsersGui,
      qt_meta_data_UsersGui, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UsersGui::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UsersGui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UsersGui::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UsersGui))
        return static_cast<void*>(const_cast< UsersGui*>(this));
    return QWidget::qt_metacast(_clname);
}

int UsersGui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
