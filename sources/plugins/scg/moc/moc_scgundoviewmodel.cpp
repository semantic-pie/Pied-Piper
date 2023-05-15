/****************************************************************************
** Meta object code from reading C++ file 'scgundoviewmodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../scgundoviewmodel.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scgundoviewmodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSSCgUndoViewModelENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSSCgUndoViewModelENDCLASS = QtMocHelpers::stringData(
    "SCgUndoViewModel",
    "setStack",
    "",
    "QUndoStack*",
    "stack",
    "stackChanged",
    "stackDestroyed",
    "obj",
    "setStackCurrentIndex",
    "QModelIndex",
    "index"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSSCgUndoViewModelENDCLASS_t {
    uint offsetsAndSizes[22];
    char stringdata0[17];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[6];
    char stringdata5[13];
    char stringdata6[15];
    char stringdata7[4];
    char stringdata8[21];
    char stringdata9[12];
    char stringdata10[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSSCgUndoViewModelENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSSCgUndoViewModelENDCLASS_t qt_meta_stringdata_CLASSSCgUndoViewModelENDCLASS = {
    {
        QT_MOC_LITERAL(0, 16),  // "SCgUndoViewModel"
        QT_MOC_LITERAL(17, 8),  // "setStack"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 11),  // "QUndoStack*"
        QT_MOC_LITERAL(39, 5),  // "stack"
        QT_MOC_LITERAL(45, 12),  // "stackChanged"
        QT_MOC_LITERAL(58, 14),  // "stackDestroyed"
        QT_MOC_LITERAL(73, 3),  // "obj"
        QT_MOC_LITERAL(77, 20),  // "setStackCurrentIndex"
        QT_MOC_LITERAL(98, 11),  // "QModelIndex"
        QT_MOC_LITERAL(110, 5)   // "index"
    },
    "SCgUndoViewModel",
    "setStack",
    "",
    "QUndoStack*",
    "stack",
    "stackChanged",
    "stackDestroyed",
    "obj",
    "setStackCurrentIndex",
    "QModelIndex",
    "index"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSCgUndoViewModelENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x0a,    1 /* Public */,
       5,    0,   41,    2, 0x08,    3 /* Private */,
       6,    1,   42,    2, 0x08,    4 /* Private */,
       8,    1,   45,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar,    7,
    QMetaType::Void, 0x80000000 | 9,   10,

       0        // eod
};

Q_CONSTINIT const QMetaObject SCgUndoViewModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractItemModel::staticMetaObject>(),
    qt_meta_stringdata_CLASSSCgUndoViewModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSCgUndoViewModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSCgUndoViewModelENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SCgUndoViewModel, std::true_type>,
        // method 'setStack'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QUndoStack *, std::false_type>,
        // method 'stackChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'stackDestroyed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>,
        // method 'setStackCurrentIndex'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>
    >,
    nullptr
} };

void SCgUndoViewModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SCgUndoViewModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setStack((*reinterpret_cast< std::add_pointer_t<QUndoStack*>>(_a[1]))); break;
        case 1: _t->stackChanged(); break;
        case 2: _t->stackDestroyed((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        case 3: _t->setStackCurrentIndex((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *SCgUndoViewModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SCgUndoViewModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSCgUndoViewModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int SCgUndoViewModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
