/****************************************************************************
** Meta object code from reading C++ file 'extendedtabwidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../extendedtabwidget.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'extendedtabwidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSExtendedTabWidgetENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSExtendedTabWidgetENDCLASS = QtMocHelpers::stringData(
    "ExtendedTabWidget",
    "tabBeforeClose",
    "",
    "QWidget*",
    "w",
    "tabsUpdate",
    "onCloseOtherDocuments",
    "onCloseAllDocuments",
    "onClose",
    "index",
    "addSubWindow",
    "EditorInterface*",
    "window"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSExtendedTabWidgetENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[18];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[2];
    char stringdata5[11];
    char stringdata6[22];
    char stringdata7[20];
    char stringdata8[8];
    char stringdata9[6];
    char stringdata10[13];
    char stringdata11[17];
    char stringdata12[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSExtendedTabWidgetENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSExtendedTabWidgetENDCLASS_t qt_meta_stringdata_CLASSExtendedTabWidgetENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17),  // "ExtendedTabWidget"
        QT_MOC_LITERAL(18, 14),  // "tabBeforeClose"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 8),  // "QWidget*"
        QT_MOC_LITERAL(43, 1),  // "w"
        QT_MOC_LITERAL(45, 10),  // "tabsUpdate"
        QT_MOC_LITERAL(56, 21),  // "onCloseOtherDocuments"
        QT_MOC_LITERAL(78, 19),  // "onCloseAllDocuments"
        QT_MOC_LITERAL(98, 7),  // "onClose"
        QT_MOC_LITERAL(106, 5),  // "index"
        QT_MOC_LITERAL(112, 12),  // "addSubWindow"
        QT_MOC_LITERAL(125, 16),  // "EditorInterface*"
        QT_MOC_LITERAL(142, 6)   // "window"
    },
    "ExtendedTabWidget",
    "tabBeforeClose",
    "",
    "QWidget*",
    "w",
    "tabsUpdate",
    "onCloseOtherDocuments",
    "onCloseAllDocuments",
    "onClose",
    "index",
    "addSubWindow",
    "EditorInterface*",
    "window"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSExtendedTabWidgetENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   56,    2, 0x06,    1 /* Public */,
       5,    0,   59,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   60,    2, 0x0a,    4 /* Public */,
       7,    0,   61,    2, 0x0a,    5 /* Public */,
       8,    1,   62,    2, 0x0a,    6 /* Public */,
       8,    0,   65,    2, 0x2a,    8 /* Public | MethodCloned */,
      10,    1,   66,    2, 0x0a,    9 /* Public */,

 // signals: parameters
    QMetaType::Bool, 0x80000000 | 3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Int, 0x80000000 | 11,   12,

       0        // eod
};

Q_CONSTINIT const QMetaObject ExtendedTabWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QTabWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSExtendedTabWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSExtendedTabWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSExtendedTabWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ExtendedTabWidget, std::true_type>,
        // method 'tabBeforeClose'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QWidget *, std::false_type>,
        // method 'tabsUpdate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onCloseOtherDocuments'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onCloseAllDocuments'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onClose'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onClose'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addSubWindow'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<EditorInterface *, std::false_type>
    >,
    nullptr
} };

void ExtendedTabWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ExtendedTabWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { bool _r = _t->tabBeforeClose((*reinterpret_cast< std::add_pointer_t<QWidget*>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->tabsUpdate(); break;
        case 2: _t->onCloseOtherDocuments(); break;
        case 3: _t->onCloseAllDocuments(); break;
        case 4: _t->onClose((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->onClose(); break;
        case 6: { int _r = _t->addSubWindow((*reinterpret_cast< std::add_pointer_t<EditorInterface*>>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = bool (ExtendedTabWidget::*)(QWidget * );
            if (_t _q_method = &ExtendedTabWidget::tabBeforeClose; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ExtendedTabWidget::*)();
            if (_t _q_method = &ExtendedTabWidget::tabsUpdate; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *ExtendedTabWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExtendedTabWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSExtendedTabWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QTabWidget::qt_metacast(_clname);
}

int ExtendedTabWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTabWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
bool ExtendedTabWidget::tabBeforeClose(QWidget * _t1)
{
    bool _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}

// SIGNAL 1
void ExtendedTabWidget::tabsUpdate()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
