/****************************************************************************
** Meta object code from reading C++ file 'scgcontentchangedialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../scgcontentchangedialog.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scgcontentchangedialog.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSSCgContentChangeDialogENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSSCgContentChangeDialogENDCLASS = QtMocHelpers::stringData(
    "SCgContentChangeDialog",
    "changeFromat",
    "",
    "format",
    "apply",
    "slotEnableApplyButton",
    "QValidator::State"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSSCgContentChangeDialogENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[23];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[7];
    char stringdata4[6];
    char stringdata5[22];
    char stringdata6[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSSCgContentChangeDialogENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSSCgContentChangeDialogENDCLASS_t qt_meta_stringdata_CLASSSCgContentChangeDialogENDCLASS = {
    {
        QT_MOC_LITERAL(0, 22),  // "SCgContentChangeDialog"
        QT_MOC_LITERAL(23, 12),  // "changeFromat"
        QT_MOC_LITERAL(36, 0),  // ""
        QT_MOC_LITERAL(37, 6),  // "format"
        QT_MOC_LITERAL(44, 5),  // "apply"
        QT_MOC_LITERAL(50, 21),  // "slotEnableApplyButton"
        QT_MOC_LITERAL(72, 17)   // "QValidator::State"
    },
    "SCgContentChangeDialog",
    "changeFromat",
    "",
    "format",
    "apply",
    "slotEnableApplyButton",
    "QValidator::State"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSCgContentChangeDialogENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x08,    1 /* Private */,
       4,    0,   35,    2, 0x08,    3 /* Private */,
       5,    1,   36,    2, 0x08,    4 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject SCgContentChangeDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSSCgContentChangeDialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSCgContentChangeDialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSCgContentChangeDialogENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SCgContentChangeDialog, std::true_type>,
        // method 'changeFromat'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'apply'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotEnableApplyButton'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QValidator::State, std::false_type>
    >,
    nullptr
} };

void SCgContentChangeDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SCgContentChangeDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->changeFromat((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->apply(); break;
        case 2: _t->slotEnableApplyButton((*reinterpret_cast< std::add_pointer_t<QValidator::State>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *SCgContentChangeDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SCgContentChangeDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSCgContentChangeDialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int SCgContentChangeDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
