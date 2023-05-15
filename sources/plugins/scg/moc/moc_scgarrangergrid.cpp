/****************************************************************************
** Meta object code from reading C++ file 'scgarrangergrid.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../arrangers/scgarrangergrid.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scgarrangergrid.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSSCgGridArrangerENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSSCgGridArrangerENDCLASS = QtMocHelpers::stringData(
    "SCgGridArranger",
    "xValueChanged",
    "",
    "newSpacing",
    "yValueChanged",
    "symmetricalCheckBoxClicked",
    "checked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSSCgGridArrangerENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[16];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[14];
    char stringdata5[27];
    char stringdata6[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSSCgGridArrangerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSSCgGridArrangerENDCLASS_t qt_meta_stringdata_CLASSSCgGridArrangerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15),  // "SCgGridArranger"
        QT_MOC_LITERAL(16, 13),  // "xValueChanged"
        QT_MOC_LITERAL(30, 0),  // ""
        QT_MOC_LITERAL(31, 10),  // "newSpacing"
        QT_MOC_LITERAL(42, 13),  // "yValueChanged"
        QT_MOC_LITERAL(56, 26),  // "symmetricalCheckBoxClicked"
        QT_MOC_LITERAL(83, 7)   // "checked"
    },
    "SCgGridArranger",
    "xValueChanged",
    "",
    "newSpacing",
    "yValueChanged",
    "symmetricalCheckBoxClicked",
    "checked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSCgGridArrangerENDCLASS[] = {

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
       1,    1,   32,    2, 0x09,    1 /* Protected */,
       4,    1,   35,    2, 0x09,    3 /* Protected */,
       5,    1,   38,    2, 0x09,    5 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,    6,

       0        // eod
};

Q_CONSTINIT const QMetaObject SCgGridArranger::staticMetaObject = { {
    QMetaObject::SuperData::link<SCgArranger::staticMetaObject>(),
    qt_meta_stringdata_CLASSSCgGridArrangerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSCgGridArrangerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSCgGridArrangerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SCgGridArranger, std::true_type>,
        // method 'xValueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'yValueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'symmetricalCheckBoxClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void SCgGridArranger::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SCgGridArranger *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->xValueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->yValueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->symmetricalCheckBoxClicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *SCgGridArranger::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SCgGridArranger::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSCgGridArrangerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return SCgArranger::qt_metacast(_clname);
}

int SCgGridArranger::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SCgArranger::qt_metacall(_c, _id, _a);
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
