/****************************************************************************
** Meta object code from reading C++ file 'scgcommandcreatecontour.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../commands/scgcommandcreatecontour.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scgcommandcreatecontour.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSSCgCommandCreateContourENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSSCgCommandCreateContourENDCLASS = QtMocHelpers::stringData(
    "SCgCommandCreateContour",
    "contourDestroyed",
    ""
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSSCgCommandCreateContourENDCLASS_t {
    uint offsetsAndSizes[6];
    char stringdata0[24];
    char stringdata1[17];
    char stringdata2[1];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSSCgCommandCreateContourENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSSCgCommandCreateContourENDCLASS_t qt_meta_stringdata_CLASSSCgCommandCreateContourENDCLASS = {
    {
        QT_MOC_LITERAL(0, 23),  // "SCgCommandCreateContour"
        QT_MOC_LITERAL(24, 16),  // "contourDestroyed"
        QT_MOC_LITERAL(41, 0)   // ""
    },
    "SCgCommandCreateContour",
    "contourDestroyed",
    ""
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSCgCommandCreateContourENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   20,    2, 0x08,    1 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject SCgCommandCreateContour::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSSCgCommandCreateContourENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSCgCommandCreateContourENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSCgCommandCreateContourENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SCgCommandCreateContour, std::true_type>,
        // method 'contourDestroyed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void SCgCommandCreateContour::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SCgCommandCreateContour *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->contourDestroyed(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *SCgCommandCreateContour::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SCgCommandCreateContour::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSCgCommandCreateContourENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "SCgBaseCommand"))
        return static_cast< SCgBaseCommand*>(this);
    return QObject::qt_metacast(_clname);
}

int SCgCommandCreateContour::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
