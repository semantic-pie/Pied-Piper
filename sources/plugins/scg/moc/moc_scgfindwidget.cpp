/****************************************************************************
** Meta object code from reading C++ file 'scgfindwidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../scgfindwidget.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scgfindwidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSSCgFindWidgetENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSSCgFindWidgetENDCLASS = QtMocHelpers::stringData(
    "SCgFindWidget",
    "escapePressed",
    "",
    "findNext",
    "findPrevious",
    "find",
    "text",
    "updateButtons",
    "textChanged",
    "caseSensitivityChanged"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSSCgFindWidgetENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[14];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[13];
    char stringdata5[5];
    char stringdata6[5];
    char stringdata7[14];
    char stringdata8[12];
    char stringdata9[23];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSSCgFindWidgetENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSSCgFindWidgetENDCLASS_t qt_meta_stringdata_CLASSSCgFindWidgetENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13),  // "SCgFindWidget"
        QT_MOC_LITERAL(14, 13),  // "escapePressed"
        QT_MOC_LITERAL(28, 0),  // ""
        QT_MOC_LITERAL(29, 8),  // "findNext"
        QT_MOC_LITERAL(38, 12),  // "findPrevious"
        QT_MOC_LITERAL(51, 4),  // "find"
        QT_MOC_LITERAL(56, 4),  // "text"
        QT_MOC_LITERAL(61, 13),  // "updateButtons"
        QT_MOC_LITERAL(75, 11),  // "textChanged"
        QT_MOC_LITERAL(87, 22)   // "caseSensitivityChanged"
    },
    "SCgFindWidget",
    "escapePressed",
    "",
    "findNext",
    "findPrevious",
    "find",
    "text",
    "updateButtons",
    "textChanged",
    "caseSensitivityChanged"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSCgFindWidgetENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x06,    1 /* Public */,
       3,    0,   57,    2, 0x06,    2 /* Public */,
       4,    0,   58,    2, 0x06,    3 /* Public */,
       5,    1,   59,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,   62,    2, 0x08,    6 /* Private */,
       8,    1,   63,    2, 0x08,    7 /* Private */,
       9,    1,   66,    2, 0x08,    9 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject SCgFindWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSSCgFindWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSCgFindWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSCgFindWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SCgFindWidget, std::true_type>,
        // method 'escapePressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'findNext'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'findPrevious'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'find'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'updateButtons'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'caseSensitivityChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void SCgFindWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SCgFindWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->escapePressed(); break;
        case 1: _t->findNext(); break;
        case 2: _t->findPrevious(); break;
        case 3: _t->find((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->updateButtons(); break;
        case 5: _t->textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->caseSensitivityChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SCgFindWidget::*)();
            if (_t _q_method = &SCgFindWidget::escapePressed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SCgFindWidget::*)();
            if (_t _q_method = &SCgFindWidget::findNext; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SCgFindWidget::*)();
            if (_t _q_method = &SCgFindWidget::findPrevious; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SCgFindWidget::*)(const QString & );
            if (_t _q_method = &SCgFindWidget::find; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *SCgFindWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SCgFindWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSCgFindWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SCgFindWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void SCgFindWidget::escapePressed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SCgFindWidget::findNext()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SCgFindWidget::findPrevious()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void SCgFindWidget::find(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
