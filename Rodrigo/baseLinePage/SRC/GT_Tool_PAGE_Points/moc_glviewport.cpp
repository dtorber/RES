/****************************************************************************
** Meta object code from reading C++ file 'glviewport.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "glviewport.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'glviewport.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GLViewport_t {
    QByteArrayData data[13];
    char stringdata0[99];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GLViewport_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GLViewport_t qt_meta_stringdata_GLViewport = {
    {
QT_MOC_LITERAL(0, 0, 10), // "GLViewport"
QT_MOC_LITERAL(1, 11, 14), // "updatePosition"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 1), // "x"
QT_MOC_LITERAL(4, 29, 1), // "y"
QT_MOC_LITERAL(5, 31, 19), // "updateLabelCombobox"
QT_MOC_LITERAL(6, 51, 5), // "label"
QT_MOC_LITERAL(7, 57, 8), // "updateID"
QT_MOC_LITERAL(8, 66, 2), // "id"
QT_MOC_LITERAL(9, 69, 10), // "changeMode"
QT_MOC_LITERAL(10, 80, 1), // "m"
QT_MOC_LITERAL(11, 82, 11), // "changeLabel"
QT_MOC_LITERAL(12, 94, 4) // "text"

    },
    "GLViewport\0updatePosition\0\0x\0y\0"
    "updateLabelCombobox\0label\0updateID\0"
    "id\0changeMode\0m\0changeLabel\0text"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GLViewport[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,
       5,    1,   44,    2, 0x06 /* Public */,
       7,    1,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   50,    2, 0x0a /* Public */,
      11,    1,   53,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::QString,   12,

       0        // eod
};

void GLViewport::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GLViewport *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updatePosition((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->updateLabelCombobox((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->updateID((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->changeMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->changeLabel((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GLViewport::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GLViewport::updatePosition)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GLViewport::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GLViewport::updateLabelCombobox)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GLViewport::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GLViewport::updateID)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GLViewport::staticMetaObject = { {
    &QGLWidget::staticMetaObject,
    qt_meta_stringdata_GLViewport.data,
    qt_meta_data_GLViewport,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GLViewport::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GLViewport::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GLViewport.stringdata0))
        return static_cast<void*>(this);
    return QGLWidget::qt_metacast(_clname);
}

int GLViewport::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void GLViewport::updatePosition(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GLViewport::updateLabelCombobox(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GLViewport::updateID(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE