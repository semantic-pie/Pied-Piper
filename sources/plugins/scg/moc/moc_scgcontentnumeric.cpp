/****************************************************************************
** Meta object code from reading C++ file 'scgcontentnumeric.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../scgcontentnumeric.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scgcontentnumeric.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSSCgContentNumericDialogENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSSCgContentNumericDialogENDCLASS = QtMocHelpers::stringData(
    "SCgContentNumericDialog",
    "enableApplyButton",
    "",
    "QValidator::State",
    "slotEnableApplyButton"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSSCgContentNumericDialogENDCLASS_t {
    uint offsetsAndSizes[10];
    char stringdata0[24];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[18];
    char stringdata4[22];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSSCgContentNumericDialogENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSSCgContentNumericDialogENDCLASS_t qt_meta_stringdata_CLASSSCgContentNumericDialogENDCLASS = {
    {
        QT_MOC_LITERAL(0, 23),  // "SCgContentNumericDialog"
        QT_MOC_LITERAL(24, 17),  // "enableApplyButton"
        QT_MOC_LITERAL(42, 0),  // ""
        QT_MOC_LITERAL(43, 17),  // "QValidator::State"
        QT_MOC_LITERAL(61, 21)   // "slotEnableApplyButton"
    },
    "SCgContentNumericDialog",
    "enableApplyButton",
    "",
    "QValidator::State",
    "slotEnableApplyButton"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSCgContentNumericDialogENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,   29,    2, 0x08,    3 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject SCgContentNumericDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<SCgContentDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSSCgContentNumericDialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSCgContentNumericDialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSCgContentNumericDialogENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SCgContentNumericDialog, std::true_type>,
        // method 'enableApplyButton'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QValidator::State, std::false_type>,
        // method 'slotEnableApplyButton'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>
    >,
    nullptr
} };

void SCgContentNumericDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SCgContentNumericDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->enableApplyButton((*reinterpret_cast< std::add_pointer_t<QValidator::State>>(_a[1]))); break;
        case 1: _t->slotEnableApplyButton((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SCgContentNumericDialog::*)(QValidator::State );
            if (_t _q_method = &SCgContentNumericDialog::enableApplyButton; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *SCgContentNumericDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SCgContentNumericDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSCgContentNumericDialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return SCgContentDialog::qt_metacast(_clname);
}

int SCgContentNumericDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SCgContentDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void SCgContentNumericDialog::enableApplyButton(QValidator::State _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
