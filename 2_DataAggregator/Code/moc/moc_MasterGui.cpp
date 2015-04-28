/****************************************************************************
** Meta object code from reading C++ file 'MasterGui.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/MasterGui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MasterGui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MasterGui[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x08,
      33,   10,   10,   10, 0x08,
      55,   10,   10,   10, 0x08,
      76,   10,   10,   10, 0x08,
     100,   10,   10,   10, 0x08,
     120,   10,   10,   10, 0x08,
     143,   10,   10,   10, 0x08,
     165,   10,   10,   10, 0x08,
     189,   10,   10,   10, 0x08,
     210,   10,   10,   10, 0x08,
     233,   10,   10,   10, 0x08,
     254,   10,   10,   10, 0x08,
     277,   10,   10,   10, 0x08,
     300,   10,   10,   10, 0x08,
     320,   10,   10,   10, 0x08,
     340,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MasterGui[] = {
    "MasterGui\0\0handleSignUpBtnSlot()\0"
    "handleSignInBtnSlot()\0handleLoginBtnSlot()\0"
    "handleRegisterBtnSlot()\0handleBackBtnSlot()\0"
    "handleCancel0BtnSlot()\0handleCancelBtnSlot()\0"
    "handleActivateBtnSlot()\0handleVideoBtnSlot()\0"
    "handleResultsBtnSlot()\0handleUsersBtnSlot()\0"
    "handleDevicesBtnSlot()\0handleHistoryBtnSlot()\0"
    "handleHelpBtnSlot()\0handleExitBtnSlot()\0"
    "handleToolbarViewBtnSlot()\0"
};

void MasterGui::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MasterGui *_t = static_cast<MasterGui *>(_o);
        switch (_id) {
        case 0: _t->handleSignUpBtnSlot(); break;
        case 1: _t->handleSignInBtnSlot(); break;
        case 2: _t->handleLoginBtnSlot(); break;
        case 3: _t->handleRegisterBtnSlot(); break;
        case 4: _t->handleBackBtnSlot(); break;
        case 5: _t->handleCancel0BtnSlot(); break;
        case 6: _t->handleCancelBtnSlot(); break;
        case 7: _t->handleActivateBtnSlot(); break;
        case 8: _t->handleVideoBtnSlot(); break;
        case 9: _t->handleResultsBtnSlot(); break;
        case 10: _t->handleUsersBtnSlot(); break;
        case 11: _t->handleDevicesBtnSlot(); break;
        case 12: _t->handleHistoryBtnSlot(); break;
        case 13: _t->handleHelpBtnSlot(); break;
        case 14: _t->handleExitBtnSlot(); break;
        case 15: _t->handleToolbarViewBtnSlot(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData MasterGui::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MasterGui::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MasterGui,
      qt_meta_data_MasterGui, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MasterGui::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MasterGui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MasterGui::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MasterGui))
        return static_cast<void*>(const_cast< MasterGui*>(this));
    return QWidget::qt_metacast(_clname);
}

int MasterGui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
