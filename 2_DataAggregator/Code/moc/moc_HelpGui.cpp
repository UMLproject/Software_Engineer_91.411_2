/****************************************************************************
** Meta object code from reading C++ file 'HelpGui.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/HelpGui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HelpGui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_HelpGui[] = {

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
       9,    8,    8,    8, 0x08,
      33,    8,    8,    8, 0x08,
      53,    8,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_HelpGui[] = {
    "HelpGui\0\0handlePreviousBtnSlot()\0"
    "handleNextBtnSlot()\0handleExitBtnSlot()\0"
};

void HelpGui::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        HelpGui *_t = static_cast<HelpGui *>(_o);
        switch (_id) {
        case 0: _t->handlePreviousBtnSlot(); break;
        case 1: _t->handleNextBtnSlot(); break;
        case 2: _t->handleExitBtnSlot(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData HelpGui::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject HelpGui::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_HelpGui,
      qt_meta_data_HelpGui, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &HelpGui::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *HelpGui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *HelpGui::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HelpGui))
        return static_cast<void*>(const_cast< HelpGui*>(this));
    return QWidget::qt_metacast(_clname);
}

int HelpGui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
