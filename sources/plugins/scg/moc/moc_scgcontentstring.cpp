/****************************************************************************
** Meta object code from reading C++ file 'scgcontentstring.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../scgcontentstring.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scgcontentstring.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSSCgContentStringViewerENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSSCgContentStringViewerENDCLASS = QtMocHelpers::stringData(
    "SCgContentStringViewer"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSSCgContentStringViewerENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSSCgContentStringViewerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSSCgContentStringViewerENDCLASS_t qt_meta_stringdata_CLASSSCgContentStringViewerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 22)   // "SCgContentStringViewer"
    },
    "SCgContentStringViewer"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSCgContentStringViewerENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

Q_CONSTINIT const QMetaObject SCgContentStringViewer::staticMetaObject = { {
    QMetaObject::SuperData::link<SCgContentViewer::staticMetaObject>(),
    qt_meta_stringdata_CLASSSCgContentStringViewerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSCgContentStringViewerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSCgContentStringViewerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SCgContentStringViewer, std::true_type>
    >,
    nullptr
} };

void SCgContentStringViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *SCgContentStringViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SCgContentStringViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSCgContentStringViewerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return SCgContentViewer::qt_metacast(_clname);
}

int SCgContentStringViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SCgContentViewer::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSSCgContentStringDialogENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSSCgContentStringDialogENDCLASS = QtMocHelpers::stringData(
    "SCgContentStringDialog",
    "setWordWrap",
    "",
    "isWordWrap"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSSCgContentStringDialogENDCLASS_t {
    uint offsetsAndSizes[8];
    char stringdata0[23];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[11];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSSCgContentStringDialogENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSSCgContentStringDialogENDCLASS_t qt_meta_stringdata_CLASSSCgContentStringDialogENDCLASS = {
    {
        QT_MOC_LITERAL(0, 22),  // "SCgContentStringDialog"
        QT_MOC_LITERAL(23, 11),  // "setWordWrap"
        QT_MOC_LITERAL(35, 0),  // ""
        QT_MOC_LITERAL(36, 10)   // "isWordWrap"
    },
    "SCgContentStringDialog",
    "setWordWrap",
    "",
    "isWordWrap"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSCgContentStringDialogENDCLASS[] = {

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
       1,    1,   20,    2, 0x0a,    1 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,

       0        // eod
};

Q_CONSTINIT const QMetaObject SCgContentStringDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<SCgContentDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSSCgContentStringDialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSCgContentStringDialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSCgContentStringDialogENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SCgContentStringDialog, std::true_type>,
        // method 'setWordWrap'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void SCgContentStringDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SCgContentStringDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setWordWrap((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *SCgContentStringDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SCgContentStringDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSCgContentStringDialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return SCgContentDialog::qt_metacast(_clname);
}

int SCgContentStringDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SCgContentDialog::qt_metacall(_c, _id, _a);
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
