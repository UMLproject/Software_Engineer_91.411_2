/****************************************************************************
** Meta object code from reading C++ file 'DevicesGui.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/DevicesGui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DevicesGui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DevicesGui[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      31,   11,   11,   11, 0x08,
      53,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DevicesGui[] = {
    "DevicesGui\0\0handleAddBtnSlot()\0"
    "handleModifyBtnSlot()\0handleRemoveBtnSlot()\0"
};

void DevicesGui::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DevicesGui *_t = static_cast<DevicesGui *>(_o);
        switch (_id) {
        case 0: _t->handleAddBtnSlot(); break;
        case 1: _t->handleModifyBtnSlot(); break;
        case 2: _t->handleRemoveBtnSlot(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData DevicesGui::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DevicesGui::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_DevicesGui,
      qt_meta_data_DevicesGui, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DevicesGui::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DevicesGui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DevicesGui::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DevicesGui))
        return static_cast<void*>(const_cast< DevicesGui*>(this));
    return QWidget::qt_metacast(_clname);
}

int DevicesGui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
