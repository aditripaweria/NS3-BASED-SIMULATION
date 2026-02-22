/****************************************************************************
** Meta object code from reading C++ file 'qcustomplot.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qcustomplot.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcustomplot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.3. It"
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
struct qt_meta_stringdata_CLASSQCPScatterStyleENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQCPScatterStyleENDCLASS = QtMocHelpers::stringData(
    "QCPScatterStyle",
    "ScatterShape",
    "ssNone",
    "ssDot",
    "ssCross",
    "ssPlus",
    "ssCircle",
    "ssDisc",
    "ssSquare",
    "ssDiamond",
    "ssStar",
    "ssTriangle",
    "ssTriangleInverted",
    "ssCrossSquare",
    "ssPlusSquare",
    "ssCrossCircle",
    "ssPlusCircle",
    "ssPeace",
    "ssPixmap",
    "ssCustom"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQCPScatterStyleENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,   18,   19,

 // enum data: key, value
       2, uint(QCPScatterStyle::ssNone),
       3, uint(QCPScatterStyle::ssDot),
       4, uint(QCPScatterStyle::ssCross),
       5, uint(QCPScatterStyle::ssPlus),
       6, uint(QCPScatterStyle::ssCircle),
       7, uint(QCPScatterStyle::ssDisc),
       8, uint(QCPScatterStyle::ssSquare),
       9, uint(QCPScatterStyle::ssDiamond),
      10, uint(QCPScatterStyle::ssStar),
      11, uint(QCPScatterStyle::ssTriangle),
      12, uint(QCPScatterStyle::ssTriangleInverted),
      13, uint(QCPScatterStyle::ssCrossSquare),
      14, uint(QCPScatterStyle::ssPlusSquare),
      15, uint(QCPScatterStyle::ssCrossCircle),
      16, uint(QCPScatterStyle::ssPlusCircle),
      17, uint(QCPScatterStyle::ssPeace),
      18, uint(QCPScatterStyle::ssPixmap),
      19, uint(QCPScatterStyle::ssCustom),

       0        // eod
};

Q_CONSTINIT const QMetaObject QCPScatterStyle::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSQCPScatterStyleENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQCPScatterStyleENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQCPScatterStyleENDCLASS_t,
        // enum 'ScatterShape'
        QtPrivate::TypeAndForceComplete<QCPScatterStyle::ScatterShape, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QCPScatterStyle, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQCPPainterENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQCPPainterENDCLASS = QtMocHelpers::stringData(
    "QCPPainter",
    "PainterMode",
    "pmDefault",
    "pmVectorized",
    "pmNoCaching",
    "pmNonCosmetic",
    "PainterModes"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQCPPainterENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       2,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x1,    4,   24,
       6,    1, 0x1,    4,   32,

 // enum data: key, value
       2, uint(QCPPainter::pmDefault),
       3, uint(QCPPainter::pmVectorized),
       4, uint(QCPPainter::pmNoCaching),
       5, uint(QCPPainter::pmNonCosmetic),
       2, uint(QCPPainter::pmDefault),
       3, uint(QCPPainter::pmVectorized),
       4, uint(QCPPainter::pmNoCaching),
       5, uint(QCPPainter::pmNonCosmetic),

       0        // eod
};

Q_CONSTINIT const QMetaObject QCPPainter::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QPainter>::value,
    qt_meta_stringdata_CLASSQCPPainterENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQCPPainterENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQCPPainterENDCLASS_t,
        // enum 'PainterMode'
        QtPrivate::TypeAndForceComplete<QCPPainter::PainterMode, std::true_type>,
        // enum 'PainterModes'
        QtPrivate::TypeAndForceComplete<QCPPainter::PainterModes, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QCPPainter, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQCPLayerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQCPLayerENDCLASS = QtMocHelpers::stringData(
    "QCPLayer",
    "parentPlot",
    "QCustomPlot*",
    "name",
    "index",
    "children",
    "QList<QCPLayerable*>"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQCPLayerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x00015009, uint(-1), 0,
       3, QMetaType::QString, 0x00015001, uint(-1), 0,
       4, QMetaType::Int, 0x00015001, uint(-1), 0,
       5, 0x80000000 | 6, 0x00015009, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QCPLayer::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQCPLayerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQCPLayerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQCPLayerENDCLASS_t,
        // property 'parentPlot'
        QtPrivate::TypeAndForceComplete<QCustomPlot*, std::true_type>,
        // property 'name'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'index'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'children'
        QtPrivate::TypeAndForceComplete<QList<QCPLayerable*>, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QCPLayer, std::true_type>
    >,
    nullptr
} };

void QCPLayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCustomPlot* >(); break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QCPLayerable*> >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QCPLayer *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QCustomPlot**>(_v) = _t->parentPlot(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->index(); break;
        case 3: *reinterpret_cast< QList<QCPLayerable*>*>(_v) = _t->children(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
}

const QMetaObject *QCPLayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPLayer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQCPLayerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QCPLayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQCPLayerableENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQCPLayerableENDCLASS = QtMocHelpers::stringData(
    "QCPLayerable",
    "visible",
    "parentPlot",
    "QCustomPlot*",
    "parentLayerable",
    "QCPLayerable*",
    "layer",
    "QCPLayer*",
    "antialiased"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQCPLayerableENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       5,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Bool, 0x00015103, uint(-1), 0,
       2, 0x80000000 | 3, 0x00015009, uint(-1), 0,
       4, 0x80000000 | 5, 0x00015009, uint(-1), 0,
       6, 0x80000000 | 7, 0x0001510b, uint(-1), 0,
       8, QMetaType::Bool, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QCPLayerable::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQCPLayerableENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQCPLayerableENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQCPLayerableENDCLASS_t,
        // property 'visible'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'parentPlot'
        QtPrivate::TypeAndForceComplete<QCustomPlot*, std::true_type>,
        // property 'parentLayerable'
        QtPrivate::TypeAndForceComplete<QCPLayerable*, std::true_type>,
        // property 'layer'
        QtPrivate::TypeAndForceComplete<QCPLayer*, std::true_type>,
        // property 'antialiased'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QCPLayerable, std::true_type>
    >,
    nullptr
} };

void QCPLayerable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCPLayer* >(); break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCPLayerable* >(); break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCustomPlot* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QCPLayerable *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->visible(); break;
        case 1: *reinterpret_cast< QCustomPlot**>(_v) = _t->parentPlot(); break;
        case 2: *reinterpret_cast< QCPLayerable**>(_v) = _t->parentLayerable(); break;
        case 3: *reinterpret_cast< QCPLayer**>(_v) = _t->layer(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->antialiased(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QCPLayerable *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setVisible(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setLayer(*reinterpret_cast< QCPLayer**>(_v)); break;
        case 4: _t->setAntialiased(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
}

const QMetaObject *QCPLayerable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPLayerable::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQCPLayerableENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QCPLayerable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQCPMarginGroupENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQCPMarginGroupENDCLASS = QtMocHelpers::stringData(
    "QCPMarginGroup"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQCPMarginGroupENDCLASS[] = {

 // content:
      12,       // revision
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

Q_CONSTINIT const QMetaObject QCPMarginGroup::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQCPMarginGroupENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQCPMarginGroupENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQCPMarginGroupENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QCPMarginGroup, std::true_type>
    >,
    nullptr
} };

void QCPMarginGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *QCPMarginGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPMarginGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQCPMarginGroupENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QCPMarginGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQCPLayoutElementENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQCPLayoutElementENDCLASS = QtMocHelpers::stringData(
    "QCPLayoutElement",
    "layout",
    "QCPLayout*",
    "rect",
    "outerRect",
    "margins",
    "QMargins",
    "minimumMargins",
    "minimumSize",
    "maximumSize"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQCPLayoutElementENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       7,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x00015009, uint(-1), 0,
       3, QMetaType::QRect, 0x00015001, uint(-1), 0,
       4, QMetaType::QRect, 0x00015103, uint(-1), 0,
       5, 0x80000000 | 6, 0x0001510b, uint(-1), 0,
       7, 0x80000000 | 6, 0x0001510b, uint(-1), 0,
       8, QMetaType::QSize, 0x00015103, uint(-1), 0,
       9, QMetaType::QSize, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QCPLayoutElement::staticMetaObject = { {
    QMetaObject::SuperData::link<QCPLayerable::staticMetaObject>(),
    qt_meta_stringdata_CLASSQCPLayoutElementENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQCPLayoutElementENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQCPLayoutElementENDCLASS_t,
        // property 'layout'
        QtPrivate::TypeAndForceComplete<QCPLayout*, std::true_type>,
        // property 'rect'
        QtPrivate::TypeAndForceComplete<QRect, std::true_type>,
        // property 'outerRect'
        QtPrivate::TypeAndForceComplete<QRect, std::true_type>,
        // property 'margins'
        QtPrivate::TypeAndForceComplete<QMargins, std::true_type>,
        // property 'minimumMargins'
        QtPrivate::TypeAndForceComplete<QMargins, std::true_type>,
        // property 'minimumSize'
        QtPrivate::TypeAndForceComplete<QSize, std::true_type>,
        // property 'maximumSize'
        QtPrivate::TypeAndForceComplete<QSize, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QCPLayoutElement, std::true_type>
    >,
    nullptr
} };

void QCPLayoutElement::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCPLayout* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QCPLayoutElement *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QCPLayout**>(_v) = _t->layout(); break;
        case 1: *reinterpret_cast< QRect*>(_v) = _t->rect(); break;
        case 2: *reinterpret_cast< QRect*>(_v) = _t->outerRect(); break;
        case 3: *reinterpret_cast< QMargins*>(_v) = _t->margins(); break;
        case 4: *reinterpret_cast< QMargins*>(_v) = _t->minimumMargins(); break;
        case 5: *reinterpret_cast< QSize*>(_v) = _t->minimumSize(); break;
        case 6: *reinterpret_cast< QSize*>(_v) = _t->maximumSize(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QCPLayoutElement *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setOuterRect(*reinterpret_cast< QRect*>(_v)); break;
        case 3: _t->setMargins(*reinterpret_cast< QMargins*>(_v)); break;
        case 4: _t->setMinimumMargins(*reinterpret_cast< QMargins*>(_v)); break;
        case 5: _t->setMinimumSize(*reinterpret_cast< QSize*>(_v)); break;
        case 6: _t->setMaximumSize(*reinterpret_cast< QSize*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
}

const QMetaObject *QCPLayoutElement::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPLayoutElement::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQCPLayoutElementENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QCPLayerable::qt_metacast(_clname);
}

int QCPLayoutElement::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPLayerable::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQCPLayoutENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQCPLayoutENDCLASS = QtMocHelpers::stringData(
    "QCPLayout"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQCPLayoutENDCLASS[] = {

 // content:
      12,       // revision
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

Q_CONSTINIT const QMetaObject QCPLayout::staticMetaObject = { {
    QMetaObject::SuperData::link<QCPLayoutElement::staticMetaObject>(),
    qt_meta_stringdata_CLASSQCPLayoutENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQCPLayoutENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQCPLayoutENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QCPLayout, std::true_type>
    >,
    nullptr
} };

void QCPLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *QCPLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQCPLayoutENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QCPLayoutElement::qt_metacast(_clname);
}

int QCPLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPLayoutElement::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQCPLayoutGridENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQCPLayoutGridENDCLASS = QtMocHelpers::stringData(
    "QCPLayoutGrid",
    "rowCount",
    "columnCount",
    "columnStretchFactors",
    "QList<double>",
    "rowStretchFactors",
    "columnSpacing",
    "rowSpacing"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQCPLayoutGridENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       6,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Int, 0x00015001, uint(-1), 0,
       2, QMetaType::Int, 0x00015001, uint(-1), 0,
       3, 0x80000000 | 4, 0x0001510b, uint(-1), 0,
       5, 0x80000000 | 4, 0x0001510b, uint(-1), 0,
       6, QMetaType::Int, 0x00015103, uint(-1), 0,
       7, QMetaType::Int, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QCPLayoutGrid::staticMetaObject = { {
    QMetaObject::SuperData::link<QCPLayout::staticMetaObject>(),
    qt_meta_stringdata_CLASSQCPLayoutGridENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQCPLayoutGridENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQCPLayoutGridENDCLASS_t,
        // property 'rowCount'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'columnCount'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'columnStretchFactors'
        QtPrivate::TypeAndForceComplete<QList<double>, std::true_type>,
        // property 'rowStretchFactors'
        QtPrivate::TypeAndForceComplete<QList<double>, std::true_type>,
        // property 'columnSpacing'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'rowSpacing'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QCPLayoutGrid, std::true_type>
    >,
    nullptr
} };

void QCPLayoutGrid::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<double> >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QCPLayoutGrid *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->rowCount(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->columnCount(); break;
        case 2: *reinterpret_cast< QList<double>*>(_v) = _t->columnStretchFactors(); break;
        case 3: *reinterpret_cast< QList<double>*>(_v) = _t->rowStretchFactors(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->columnSpacing(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->rowSpacing(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QCPLayoutGrid *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setColumnStretchFactors(*reinterpret_cast< QList<double>*>(_v)); break;
        case 3: _t->setRowStretchFactors(*reinterpret_cast< QList<double>*>(_v)); break;
        case 4: _t->setColumnSpacing(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setRowSpacing(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
}

const QMetaObject *QCPLayoutGrid::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPLayoutGrid::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQCPLayoutGridENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QCPLayout::qt_metacast(_clname);
}

int QCPLayoutGrid::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPLayout::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQCPLayoutInsetENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQCPLayoutInsetENDCLASS = QtMocHelpers::stringData(
    "QCPLayoutInset"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQCPLayoutInsetENDCLASS[] = {

 // content:
      12,       // revision
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

Q_CONSTINIT const QMetaObject QCPLayoutInset::staticMetaObject = { {
    QMetaObject::SuperData::link<QCPLayout::staticMetaObject>(),
    qt_meta_stringdata_CLASSQCPLayoutInsetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQCPLayoutInsetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQCPLayoutInsetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QCPLayoutInset, std::true_type>
    >,
    nullptr
} };

void QCPLayoutInset::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *QCPLayoutInset::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPLayoutInset::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQCPLayoutInsetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QCPLayout::qt_metacast(_clname);
}

int QCPLayoutInset::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPLayout::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQCPLineEndingENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQCPLineEndingENDCLASS = QtMocHelpers::stringData(
    "QCPLineEnding",
    "EndingStyle",
    "esNone",
    "esFlatArrow",
    "esSpikeArrow",
    "esLineArrow",
    "esDisc",
    "esSquare",
    "esDiamond",
    "esBar",
    "esHalfBar",
    "esSkewedBar"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQCPLineEndingENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,   10,   19,

 // enum data: key, value
       2, uint(QCPLineEnding::esNone),
       3, uint(QCPLineEnding::esFlatArrow),
       4, uint(QCPLineEnding::esSpikeArrow),
       5, uint(QCPLineEnding::esLineArrow),
       6, uint(QCPLineEnding::esDisc),
       7, uint(QCPLineEnding::esSquare),
       8, uint(QCPLineEnding::esDiamond),
       9, uint(QCPLineEnding::esBar),
      10, uint(QCPLineEnding::esHalfBar),
      11, uint(QCPLineEnding::esSkewedBar),

       0        // eod
};

Q_CONSTINIT const QMetaObject QCPLineEnding::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSQCPLineEndingENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQCPLineEndingENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQCPLineEndingENDCLASS_t,
        // enum 'EndingStyle'
        QtPrivate::TypeAndForceComplete<QCPLineEnding::EndingStyle, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QCPLineEnding, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQCPGridENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQCPGridENDCLASS = QtMocHelpers::stringData(
    "QCPGrid",
    "subGridVisible",
    "antialiasedSubGrid",
    "antialiasedZeroLine",
    "pen",
    "subGridPen",
    "zeroLinePen"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQCPGridENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       6,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Bool, 0x00015103, uint(-1), 0,
       2, QMetaType::Bool, 0x00015103, uint(-1), 0,
       3, QMetaType::Bool, 0x00015103, uint(-1), 0,
       4, QMetaType::QPen, 0x00015103, uint(-1), 0,
       5, QMetaType::QPen, 0x00015103, uint(-1), 0,
       6, QMetaType::QPen, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QCPGrid::staticMetaObject = { {
    QMetaObject::SuperData::link<QCPLayerable::staticMetaObject>(),
    qt_meta_stringdata_CLASSQCPGridENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQCPGridENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQCPGridENDCLASS_t,
        // property 'subGridVisible'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'antialiasedSubGrid'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'antialiasedZeroLine'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'pen'
        QtPrivate::TypeAndForceComplete<QPen, std::true_type>,
        // property 'subGridPen'
        QtPrivate::TypeAndForceComplete<QPen, std::true_type>,
        // property 'zeroLinePen'
        QtPrivate::TypeAndForceComplete<QPen, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QCPGrid, std::true_type>
    >,
    nullptr
} };

void QCPGrid::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QCPGrid *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->subGridVisible(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->antialiasedSubGrid(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->antialiasedZeroLine(); break;
        case 3: *reinterpret_cast< QPen*>(_v) = _t->pen(); break;
        case 4: *reinterpret_cast< QPen*>(_v) = _t->subGridPen(); break;
        case 5: *reinterpret_cast< QPen*>(_v) = _t->zeroLinePen(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QCPGrid *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSubGridVisible(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setAntialiasedSubGrid(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setAntialiasedZeroLine(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setPen(*reinterpret_cast< QPen*>(_v)); break;
        case 4: _t->setSubGridPen(*reinterpret_cast< QPen*>(_v)); break;
        case 5: _t->setZeroLinePen(*reinterpret_cast< QPen*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *QCPGrid::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPGrid::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQCPGridENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QCPLayerable::qt_metacast(_clname);
}

int QCPGrid::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPLayerable::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQCPAxisENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQCPAxisENDCLASS = QtMocHelpers::stringData(
    "QCPAxis",
    "ticksRequest",
    "",
    "rangeChanged",
    "QCPRange",
    "newRange",
    "oldRange",
    "selectionChanged",
    "QCPAxis::SelectableParts",
    "parts",
    "setRange",
    "range",
    "setSelectableParts",
    "selectableParts",
    "setSelectedParts",
    "selectedParts",
    "axisType",
    "AxisType",
    "axisRect",
    "QCPAxisRect*",
    "scaleType",
    "ScaleType",
    "scaleLogBase",
    "rangeReversed",
    "autoTicks",
    "autoTickCount",
    "autoTickLabels",
    "autoTickStep",
    "autoSubTicks",
    "ticks",
    "tickLabels",
    "tickLabelPadding",
    "tickLabelType",
    "LabelType",
    "tickLabelFont",
    "tickLabelColor",
    "tickLabelRotation",
    "dateTimeFormat",
    "dateTimeSpec",
    "Qt::TimeSpec",
    "numberFormat",
    "numberPrecision",
    "tickStep",
    "tickVector",
    "QList<double>",
    "tickVectorLabels",
    "tickLengthIn",
    "tickLengthOut",
    "subTickCount",
    "subTickLengthIn",
    "subTickLengthOut",
    "basePen",
    "tickPen",
    "subTickPen",
    "labelFont",
    "labelColor",
    "label",
    "labelPadding",
    "padding",
    "offset",
    "SelectableParts",
    "selectedTickLabelFont",
    "selectedLabelFont",
    "selectedTickLabelColor",
    "selectedLabelColor",
    "selectedBasePen",
    "selectedTickPen",
    "selectedSubTickPen",
    "lowerEnding",
    "QCPLineEnding",
    "upperEnding",
    "grid",
    "QCPGrid*",
    "atLeft",
    "atRight",
    "atTop",
    "atBottom",
    "AxisTypes",
    "ltNumber",
    "ltDateTime",
    "stLinear",
    "stLogarithmic",
    "SelectablePart",
    "spNone",
    "spAxis",
    "spTickLabels",
    "spAxisLabel"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQCPAxisENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
      51,   77, // properties
       6,  332, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x06,   58 /* Public */,
       3,    1,   57,    2, 0x06,   59 /* Public */,
       3,    2,   60,    2, 0x06,   61 /* Public */,
       7,    1,   65,    2, 0x06,   64 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    1,   68,    2, 0x0a,   66 /* Public */,
      12,    1,   71,    2, 0x0a,   68 /* Public */,
      14,    1,   74,    2, 0x0a,   70 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4,    5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,   11,
    QMetaType::Void, 0x80000000 | 8,   13,
    QMetaType::Void, 0x80000000 | 8,   15,

 // properties: name, type, flags
      16, 0x80000000 | 17, 0x00015009, uint(-1), 0,
      18, 0x80000000 | 19, 0x00015009, uint(-1), 0,
      20, 0x80000000 | 21, 0x0001510b, uint(-1), 0,
      22, QMetaType::Double, 0x00015103, uint(-1), 0,
      11, 0x80000000 | 4, 0x0001510b, uint(-1), 0,
      23, QMetaType::Bool, 0x00015103, uint(-1), 0,
      24, QMetaType::Bool, 0x00015103, uint(-1), 0,
      25, QMetaType::Int, 0x00015103, uint(-1), 0,
      26, QMetaType::Bool, 0x00015103, uint(-1), 0,
      27, QMetaType::Bool, 0x00015103, uint(-1), 0,
      28, QMetaType::Bool, 0x00015103, uint(-1), 0,
      29, QMetaType::Bool, 0x00015103, uint(-1), 0,
      30, QMetaType::Bool, 0x00015103, uint(-1), 0,
      31, QMetaType::Int, 0x00015103, uint(-1), 0,
      32, 0x80000000 | 33, 0x0001510b, uint(-1), 0,
      34, QMetaType::QFont, 0x00015103, uint(-1), 0,
      35, QMetaType::QColor, 0x00015103, uint(-1), 0,
      36, QMetaType::Double, 0x00015103, uint(-1), 0,
      37, QMetaType::QString, 0x00015103, uint(-1), 0,
      38, 0x80000000 | 39, 0x0001510b, uint(-1), 0,
      40, QMetaType::QString, 0x00015103, uint(-1), 0,
      41, QMetaType::Int, 0x00015103, uint(-1), 0,
      42, QMetaType::Double, 0x00015103, uint(-1), 0,
      43, 0x80000000 | 44, 0x0001510b, uint(-1), 0,
      45, QMetaType::QStringList, 0x00015103, uint(-1), 0,
      46, QMetaType::Int, 0x00015103, uint(-1), 0,
      47, QMetaType::Int, 0x00015103, uint(-1), 0,
      48, QMetaType::Int, 0x00015103, uint(-1), 0,
      49, QMetaType::Int, 0x00015103, uint(-1), 0,
      50, QMetaType::Int, 0x00015103, uint(-1), 0,
      51, QMetaType::QPen, 0x00015103, uint(-1), 0,
      52, QMetaType::QPen, 0x00015103, uint(-1), 0,
      53, QMetaType::QPen, 0x00015103, uint(-1), 0,
      54, QMetaType::QFont, 0x00015103, uint(-1), 0,
      55, QMetaType::QColor, 0x00015103, uint(-1), 0,
      56, QMetaType::QString, 0x00015103, uint(-1), 0,
      57, QMetaType::Int, 0x00015103, uint(-1), 0,
      58, QMetaType::Int, 0x00015103, uint(-1), 0,
      59, QMetaType::Int, 0x00015103, uint(-1), 0,
      15, 0x80000000 | 60, 0x0001510b, uint(-1), 0,
      13, 0x80000000 | 60, 0x0001510b, uint(-1), 0,
      61, QMetaType::QFont, 0x00015103, uint(-1), 0,
      62, QMetaType::QFont, 0x00015103, uint(-1), 0,
      63, QMetaType::QColor, 0x00015103, uint(-1), 0,
      64, QMetaType::QColor, 0x00015103, uint(-1), 0,
      65, QMetaType::QPen, 0x00015103, uint(-1), 0,
      66, QMetaType::QPen, 0x00015103, uint(-1), 0,
      67, QMetaType::QPen, 0x00015103, uint(-1), 0,
      68, 0x80000000 | 69, 0x0001510b, uint(-1), 0,
      70, 0x80000000 | 69, 0x0001510b, uint(-1), 0,
      71, 0x80000000 | 72, 0x00015009, uint(-1), 0,

 // enums: name, alias, flags, count, data
      17,   17, 0x1,    4,  362,
      77,   17, 0x1,    4,  370,
      33,   33, 0x0,    2,  378,
      21,   21, 0x0,    2,  382,
      82,   82, 0x1,    4,  386,
      60,   82, 0x1,    4,  394,

 // enum data: key, value
      73, uint(QCPAxis::atLeft),
      74, uint(QCPAxis::atRight),
      75, uint(QCPAxis::atTop),
      76, uint(QCPAxis::atBottom),
      73, uint(QCPAxis::atLeft),
      74, uint(QCPAxis::atRight),
      75, uint(QCPAxis::atTop),
      76, uint(QCPAxis::atBottom),
      78, uint(QCPAxis::ltNumber),
      79, uint(QCPAxis::ltDateTime),
      80, uint(QCPAxis::stLinear),
      81, uint(QCPAxis::stLogarithmic),
      83, uint(QCPAxis::spNone),
      84, uint(QCPAxis::spAxis),
      85, uint(QCPAxis::spTickLabels),
      86, uint(QCPAxis::spAxisLabel),
      83, uint(QCPAxis::spNone),
      84, uint(QCPAxis::spAxis),
      85, uint(QCPAxis::spTickLabels),
      86, uint(QCPAxis::spAxisLabel),

       0        // eod
};

Q_CONSTINIT const QMetaObject QCPAxis::staticMetaObject = { {
    QMetaObject::SuperData::link<QCPLayerable::staticMetaObject>(),
    qt_meta_stringdata_CLASSQCPAxisENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQCPAxisENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQCPAxisENDCLASS_t,
        // property 'axisType'
        QtPrivate::TypeAndForceComplete<AxisType, std::true_type>,
        // property 'axisRect'
        QtPrivate::TypeAndForceComplete<QCPAxisRect*, std::true_type>,
        // property 'scaleType'
        QtPrivate::TypeAndForceComplete<ScaleType, std::true_type>,
        // property 'scaleLogBase'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'range'
        QtPrivate::TypeAndForceComplete<QCPRange, std::true_type>,
        // property 'rangeReversed'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'autoTicks'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'autoTickCount'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'autoTickLabels'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'autoTickStep'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'autoSubTicks'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'ticks'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'tickLabels'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'tickLabelPadding'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'tickLabelType'
        QtPrivate::TypeAndForceComplete<LabelType, std::true_type>,
        // property 'tickLabelFont'
        QtPrivate::TypeAndForceComplete<QFont, std::true_type>,
        // property 'tickLabelColor'
        QtPrivate::TypeAndForceComplete<QColor, std::true_type>,
        // property 'tickLabelRotation'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'dateTimeFormat'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'dateTimeSpec'
        QtPrivate::TypeAndForceComplete<Qt::TimeSpec, std::true_type>,
        // property 'numberFormat'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'numberPrecision'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'tickStep'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'tickVector'
        QtPrivate::TypeAndForceComplete<QList<double>, std::true_type>,
        // property 'tickVectorLabels'
        QtPrivate::TypeAndForceComplete<QList<QString>, std::true_type>,
        // property 'tickLengthIn'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'tickLengthOut'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'subTickCount'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'subTickLengthIn'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'subTickLengthOut'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'basePen'
        QtPrivate::TypeAndForceComplete<QPen, std::true_type>,
        // property 'tickPen'
        QtPrivate::TypeAndForceComplete<QPen, std::true_type>,
        // property 'subTickPen'
        QtPrivate::TypeAndForceComplete<QPen, std::true_type>,
        // property 'labelFont'
        QtPrivate::TypeAndForceComplete<QFont, std::true_type>,
        // property 'labelColor'
        QtPrivate::TypeAndForceComplete<QColor, std::true_type>,
        // property 'label'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'labelPadding'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'padding'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'offset'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'selectedParts'
        QtPrivate::TypeAndForceComplete<SelectableParts, std::true_type>,
        // property 'selectableParts'
        QtPrivate::TypeAndForceComplete<SelectableParts, std::true_type>,
        // property 'selectedTickLabelFont'
        QtPrivate::TypeAndForceComplete<QFont, std::true_type>,
        // property 'selectedLabelFont'
        QtPrivate::TypeAndForceComplete<QFont, std::true_type>,
        // property 'selectedTickLabelColor'
        QtPrivate::TypeAndForceComplete<QColor, std::true_type>,
        // property 'selectedLabelColor'
        QtPrivate::TypeAndForceComplete<QColor, std::true_type>,
        // property 'selectedBasePen'
        QtPrivate::TypeAndForceComplete<QPen, std::true_type>,
        // property 'selectedTickPen'
        QtPrivate::TypeAndForceComplete<QPen, std::true_type>,
        // property 'selectedSubTickPen'
        QtPrivate::TypeAndForceComplete<QPen, std::true_type>,
        // property 'lowerEnding'
        QtPrivate::TypeAndForceComplete<QCPLineEnding, std::true_type>,
        // property 'upperEnding'
        QtPrivate::TypeAndForceComplete<QCPLineEnding, std::true_type>,
        // property 'grid'
        QtPrivate::TypeAndForceComplete<QCPGrid*, std::true_type>,
        // enum 'AxisType'
        QtPrivate::TypeAndForceComplete<QCPAxis::AxisType, std::true_type>,
        // enum 'AxisTypes'
        QtPrivate::TypeAndForceComplete<QCPAxis::AxisTypes, std::true_type>,
        // enum 'LabelType'
        QtPrivate::TypeAndForceComplete<QCPAxis::LabelType, std::true_type>,
        // enum 'ScaleType'
        QtPrivate::TypeAndForceComplete<QCPAxis::ScaleType, std::true_type>,
        // enum 'SelectablePart'
        QtPrivate::TypeAndForceComplete<QCPAxis::SelectablePart, std::true_type>,
        // enum 'SelectableParts'
        QtPrivate::TypeAndForceComplete<QCPAxis::SelectableParts, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QCPAxis, std::true_type>,
        // method 'ticksRequest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'rangeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QCPRange &, std::false_type>,
        // method 'rangeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QCPRange &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QCPRange &, std::false_type>,
        // method 'selectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QCPAxis::SelectableParts &, std::false_type>,
        // method 'setRange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QCPRange &, std::false_type>,
        // method 'setSelectableParts'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QCPAxis::SelectableParts &, std::false_type>,
        // method 'setSelectedParts'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QCPAxis::SelectableParts &, std::false_type>
    >,
    nullptr
} };

void QCPAxis::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QCPAxis *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ticksRequest(); break;
        case 1: _t->rangeChanged((*reinterpret_cast< std::add_pointer_t<QCPRange>>(_a[1]))); break;
        case 2: _t->rangeChanged((*reinterpret_cast< std::add_pointer_t<QCPRange>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QCPRange>>(_a[2]))); break;
        case 3: _t->selectionChanged((*reinterpret_cast< std::add_pointer_t<QCPAxis::SelectableParts>>(_a[1]))); break;
        case 4: _t->setRange((*reinterpret_cast< std::add_pointer_t<QCPRange>>(_a[1]))); break;
        case 5: _t->setSelectableParts((*reinterpret_cast< std::add_pointer_t<QCPAxis::SelectableParts>>(_a[1]))); break;
        case 6: _t->setSelectedParts((*reinterpret_cast< std::add_pointer_t<QCPAxis::SelectableParts>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QCPAxis::*)();
            if (_t _q_method = &QCPAxis::ticksRequest; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QCPAxis::*)(const QCPRange & );
            if (_t _q_method = &QCPAxis::rangeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QCPAxis::*)(const QCPRange & , const QCPRange & );
            if (_t _q_method = &QCPAxis::rangeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QCPAxis::*)(const QCPAxis::SelectableParts & );
            if (_t _q_method = &QCPAxis::selectionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCPAxisRect* >(); break;
        case 50:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCPGrid* >(); break;
        case 23:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<double> >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QCPAxis *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = QFlag(_t->axisType()); break;
        case 1: *reinterpret_cast< QCPAxisRect**>(_v) = _t->axisRect(); break;
        case 2: *reinterpret_cast< ScaleType*>(_v) = _t->scaleType(); break;
        case 3: *reinterpret_cast< double*>(_v) = _t->scaleLogBase(); break;
        case 4: *reinterpret_cast< QCPRange*>(_v) = _t->range(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->rangeReversed(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->autoTicks(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->autoTickCount(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->autoTickLabels(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->autoTickStep(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->autoSubTicks(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->ticks(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->tickLabels(); break;
        case 13: *reinterpret_cast< int*>(_v) = _t->tickLabelPadding(); break;
        case 14: *reinterpret_cast< LabelType*>(_v) = _t->tickLabelType(); break;
        case 15: *reinterpret_cast< QFont*>(_v) = _t->tickLabelFont(); break;
        case 16: *reinterpret_cast< QColor*>(_v) = _t->tickLabelColor(); break;
        case 17: *reinterpret_cast< double*>(_v) = _t->tickLabelRotation(); break;
        case 18: *reinterpret_cast< QString*>(_v) = _t->dateTimeFormat(); break;
        case 19: *reinterpret_cast< Qt::TimeSpec*>(_v) = _t->dateTimeSpec(); break;
        case 20: *reinterpret_cast< QString*>(_v) = _t->numberFormat(); break;
        case 21: *reinterpret_cast< int*>(_v) = _t->numberPrecision(); break;
        case 22: *reinterpret_cast< double*>(_v) = _t->tickStep(); break;
        case 23: *reinterpret_cast< QList<double>*>(_v) = _t->tickVector(); break;
        case 24: *reinterpret_cast< QList<QString>*>(_v) = _t->tickVectorLabels(); break;
        case 25: *reinterpret_cast< int*>(_v) = _t->tickLengthIn(); break;
        case 26: *reinterpret_cast< int*>(_v) = _t->tickLengthOut(); break;
        case 27: *reinterpret_cast< int*>(_v) = _t->subTickCount(); break;
        case 28: *reinterpret_cast< int*>(_v) = _t->subTickLengthIn(); break;
        case 29: *reinterpret_cast< int*>(_v) = _t->subTickLengthOut(); break;
        case 30: *reinterpret_cast< QPen*>(_v) = _t->basePen(); break;
        case 31: *reinterpret_cast< QPen*>(_v) = _t->tickPen(); break;
        case 32: *reinterpret_cast< QPen*>(_v) = _t->subTickPen(); break;
        case 33: *reinterpret_cast< QFont*>(_v) = _t->labelFont(); break;
        case 34: *reinterpret_cast< QColor*>(_v) = _t->labelColor(); break;
        case 35: *reinterpret_cast< QString*>(_v) = _t->label(); break;
        case 36: *reinterpret_cast< int*>(_v) = _t->labelPadding(); break;
        case 37: *reinterpret_cast< int*>(_v) = _t->padding(); break;
        case 38: *reinterpret_cast< int*>(_v) = _t->offset(); break;
        case 39: *reinterpret_cast<int*>(_v) = QFlag(_t->selectedParts()); break;
        case 40: *reinterpret_cast<int*>(_v) = QFlag(_t->selectableParts()); break;
        case 41: *reinterpret_cast< QFont*>(_v) = _t->selectedTickLabelFont(); break;
        case 42: *reinterpret_cast< QFont*>(_v) = _t->selectedLabelFont(); break;
        case 43: *reinterpret_cast< QColor*>(_v) = _t->selectedTickLabelColor(); break;
        case 44: *reinterpret_cast< QColor*>(_v) = _t->selectedLabelColor(); break;
        case 45: *reinterpret_cast< QPen*>(_v) = _t->selectedBasePen(); break;
        case 46: *reinterpret_cast< QPen*>(_v) = _t->selectedTickPen(); break;
        case 47: *reinterpret_cast< QPen*>(_v) = _t->selectedSubTickPen(); break;
        case 48: *reinterpret_cast< QCPLineEnding*>(_v) = _t->lowerEnding(); break;
        case 49: *reinterpret_cast< QCPLineEnding*>(_v) = _t->upperEnding(); break;
        case 50: *reinterpret_cast< QCPGrid**>(_v) = _t->grid(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QCPAxis *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setScaleType(*reinterpret_cast< ScaleType*>(_v)); break;
        case 3: _t->setScaleLogBase(*reinterpret_cast< double*>(_v)); break;
        case 4: _t->setRange(*reinterpret_cast< QCPRange*>(_v)); break;
        case 5: _t->setRangeReversed(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setAutoTicks(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setAutoTickCount(*reinterpret_cast< int*>(_v)); break;
        case 8: _t->setAutoTickLabels(*reinterpret_cast< bool*>(_v)); break;
        case 9: _t->setAutoTickStep(*reinterpret_cast< bool*>(_v)); break;
        case 10: _t->setAutoSubTicks(*reinterpret_cast< bool*>(_v)); break;
        case 11: _t->setTicks(*reinterpret_cast< bool*>(_v)); break;
        case 12: _t->setTickLabels(*reinterpret_cast< bool*>(_v)); break;
        case 13: _t->setTickLabelPadding(*reinterpret_cast< int*>(_v)); break;
        case 14: _t->setTickLabelType(*reinterpret_cast< LabelType*>(_v)); break;
        case 15: _t->setTickLabelFont(*reinterpret_cast< QFont*>(_v)); break;
        case 16: _t->setTickLabelColor(*reinterpret_cast< QColor*>(_v)); break;
        case 17: _t->setTickLabelRotation(*reinterpret_cast< double*>(_v)); break;
        case 18: _t->setDateTimeFormat(*reinterpret_cast< QString*>(_v)); break;
        case 19: _t->setDateTimeSpec(*reinterpret_cast< Qt::TimeSpec*>(_v)); break;
        case 20: _t->setNumberFormat(*reinterpret_cast< QString*>(_v)); break;
        case 21: _t->setNumberPrecision(*reinterpret_cast< int*>(_v)); break;
        case 22: _t->setTickStep(*reinterpret_cast< double*>(_v)); break;
        case 23: _t->setTickVector(*reinterpret_cast< QList<double>*>(_v)); break;
        case 24: _t->setTickVectorLabels(*reinterpret_cast< QList<QString>*>(_v)); break;
        case 25: _t->setTickLengthIn(*reinterpret_cast< int*>(_v)); break;
        case 26: _t->setTickLengthOut(*reinterpret_cast< int*>(_v)); break;
        case 27: _t->setSubTickCount(*reinterpret_cast< int*>(_v)); break;
        case 28: _t->setSubTickLengthIn(*reinterpret_cast< int*>(_v)); break;
        case 29: _t->setSubTickLengthOut(*reinterpret_cast< int*>(_v)); break;
        case 30: _t->setBasePen(*reinterpret_cast< QPen*>(_v)); break;
        case 31: _t->setTickPen(*reinterpret_cast< QPen*>(_v)); break;
        case 32: _t->setSubTickPen(*reinterpret_cast< QPen*>(_v)); break;
        case 33: _t->setLabelFont(*reinterpret_cast< QFont*>(_v)); break;
        case 34: _t->setLabelColor(*reinterpret_cast< QColor*>(_v)); break;
        case 35: _t->setLabel(*reinterpret_cast< QString*>(_v)); break;
        case 36: _t->setLabelPadding(*reinterpret_cast< int*>(_v)); break;
        case 37: _t->setPadding(*reinterpret_cast< int*>(_v)); break;
        case 38: _t->setOffset(*reinterpret_cast< int*>(_v)); break;
        case 39: _t->setSelectedParts(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 40: _t->setSelectableParts(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 41: _t->setSelectedTickLabelFont(*reinterpret_cast< QFont*>(_v)); break;
        case 42: _t->setSelectedLabelFont(*reinterpret_cast< QFont*>(_v)); break;
        case 43: _t->setSelectedTickLabelColor(*reinterpret_cast< QColor*>(_v)); break;
        case 44: _t->setSelectedLabelColor(*reinterpret_cast< QColor*>(_v)); break;
        case 45: _t->setSelectedBasePen(*reinterpret_cast< QPen*>(_v)); break;
        case 46: _t->setSelectedTickPen(*reinterpret_cast< QPen*>(_v)); break;
        case 47: _t->setSelectedSubTickPen(*reinterpret_cast< QPen*>(_v)); break;
        case 48: _t->setLowerEnding(*reinterpret_cast< QCPLineEnding*>(_v)); break;
        case 49: _t->setUpperEnding(*reinterpret_cast< QCPLineEnding*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QCPAxis::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPAxis::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQCPAxisENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QCPLayerable::qt_metacast(_clname);
}

int QCPAxis::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPLayerable::qt_metacall(_c, _id, _a);
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
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 51;
    }
    return _id;
}

// SIGNAL 0
void QCPAxis::ticksRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QCPAxis::rangeChanged(const QCPRange & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QCPAxis::rangeChanged(const QCPRange & _t1, const QCPRange & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QCPAxis::selectionChanged(const QCPAxis::SelectableParts & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQCPAbstractPlottableENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQCPAbstractPlottableENDCLASS = QtMocHelpers::stringData(
    "QCPAbstractPlottable",
    "selectionChanged",
    "",
    "selected",
    "setSelectable",
    "selectable",
    "setSelected",
    "name",
    "antialiasedFill",
    "antialiasedScatters",
    "antialiasedErrorBars",
    "pen",
    "selectedPen",
    "brush",
    "selectedBrush",
    "keyAxis",
    "QCPAxis*",
    "valueAxis"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQCPAbstractPlottableENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
      12,   41, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x06,   13 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,   35,    2, 0x0a,   15 /* Public */,
       6,    1,   38,    2, 0x0a,   17 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    3,

 // properties: name, type, flags
       7, QMetaType::QString, 0x00015103, uint(-1), 0,
       8, QMetaType::Bool, 0x00015103, uint(-1), 0,
       9, QMetaType::Bool, 0x00015103, uint(-1), 0,
      10, QMetaType::Bool, 0x00015103, uint(-1), 0,
      11, QMetaType::QPen, 0x00015103, uint(-1), 0,
      12, QMetaType::QPen, 0x00015103, uint(-1), 0,
      13, QMetaType::QBrush, 0x00015103, uint(-1), 0,
      14, QMetaType::QBrush, 0x00015103, uint(-1), 0,
      15, 0x80000000 | 16, 0x0001510b, uint(-1), 0,
      17, 0x80000000 | 16, 0x0001510b, uint(-1), 0,
       5, QMetaType::Bool, 0x00015103, uint(-1), 0,
       3, QMetaType::Bool, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QCPAbstractPlottable::staticMetaObject = { {
    QMetaObject::SuperData::link<QCPLayerable::staticMetaObject>(),
    qt_meta_stringdata_CLASSQCPAbstractPlottableENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQCPAbstractPlottableENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQCPAbstractPlottableENDCLASS_t,
        // property 'name'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'antialiasedFill'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'antialiasedScatters'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'antialiasedErrorBars'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'pen'
        QtPrivate::TypeAndForceComplete<QPen, std::true_type>,
        // property 'selectedPen'
        QtPrivate::TypeAndForceComplete<QPen, std::true_type>,
        // property 'brush'
        QtPrivate::TypeAndForceComplete<QBrush, std::true_type>,
        // property 'selectedBrush'
        QtPrivate::TypeAndForceComplete<QBrush, std::true_type>,
        // property 'keyAxis'
        QtPrivate::TypeAndForceComplete<QCPAxis*, std::true_type>,
        // property 'valueAxis'
        QtPrivate::TypeAndForceComplete<QCPAxis*, std::true_type>,
        // property 'selectable'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'selected'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QCPAbstractPlottable, std::true_type>,
        // method 'selectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setSelectable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void QCPAbstractPlottable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QCPAbstractPlottable *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->selectionChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->setSelectable((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->setSelected((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QCPAbstractPlottable::*)(bool );
            if (_t _q_method = &QCPAbstractPlottable::selectionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
        case 8:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCPAxis* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QCPAbstractPlottable *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->antialiasedFill(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->antialiasedScatters(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->antialiasedErrorBars(); break;
        case 4: *reinterpret_cast< QPen*>(_v) = _t->pen(); break;
        case 5: *reinterpret_cast< QPen*>(_v) = _t->selectedPen(); break;
        case 6: *reinterpret_cast< QBrush*>(_v) = _t->brush(); break;
        case 7: *reinterpret_cast< QBrush*>(_v) = _t->selectedBrush(); break;
        case 8: *reinterpret_cast< QCPAxis**>(_v) = _t->keyAxis(); break;
        case 9: *reinterpret_cast< QCPAxis**>(_v) = _t->valueAxis(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->selectable(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->selected(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QCPAbstractPlottable *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setAntialiasedFill(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setAntialiasedScatters(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setAntialiasedErrorBars(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setPen(*reinterpret_cast< QPen*>(_v)); break;
        case 5: _t->setSelectedPen(*reinterpret_cast< QPen*>(_v)); break;
        case 6: _t->setBrush(*reinterpret_cast< QBrush*>(_v)); break;
        case 7: _t->setSelectedBrush(*reinterpret_cast< QBrush*>(_v)); break;
        case 8: _t->setKeyAxis(*reinterpret_cast< QCPAxis**>(_v)); break;
        case 9: _t->setValueAxis(*reinterpret_cast< QCPAxis**>(_v)); break;
        case 10: _t->setSelectable(*reinterpret_cast< bool*>(_v)); break;
        case 11: _t->setSelected(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QCPAbstractPlottable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPAbstractPlottable::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQCPAbstractPlottableENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QCPLayerable::qt_metacast(_clname);
}

int QCPAbstractPlottable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPLayerable::qt_metacall(_c, _id, _a);
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
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void QCPAbstractPlottable::selectionChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQCPAbstractItemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQCPAbstractItemENDCLASS = QtMocHelpers::stringData(
    "QCPAbstractItem",
    "selectionChanged",
    "",
    "selected",
    "clipToAxisRect",
    "clipAxisRect",
    "QCPAxisRect*",
    "selectable"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQCPAbstractItemENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       4,   23, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   20,    2, 0x06,    5 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // properties: name, type, flags
       4, QMetaType::Bool, 0x00015103, uint(-1), 0,
       5, 0x80000000 | 6, 0x0001510b, uint(-1), 0,
       7, QMetaType::Bool, 0x00015103, uint(-1), 0,
       3, QMetaType::Bool, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QCPAbstractItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QCPLayerable::staticMetaObject>(),
    qt_meta_stringdata_CLASSQCPAbstractItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQCPAbstractItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQCPAbstractItemENDCLASS_t,
        // property 'clipToAxisRect'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'clipAxisRect'
        QtPrivate::TypeAndForceComplete<QCPAxisRect*, std::true_type>,
        // property 'selectable'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'selected'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QCPAbstractItem, std::true_type>,
        // method 'selectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void QCPAbstractItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QCPAbstractItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->selectionChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QCPAbstractItem::*)(bool );
            if (_t _q_method = &QCPAbstractItem::selectionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCPAxisRect* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QCPAbstractItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->clipToAxisRect(); break;
        case 1: *reinterpret_cast< QCPAxisRect**>(_v) = _t->clipAxisRect(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->selectable(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->selected(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QCPAbstractItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setClipToAxisRect(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setClipAxisRect(*reinterpret_cast< QCPAxisRect**>(_v)); break;
        case 2: _t->setSelectable(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setSelected(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QCPAbstractItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPAbstractItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQCPAbstractItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QCPLayerable::qt_metacast(_clname);
}

int QCPAbstractItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPLayerable::qt_metacall(_c, _id, _a);
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
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QCPAbstractItem::selectionChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQCustomPlotENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQCustomPlotENDCLASS = QtMocHelpers::stringData(
    "QCustomPlot",
    "mouseDoubleClick",
    "",
    "QMouseEvent*",
    "event",
    "mousePress",
    "mouseMove",
    "mouseRelease",
    "mouseWheel",
    "QWheelEvent*",
    "plottableClick",
    "QCPAbstractPlottable*",
    "plottable",
    "plottableDoubleClick",
    "itemClick",
    "QCPAbstractItem*",
    "item",
    "itemDoubleClick",
    "axisClick",
    "QCPAxis*",
    "axis",
    "QCPAxis::SelectablePart",
    "part",
    "axisDoubleClick",
    "legendClick",
    "QCPLegend*",
    "legend",
    "QCPAbstractLegendItem*",
    "legendDoubleClick",
    "titleClick",
    "QCPPlotTitle*",
    "title",
    "titleDoubleClick",
    "selectionChangedByUser",
    "beforeReplot",
    "afterReplot",
    "rescaleAxes",
    "onlyVisiblePlottables",
    "deselectAll",
    "replot",
    "viewport",
    "background",
    "backgroundScaled",
    "backgroundScaledMode",
    "Qt::AspectRatioMode",
    "plotLayout",
    "QCPLayoutGrid*",
    "autoAddPlottableToLegend",
    "selectionTolerance",
    "noAntialiasingOnDrag",
    "multiSelectModifier",
    "Qt::KeyboardModifier",
    "LayerInsertMode",
    "limBelow",
    "limAbove"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQCustomPlotENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       9,  228, // properties
       1,  273, // enums/sets
       0,    0, // constructors
       0,       // flags
      18,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  146,    2, 0x06,   11 /* Public */,
       5,    1,  149,    2, 0x06,   13 /* Public */,
       6,    1,  152,    2, 0x06,   15 /* Public */,
       7,    1,  155,    2, 0x06,   17 /* Public */,
       8,    1,  158,    2, 0x06,   19 /* Public */,
      10,    2,  161,    2, 0x06,   21 /* Public */,
      13,    2,  166,    2, 0x06,   24 /* Public */,
      14,    2,  171,    2, 0x06,   27 /* Public */,
      17,    2,  176,    2, 0x06,   30 /* Public */,
      18,    3,  181,    2, 0x06,   33 /* Public */,
      23,    3,  188,    2, 0x06,   37 /* Public */,
      24,    3,  195,    2, 0x06,   41 /* Public */,
      28,    3,  202,    2, 0x06,   45 /* Public */,
      29,    2,  209,    2, 0x06,   49 /* Public */,
      32,    2,  214,    2, 0x06,   52 /* Public */,
      33,    0,  219,    2, 0x06,   55 /* Public */,
      34,    0,  220,    2, 0x06,   56 /* Public */,
      35,    0,  221,    2, 0x06,   57 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      36,    1,  222,    2, 0x0a,   58 /* Public */,
      36,    0,  225,    2, 0x2a,   60 /* Public | MethodCloned */,
      38,    0,  226,    2, 0x0a,   61 /* Public */,
      39,    0,  227,    2, 0x0a,   62 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 9,    4,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 3,   12,    4,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 3,   12,    4,
    QMetaType::Void, 0x80000000 | 15, 0x80000000 | 3,   16,    4,
    QMetaType::Void, 0x80000000 | 15, 0x80000000 | 3,   16,    4,
    QMetaType::Void, 0x80000000 | 19, 0x80000000 | 21, 0x80000000 | 3,   20,   22,    4,
    QMetaType::Void, 0x80000000 | 19, 0x80000000 | 21, 0x80000000 | 3,   20,   22,    4,
    QMetaType::Void, 0x80000000 | 25, 0x80000000 | 27, 0x80000000 | 3,   26,   16,    4,
    QMetaType::Void, 0x80000000 | 25, 0x80000000 | 27, 0x80000000 | 3,   26,   16,    4,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 30,    4,   31,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 30,    4,   31,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   37,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      40, QMetaType::QRect, 0x00015103, uint(-1), 0,
      41, QMetaType::QPixmap, 0x00015103, uint(-1), 0,
      42, QMetaType::Bool, 0x00015103, uint(-1), 0,
      43, 0x80000000 | 44, 0x0001510b, uint(-1), 0,
      45, 0x80000000 | 46, 0x00015009, uint(-1), 0,
      47, QMetaType::Bool, 0x00015103, uint(-1), 0,
      48, QMetaType::Int, 0x00015103, uint(-1), 0,
      49, QMetaType::Bool, 0x00015103, uint(-1), 0,
      50, 0x80000000 | 51, 0x0001510b, uint(-1), 0,

 // enums: name, alias, flags, count, data
      52,   52, 0x0,    2,  278,

 // enum data: key, value
      53, uint(QCustomPlot::limBelow),
      54, uint(QCustomPlot::limAbove),

       0        // eod
};

Q_CONSTINIT const QMetaObject QCustomPlot::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSQCustomPlotENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQCustomPlotENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQCustomPlotENDCLASS_t,
        // property 'viewport'
        QtPrivate::TypeAndForceComplete<QRect, std::true_type>,
        // property 'background'
        QtPrivate::TypeAndForceComplete<QPixmap, std::true_type>,
        // property 'backgroundScaled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'backgroundScaledMode'
        QtPrivate::TypeAndForceComplete<Qt::AspectRatioMode, std::true_type>,
        // property 'plotLayout'
        QtPrivate::TypeAndForceComplete<QCPLayoutGrid*, std::true_type>,
        // property 'autoAddPlottableToLegend'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'selectionTolerance'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'noAntialiasingOnDrag'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'multiSelectModifier'
        QtPrivate::TypeAndForceComplete<Qt::KeyboardModifier, std::true_type>,
        // enum 'LayerInsertMode'
        QtPrivate::TypeAndForceComplete<QCustomPlot::LayerInsertMode, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QCustomPlot, std::true_type>,
        // method 'mouseDoubleClick'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>,
        // method 'mousePress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>,
        // method 'mouseMove'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>,
        // method 'mouseRelease'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>,
        // method 'mouseWheel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QWheelEvent *, std::false_type>,
        // method 'plottableClick'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QCPAbstractPlottable *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>,
        // method 'plottableDoubleClick'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QCPAbstractPlottable *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>,
        // method 'itemClick'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QCPAbstractItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>,
        // method 'itemDoubleClick'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QCPAbstractItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>,
        // method 'axisClick'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QCPAxis *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QCPAxis::SelectablePart, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>,
        // method 'axisDoubleClick'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QCPAxis *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QCPAxis::SelectablePart, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>,
        // method 'legendClick'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QCPLegend *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QCPAbstractLegendItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>,
        // method 'legendDoubleClick'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QCPLegend *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QCPAbstractLegendItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>,
        // method 'titleClick'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QCPPlotTitle *, std::false_type>,
        // method 'titleDoubleClick'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QCPPlotTitle *, std::false_type>,
        // method 'selectionChangedByUser'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'beforeReplot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'afterReplot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'rescaleAxes'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'rescaleAxes'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deselectAll'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'replot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QCustomPlot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QCustomPlot *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->mouseDoubleClick((*reinterpret_cast< std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        case 1: _t->mousePress((*reinterpret_cast< std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        case 2: _t->mouseMove((*reinterpret_cast< std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        case 3: _t->mouseRelease((*reinterpret_cast< std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        case 4: _t->mouseWheel((*reinterpret_cast< std::add_pointer_t<QWheelEvent*>>(_a[1]))); break;
        case 5: _t->plottableClick((*reinterpret_cast< std::add_pointer_t<QCPAbstractPlottable*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QMouseEvent*>>(_a[2]))); break;
        case 6: _t->plottableDoubleClick((*reinterpret_cast< std::add_pointer_t<QCPAbstractPlottable*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QMouseEvent*>>(_a[2]))); break;
        case 7: _t->itemClick((*reinterpret_cast< std::add_pointer_t<QCPAbstractItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QMouseEvent*>>(_a[2]))); break;
        case 8: _t->itemDoubleClick((*reinterpret_cast< std::add_pointer_t<QCPAbstractItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QMouseEvent*>>(_a[2]))); break;
        case 9: _t->axisClick((*reinterpret_cast< std::add_pointer_t<QCPAxis*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QCPAxis::SelectablePart>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QMouseEvent*>>(_a[3]))); break;
        case 10: _t->axisDoubleClick((*reinterpret_cast< std::add_pointer_t<QCPAxis*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QCPAxis::SelectablePart>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QMouseEvent*>>(_a[3]))); break;
        case 11: _t->legendClick((*reinterpret_cast< std::add_pointer_t<QCPLegend*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QCPAbstractLegendItem*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QMouseEvent*>>(_a[3]))); break;
        case 12: _t->legendDoubleClick((*reinterpret_cast< std::add_pointer_t<QCPLegend*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QCPAbstractLegendItem*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QMouseEvent*>>(_a[3]))); break;
        case 13: _t->titleClick((*reinterpret_cast< std::add_pointer_t<QMouseEvent*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QCPPlotTitle*>>(_a[2]))); break;
        case 14: _t->titleDoubleClick((*reinterpret_cast< std::add_pointer_t<QMouseEvent*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QCPPlotTitle*>>(_a[2]))); break;
        case 15: _t->selectionChangedByUser(); break;
        case 16: _t->beforeReplot(); break;
        case 17: _t->afterReplot(); break;
        case 18: _t->rescaleAxes((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 19: _t->rescaleAxes(); break;
        case 20: _t->deselectAll(); break;
        case 21: _t->replot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QCPAbstractPlottable* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QCPAbstractPlottable* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QCPAbstractItem* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QCPAbstractItem* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QCPAxis* >(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QCPAxis::SelectablePart >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QCPAxis* >(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QCPAxis::SelectablePart >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QCPAbstractLegendItem* >(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QCPLegend* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QCPAbstractLegendItem* >(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QCPLegend* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QCPPlotTitle* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QCPPlotTitle* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QCustomPlot::*)(QMouseEvent * );
            if (_t _q_method = &QCustomPlot::mouseDoubleClick; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QCustomPlot::*)(QMouseEvent * );
            if (_t _q_method = &QCustomPlot::mousePress; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QCustomPlot::*)(QMouseEvent * );
            if (_t _q_method = &QCustomPlot::mouseMove; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QCustomPlot::*)(QMouseEvent * );
            if (_t _q_method = &QCustomPlot::mouseRelease; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QCustomPlot::*)(QWheelEvent * );
            if (_t _q_method = &QCustomPlot::mouseWheel; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QCustomPlot::*)(QCPAbstractPlottable * , QMouseEvent * );
            if (_t _q_method = &QCustomPlot::plottableClick; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QCustomPlot::*)(QCPAbstractPlottable * , QMouseEvent * );
            if (_t _q_method = &QCustomPlot::plottableDoubleClick; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (QCustomPlot::*)(QCPAbstractItem * , QMouseEvent * );
            if (_t _q_method = &QCustomPlot::itemClick; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (QCustomPlot::*)(QCPAbstractItem * , QMouseEvent * );
            if (_t _q_method = &QCustomPlot::itemDoubleClick; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (QCustomPlot::*)(QCPAxis * , QCPAxis::SelectablePart , QMouseEvent * );
            if (_t _q_method = &QCustomPlot::axisClick; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (QCustomPlot::*)(QCPAxis * , QCPAxis::SelectablePart , QMouseEvent * );
            if (_t _q_method = &QCustomPlot::axisDoubleClick; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (QCustomPlot::*)(QCPLegend * , QCPAbstractLegendItem * , QMouseEvent * );
            if (_t _q_method = &QCustomPlot::legendClick; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (QCustomPlot::*)(QCPLegend * , QCPAbstractLegendItem * , QMouseEvent * );
            if (_t _q_method = &QCustomPlot::legendDoubleClick; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (QCustomPlot::*)(QMouseEvent * , QCPPlotTitle * );
            if (_t _q_method = &QCustomPlot::titleClick; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (QCustomPlot::*)(QMouseEvent * , QCPPlotTitle * );
            if (_t _q_method = &QCustomPlot::titleDoubleClick; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (QCustomPlot::*)();
            if (_t _q_method = &QCustomPlot::selectionChangedByUser; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (QCustomPlot::*)();
            if (_t _q_method = &QCustomPlot::beforeReplot; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (QCustomPlot::*)();
            if (_t _q_method = &QCustomPlot::afterReplot; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 17;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCPLayoutGrid* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QCustomPlot *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QRect*>(_v) = _t->viewport(); break;
        case 1: *reinterpret_cast< QPixmap*>(_v) = _t->background(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->backgroundScaled(); break;
        case 3: *reinterpret_cast< Qt::AspectRatioMode*>(_v) = _t->backgroundScaledMode(); break;
        case 4: *reinterpret_cast< QCPLayoutGrid**>(_v) = _t->plotLayout(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->autoAddPlottableToLegend(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->selectionTolerance(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->noAntialiasingOnDrag(); break;
        case 8: *reinterpret_cast< Qt::KeyboardModifier*>(_v) = _t->multiSelectModifier(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QCustomPlot *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setViewport(*reinterpret_cast< QRect*>(_v)); break;
        case 1: _t->setBackground(*reinterpret_cast< QPixmap*>(_v)); break;
        case 2: _t->setBackgroundScaled(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setBackgroundScaledMode(*reinterpret_cast< Qt::AspectRatioMode*>(_v)); break;
        case 5: _t->setAutoAddPlottableToLegend(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setSelectionTolerance(*reinterpret_cast< int*>(_v)); break;
        case 7: _t->setNoAntialiasingOnDrag(*reinterpret_cast< bool*>(_v)); break;
        case 8: _t->setMultiSelectModifier(*reinterpret_cast< Qt::KeyboardModifier*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QCustomPlot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCustomPlot::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQCustomPlotENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QCustomPlot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void QCustomPlot::mouseDoubleClick(QMouseEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QCustomPlot::mousePress(QMouseEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QCustomPlot::mouseMove(QMouseEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QCustomPlot::mouseRelease(QMouseEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QCustomPlot::mouseWheel(QWheelEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QCustomPlot::plottableClick(QCPAbstractPlottable * _t1, QMouseEvent * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QCustomPlot::plottableDoubleClick(QCPAbstractPlottable * _t1, QMouseEvent * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QCustomPlot::itemClick(QCPAbstractItem * _t1, QMouseEvent * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QCustomPlot::itemDoubleClick(QCPAbstractItem * _t1, QMouseEvent * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QCustomPlot::axisClick(QCPAxis * _t1, QCPAxis::SelectablePart _t2, QMouseEvent * _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QCustomPlot::axisDoubleClick(QCPAxis * _t1, QCPAxis::SelectablePart _t2, QMouseEvent * _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QCustomPlot::legendClick(QCPLegend * _t1, QCPAbstractLegendItem * _t2, QMouseEvent * _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void QCustomPlot::legendDoubleClick(QCPLegend * _t1, QCPAbstractLegendItem * _t2, QMouseEvent * _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void QCustomPlot::titleClick(QMouseEvent * _t1, QCPPlotTitle * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void QCustomPlot::titleDoubleClick(QMouseEvent * _t1, QCPPlotTitle * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void QCustomPlot::selectionChangedByUser()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void QCustomPlot::beforeReplot()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void QCustomPlot::afterReplot()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQCPGraphENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQCPGraphENDCLASS = QtMocHelpers::stringData(
    "QCPGraph",
    "lineStyle",
    "LineStyle",
    "scatterStyle",
    "QCPScatterStyle",
    "errorType",
    "ErrorType",
    "errorPen",
    "errorBarSize",
    "errorBarSkipSymbol",
    "channelFillGraph",
    "QCPGraph*",
    "lsNone",
    "lsLine",
    "lsStepLeft",
    "lsStepRight",
    "lsStepCenter",
    "lsImpulse",
    "etNone",
    "etKey",
    "etValue",
    "etBoth"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQCPGraphENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       7,   14, // properties
       2,   49, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x0001510b, uint(-1), 0,
       3, 0x80000000 | 4, 0x0001510b, uint(-1), 0,
       5, 0x80000000 | 6, 0x0001510b, uint(-1), 0,
       7, QMetaType::QPen, 0x00015103, uint(-1), 0,
       8, QMetaType::Double, 0x00015103, uint(-1), 0,
       9, QMetaType::Bool, 0x00015103, uint(-1), 0,
      10, 0x80000000 | 11, 0x0001510b, uint(-1), 0,

 // enums: name, alias, flags, count, data
       2,    2, 0x0,    6,   59,
       6,    6, 0x0,    4,   71,

 // enum data: key, value
      12, uint(QCPGraph::lsNone),
      13, uint(QCPGraph::lsLine),
      14, uint(QCPGraph::lsStepLeft),
      15, uint(QCPGraph::lsStepRight),
      16, uint(QCPGraph::lsStepCenter),
      17, uint(QCPGraph::lsImpulse),
      18, uint(QCPGraph::etNone),
      19, uint(QCPGraph::etKey),
      20, uint(QCPGraph::etValue),
      21, uint(QCPGraph::etBoth),

       0        // eod
};

Q_CONSTINIT const QMetaObject QCPGraph::staticMetaObject = { {
    QMetaObject::SuperData::link<QCPAbstractPlottable::staticMetaObject>(),
    qt_meta_stringdata_CLASSQCPGraphENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQCPGraphENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQCPGraphENDCLASS_t,
        // property 'lineStyle'
        QtPrivate::TypeAndForceComplete<LineStyle, std::true_type>,
        // property 'scatterStyle'
        QtPrivate::TypeAndForceComplete<QCPScatterStyle, std::true_type>,
        // property 'errorType'
        QtPrivate::TypeAndForceComplete<ErrorType, std::true_type>,
        // property 'errorPen'
        QtPrivate::TypeAndForceComplete<QPen, std::true_type>,
        // property 'errorBarSize'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'errorBarSkipSymbol'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'channelFillGraph'
        QtPrivate::TypeAndForceComplete<QCPGraph*, std::true_type>,
        // enum 'LineStyle'
        QtPrivate::TypeAndForceComplete<QCPGraph::LineStyle, std::true_type>,
        // enum 'ErrorType'
        QtPrivate::TypeAndForceComplete<QCPGraph::ErrorType, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QCPGraph, std::true_type>
    >,
    nullptr
} };

void QCPGraph::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCPGraph* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QCPGraph *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< LineStyle*>(_v) = _t->lineStyle(); break;
        case 1: *reinterpret_cast< QCPScatterStyle*>(_v) = _t->scatterStyle(); break;
        case 2: *reinterpret_cast< ErrorType*>(_v) = _t->errorType(); break;
        case 3: *reinterpret_cast< QPen*>(_v) = _t->errorPen(); break;
        case 4: *reinterpret_cast< double*>(_v) = _t->errorBarSize(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->errorBarSkipSymbol(); break;
        case 6: *reinterpret_cast< QCPGraph**>(_v) = _t->channelFillGraph(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QCPGraph *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLineStyle(*reinterpret_cast< LineStyle*>(_v)); break;
        case 1: _t->setScatterStyle(*reinterpret_cast< QCPScatterStyle*>(_v)); break;
        case 2: _t->setErrorType(*reinterpret_cast< ErrorType*>(_v)); break;
        case 3: _t->setErrorPen(*reinterpret_cast< QPen*>(_v)); break;
        case 4: _t->setErrorBarSize(*reinterpret_cast< double*>(_v)); break;
        case 5: _t->setErrorBarSkipSymbol(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setChannelFillGraph(*reinterpret_cast< QCPGraph**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
}

const QMetaObject *QCPGraph::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPGraph::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQCPGraphENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QCPAbstractPlottable::qt_metacast(_clname);
}

int QCPGraph::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPAbstractPlottable::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQCPCurveENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQCPCurveENDCLASS = QtMocHelpers::stringData(
    "QCPCurve",
    "scatterStyle",
    "QCPScatterStyle",
    "lineStyle",
    "LineStyle"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQCPCurveENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x0001510b, uint(-1), 0,
       3, 0x80000000 | 4, 0x0001510b, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QCPCurve::staticMetaObject = { {
    QMetaObject::SuperData::link<QCPAbstractPlottable::staticMetaObject>(),
    qt_meta_stringdata_CLASSQCPCurveENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQCPCurveENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQCPCurveENDCLASS_t,
        // property 'scatterStyle'
        QtPrivate::TypeAndForceComplete<QCPScatterStyle, std::true_type>,
        // property 'lineStyle'
        QtPrivate::TypeAndForceComplete<LineStyle, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QCPCurve, std::true_type>
    >,
    nullptr
} };

void QCPCurve::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QCPCurve *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QCPScatterStyle*>(_v) = _t->scatterStyle(); break;
        case 1: *reinterpret_cast< LineStyle*>(_v) = _t->lineStyle(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QCPCurve *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setScatterStyle(*reinterpret_cast< QCPScatterStyle*>(_v)); break;
        case 1: _t->setLineStyle(*reinterpret_cast< LineStyle*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *QCPCurve::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPCurve::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQCPCurveENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QCPAbstractPlottable::qt_metacast(_clname);
}

int QCPCurve::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPAbstractPlottable::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQCPBarsENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQCPBarsENDCLASS = QtMocHelpers::stringData(
    "QCPBars",
    "width",
    "barBelow",
    "QCPBars*",
    "barAbove"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQCPBarsENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Double, 0x00015103, uint(-1), 0,
       2, 0x80000000 | 3, 0x00015009, uint(-1), 0,
       4, 0x80000000 | 3, 0x00015009, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QCPBars::staticMetaObject = { {
    QMetaObject::SuperData::link<QCPAbstractPlottable::staticMetaObject>(),
    qt_meta_stringdata_CLASSQCPBarsENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQCPBarsENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQCPBarsENDCLASS_t,
        // property 'width'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'barBelow'
        QtPrivate::TypeAndForceComplete<QCPBars*, std::true_type>,
        // property 'barAbove'
        QtPrivate::TypeAndForceComplete<QCPBars*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QCPBars, std::true_type>
    >,
    nullptr
} };

void QCPBars::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCPBars* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QCPBars *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->width(); break;
        case 1: *reinterpret_cast< QCPBars**>(_v) = _t->barBelow(); break;
        case 2: *reinterpret_cast< QCPBars**>(_v) = _t->barAbove(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QCPBars *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setWidth(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
}

const QMetaObject *QCPBars::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPBars::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQCPBarsENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QCPAbstractPlottable::qt_metacast(_clname);
}

int QCPBars::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPAbstractPlottable::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQCPStatisticalBoxENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQCPStatisticalBoxENDCLASS = QtMocHelpers::stringData(
    "QCPStatisticalBox",
    "key",
    "minimum",
    "lowerQuartile",
    "median",
    "upperQuartile",
    "maximum",
    "outliers",
    "QList<double>",
    "width",
    "whiskerWidth",
    "whiskerPen",
    "whiskerBarPen",
    "medianPen",
    "outlierStyle",
    "QCPScatterStyle"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQCPStatisticalBoxENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      13,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Double, 0x00015103, uint(-1), 0,
       2, QMetaType::Double, 0x00015103, uint(-1), 0,
       3, QMetaType::Double, 0x00015103, uint(-1), 0,
       4, QMetaType::Double, 0x00015103, uint(-1), 0,
       5, QMetaType::Double, 0x00015103, uint(-1), 0,
       6, QMetaType::Double, 0x00015103, uint(-1), 0,
       7, 0x80000000 | 8, 0x0001510b, uint(-1), 0,
       9, QMetaType::Double, 0x00015103, uint(-1), 0,
      10, QMetaType::Double, 0x00015103, uint(-1), 0,
      11, QMetaType::QPen, 0x00015103, uint(-1), 0,
      12, QMetaType::QPen, 0x00015103, uint(-1), 0,
      13, QMetaType::QPen, 0x00015103, uint(-1), 0,
      14, 0x80000000 | 15, 0x0001510b, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QCPStatisticalBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QCPAbstractPlottable::staticMetaObject>(),
    qt_meta_stringdata_CLASSQCPStatisticalBoxENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQCPStatisticalBoxENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQCPStatisticalBoxENDCLASS_t,
        // property 'key'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'minimum'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'lowerQuartile'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'median'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'upperQuartile'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'maximum'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'outliers'
        QtPrivate::TypeAndForceComplete<QList<double>, std::true_type>,
        // property 'width'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'whiskerWidth'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'whiskerPen'
        QtPrivate::TypeAndForceComplete<QPen, std::true_type>,
        // property 'whiskerBarPen'
        QtPrivate::TypeAndForceComplete<QPen, std::true_type>,
        // property 'medianPen'
        QtPrivate::TypeAndForceComplete<QPen, std::true_type>,
        // property 'outlierStyle'
        QtPrivate::TypeAndForceComplete<QCPScatterStyle, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QCPStatisticalBox, std::true_type>
    >,
    nullptr
} };

void QCPStatisticalBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<double> >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QCPStatisticalBox *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->key(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->minimum(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->lowerQuartile(); break;
        case 3: *reinterpret_cast< double*>(_v) = _t->median(); break;
        case 4: *reinterpret_cast< double*>(_v) = _t->upperQuartile(); break;
        case 5: *reinterpret_cast< double*>(_v) = _t->maximum(); break;
        case 6: *reinterpret_cast< QList<double>*>(_v) = _t->outliers(); break;
        case 7: *reinterpret_cast< double*>(_v) = _t->width(); break;
        case 8: *reinterpret_cast< double*>(_v) = _t->whiskerWidth(); break;
        case 9: *reinterpret_cast< QPen*>(_v) = _t->whiskerPen(); break;
        case 10: *reinterpret_cast< QPen*>(_v) = _t->whiskerBarPen(); break;
        case 11: *reinterpret_cast< QPen*>(_v) = _t->medianPen(); break;
        case 12: *reinterpret_cast< QCPScatterStyle*>(_v) = _t->outlierStyle(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QCPStatisticalBox *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setKey(*reinterpret_cast< double*>(_v)); break;
        case 1: _t->setMinimum(*reinterpret_cast< double*>(_v)); break;
        case 2: _t->setLowerQuartile(*reinterpret_cast< double*>(_v)); break;
        case 3: _t->setMedian(*reinterpret_cast< double*>(_v)); break;
        case 4: _t->setUpperQuartile(*reinterpret_cast< double*>(_v)); break;
        case 5: _t->setMaximum(*reinterpret_cast< double*>(_v)); break;
        case 6: _t->setOutliers(*reinterpret_cast< QList<double>*>(_v)); break;
        case 7: _t->setWidth(*reinterpret_cast< double*>(_v)); break;
        case 8: _t->setWhiskerWidth(*reinterpret_cast< double*>(_v)); break;
        case 9: _t->setWhiskerPen(*reinterpret_cast< QPen*>(_v)); break;
        case 10: _t->setWhiskerBarPen(*reinterpret_cast< QPen*>(_v)); break;
        case 11: _t->setMedianPen(*reinterpret_cast< QPen*>(_v)); break;
        case 12: _t->setOutlierStyle(*reinterpret_cast< QCPScatterStyle*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
}

const QMetaObject *QCPStatisticalBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPStatisticalBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQCPStatisticalBoxENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QCPAbstractPlottable::qt_metacast(_clname);
}

int QCPStatisticalBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPAbstractPlottable::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQCPItemStraightLineENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQCPItemStraightLineENDCLASS = QtMocHelpers::stringData(
    "QCPItemStraightLine",
    "pen",
    "selectedPen"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQCPItemStraightLineENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QPen, 0x00015103, uint(-1), 0,
       2, QMetaType::QPen, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QCPItemStraightLine::staticMetaObject = { {
    QMetaObject::SuperData::link<QCPAbstractItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSQCPItemStraightLineENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQCPItemStraightLineENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQCPItemStraightLineENDCLASS_t,
        // property 'pen'
        QtPrivate::TypeAndForceComplete<QPen, std::true_type>,
        // property 'selectedPen'
        QtPrivate::TypeAndForceComplete<QPen, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QCPItemStraightLine, std::true_type>
    >,
    nullptr
} };

void QCPItemStraightLine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QCPItemStraightLine *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPen*>(_v) = _t->pen(); break;
        case 1: *reinterpret_cast< QPen*>(_v) = _t->selectedPen(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QCPItemStraightLine *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPen(*reinterpret_cast< QPen*>(_v)); break;
        case 1: _t->setSelectedPen(*reinterpret_cast< QPen*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *QCPItemStraightLine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPItemStraightLine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQCPItemStraightLineENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QCPAbstractItem::qt_metacast(_clname);
}

int QCPItemStraightLine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPAbstractItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQCPItemLineENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQCPItemLineENDCLASS = QtMocHelpers::stringData(
    "QCPItemLine",
    "pen",
    "selectedPen",
    "head",
    "QCPLineEnding",
    "tail"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQCPItemLineENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QPen, 0x00015103, uint(-1), 0,
       2, QMetaType::QPen, 0x00015103, uint(-1), 0,
       3, 0x80000000 | 4, 0x0001510b, uint(-1), 0,
       5, 0x80000000 | 4, 0x0001510b, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QCPItemLine::staticMetaObject = { {
    QMetaObject::SuperData::link<QCPAbstractItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSQCPItemLineENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQCPItemLineENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQCPItemLineENDCLASS_t,
        // property 'pen'
        QtPrivate::TypeAndForceComplete<QPen, std::true_type>,
        // property 'selectedPen'
        QtPrivate::TypeAndForceComplete<QPen, std::true_type>,
        // property 'head'
        QtPrivate::TypeAndForceComplete<QCPLineEnding, std::true_type>,
        // property 'tail'
        QtPrivate::TypeAndForceComplete<QCPLineEnding, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QCPItemLine, std::true_type>
    >,
    nullptr
} };

void QCPItemLine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QCPItemLine *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPen*>(_v) = _t->pen(); break;
        case 1: *reinterpret_cast< QPen*>(_v) = _t->selectedPen(); break;
        case 2: *reinterpret_cast< QCPLineEnding*>(_v) = _t->head(); break;
        case 3: *reinterpret_cast< QCPLineEnding*>(_v) = _t->tail(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QCPItemLine *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPen(*reinterpret_cast< QPen*>(_v)); break;
        case 1: _t->setSelectedPen(*reinterpret_cast< QPen*>(_v)); break;
        case 2: _t->setHead(*reinterpret_cast< QCPLineEnding*>(_v)); break;
        case 3: _t->setTail(*reinterpret_cast< QCPLineEnding*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *QCPItemLine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPItemLine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQCPItemLineENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QCPAbstractItem::qt_metacast(_clname);
}

int QCPItemLine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPAbstractItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQCPItemCurveENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQCPItemCurveENDCLASS = QtMocHelpers::stringData(
    "QCPItemCurve",
    "pen",
    "selectedPen",
    "head",
    "QCPLineEnding",
    "tail"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQCPItemCurveENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QPen, 0x00015103, uint(-1), 0,
       2, QMetaType::QPen, 0x00015103, uint(-1), 0,
       3, 0x80000000 | 4, 0x0001510b, uint(-1), 0,
       5, 0x80000000 | 4, 0x0001510b, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QCPItemCurve::staticMetaObject = { {
    QMetaObject::SuperData::link<QCPAbstractItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSQCPItemCurveENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQCPItemCurveENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQCPItemCurveENDCLASS_t,
        // property 'pen'
        QtPrivate::TypeAndForceComplete<QPen, std::true_type>,
        // property 'selectedPen'
        QtPrivate::TypeAndForceComplete<QPen, std::true_type>,
        // property 'head'
        QtPrivate::TypeAndForceComplete<QCPLineEnding, std::true_type>,
        // property 'tail'
        QtPrivate::TypeAndForceComplete<QCPLineEnding, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QCPItemCurve, std::true_type>
    >,
    nullptr
} };

void QCPItemCurve::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QCPItemCurve *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPen*>(_v) = _t->pen(); break;
        case 1: *reinterpret_cast< QPen*>(_v) = _t->selectedPen(); break;
        case 2: *reinterpret_cast< QCPLineEnding*>(_v) = _t->head(); break;
        case 3: *reinterpret_cast< QCPLineEnding*>(_v) = _t->tail(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QCPItemCurve *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPen(*reinterpret_cast< QPen*>(_v)); break;
        case 1: _t->setSelectedPen(*reinterpret_cast< QPen*>(_v)); break;
        case 2: _t->setHead(*reinterpret_cast< QCPLineEnding*>(_v)); break;
        case 3: _t->setTail(*reinterpret_cast< QCPLineEnding*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *QCPItemCurve::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPItemCurve::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQCPItemCurveENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QCPAbstractItem::qt_metacast(_clname);
}

int QCPItemCurve::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPAbstractItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQCPItemRectENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQCPItemRectENDCLASS = QtMocHelpers::stringData(
    "QCPItemRect",
    "pen",
    "selectedPen",
    "brush",
    "selectedBrush"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQCPItemRectENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QPen, 0x00015103, uint(-1), 0,
       2, QMetaType::QPen, 0x00015103, uint(-1), 0,
       3, QMetaType::QBrush, 0x00015103, uint(-1), 0,
       4, QMetaType::QBrush, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QCPItemRect::staticMetaObject = { {
    QMetaObject::SuperData::link<QCPAbstractItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSQCPItemRectENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQCPItemRectENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQCPItemRectENDCLASS_t,
        // property 'pen'
        QtPrivate::TypeAndForceComplete<QPen, std::true_type>,
        // property 'selectedPen'
        QtPrivate::TypeAndForceComplete<QPen, std::true_type>,
        // property 'brush'
        QtPrivate::TypeAndForceComplete<QBrush, std::true_type>,
        // property 'selectedBrush'
        QtPrivate::TypeAndForceComplete<QBrush, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QCPItemRect, std::true_type>
    >,
    nullptr
} };

void QCPItemRect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QCPItemRect *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPen*>(_v) = _t->pen(); break;
        case 1: *reinterpret_cast< QPen*>(_v) = _t->selectedPen(); break;
        case 2: *reinterpret_cast< QBrush*>(_v) = _t->brush(); break;
        case 3: *reinterpret_cast< QBrush*>(_v) = _t->selectedBrush(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QCPItemRect *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPen(*reinterpret_cast< QPen*>(_v)); break;
        case 1: _t->setSelectedPen(*reinterpret_cast< QPen*>(_v)); break;
        case 2: _t->setBrush(*reinterpret_cast< QBrush*>(_v)); break;
        case 3: _t->setSelectedBrush(*reinterpret_cast< QBrush*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *QCPItemRect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPItemRect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQCPItemRectENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QCPAbstractItem::qt_metacast(_clname);
}

int QCPItemRect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPAbstractItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQCPItemTextENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQCPItemTextENDCLASS = QtMocHelpers::stringData(
    "QCPItemText",
    "color",
    "selectedColor",
    "pen",
    "selectedPen",
    "brush",
    "selectedBrush",
    "font",
    "selectedFont",
    "text",
    "positionAlignment",
    "Qt::Alignment",
    "textAlignment",
    "rotation",
    "padding",
    "QMargins"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQCPItemTextENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      13,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QColor, 0x00015103, uint(-1), 0,
       2, QMetaType::QColor, 0x00015103, uint(-1), 0,
       3, QMetaType::QPen, 0x00015103, uint(-1), 0,
       4, QMetaType::QPen, 0x00015103, uint(-1), 0,
       5, QMetaType::QBrush, 0x00015103, uint(-1), 0,
       6, QMetaType::QBrush, 0x00015103, uint(-1), 0,
       7, QMetaType::QFont, 0x00015103, uint(-1), 0,
       8, QMetaType::QFont, 0x00015103, uint(-1), 0,
       9, QMetaType::QString, 0x00015103, uint(-1), 0,
      10, 0x80000000 | 11, 0x0001510b, uint(-1), 0,
      12, 0x80000000 | 11, 0x0001510b, uint(-1), 0,
      13, QMetaType::Double, 0x00015103, uint(-1), 0,
      14, 0x80000000 | 15, 0x0001510b, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QCPItemText::staticMetaObject = { {
    QMetaObject::SuperData::link<QCPAbstractItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSQCPItemTextENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQCPItemTextENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQCPItemTextENDCLASS_t,
        // property 'color'
        QtPrivate::TypeAndForceComplete<QColor, std::true_type>,
        // property 'selectedColor'
        QtPrivate::TypeAndForceComplete<QColor, std::true_type>,
        // property 'pen'
        QtPrivate::TypeAndForceComplete<QPen, std::true_type>,
        // property 'selectedPen'
        QtPrivate::TypeAndForceComplete<QPen, std::true_type>,
        // property 'brush'
        QtPrivate::TypeAndForceComplete<QBrush, std::true_type>,
        // property 'selectedBrush'
        QtPrivate::TypeAndForceComplete<QBrush, std::true_type>,
        // property 'font'
        QtPrivate::TypeAndForceComplete<QFont, std::true_type>,
        // property 'selectedFont'
        QtPrivate::TypeAndForceComplete<QFont, std::true_type>,
        // property 'text'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'positionAlignment'
        QtPrivate::TypeAndForceComplete<Qt::Alignment, std::true_type>,
        // property 'textAlignment'
        QtPrivate::TypeAndForceComplete<Qt::Alignment, std::true_type>,
        // property 'rotation'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'padding'
        QtPrivate::TypeAndForceComplete<QMargins, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QCPItemText, std::true_type>
    >,
    nullptr
} };

void QCPItemText::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QCPItemText *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->color(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->selectedColor(); break;
        case 2: *reinterpret_cast< QPen*>(_v) = _t->pen(); break;
        case 3: *reinterpret_cast< QPen*>(_v) = _t->selectedPen(); break;
        case 4: *reinterpret_cast< QBrush*>(_v) = _t->brush(); break;
        case 5: *reinterpret_cast< QBrush*>(_v) = _t->selectedBrush(); break;
        case 6: *reinterpret_cast< QFont*>(_v) = _t->font(); break;
        case 7: *reinterpret_cast< QFont*>(_v) = _t->selectedFont(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->text(); break;
        case 9: *reinterpret_cast< Qt::Alignment*>(_v) = _t->positionAlignment(); break;
        case 10: *reinterpret_cast< Qt::Alignment*>(_v) = _t->textAlignment(); break;
        case 11: *reinterpret_cast< double*>(_v) = _t->rotation(); break;
        case 12: *reinterpret_cast< QMargins*>(_v) = _t->padding(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QCPItemText *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setSelectedColor(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setPen(*reinterpret_cast< QPen*>(_v)); break;
        case 3: _t->setSelectedPen(*reinterpret_cast< QPen*>(_v)); break;
        case 4: _t->setBrush(*reinterpret_cast< QBrush*>(_v)); break;
        case 5: _t->setSelectedBrush(*reinterpret_cast< QBrush*>(_v)); break;
        case 6: _t->setFont(*reinterpret_cast< QFont*>(_v)); break;
        case 7: _t->setSelectedFont(*reinterpret_cast< QFont*>(_v)); break;
        case 8: _t->setText(*reinterpret_cast< QString*>(_v)); break;
        case 9: _t->setPositionAlignment(*reinterpret_cast< Qt::Alignment*>(_v)); break;
        case 10: _t->setTextAlignment(*reinterpret_cast< Qt::Alignment*>(_v)); break;
        case 11: _t->setRotation(*reinterpret_cast< double*>(_v)); break;
        case 12: _t->setPadding(*reinterpret_cast< QMargins*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *QCPItemText::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPItemText::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQCPItemTextENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QCPAbstractItem::qt_metacast(_clname);
}

int QCPItemText::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPAbstractItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQCPItemEllipseENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQCPItemEllipseENDCLASS = QtMocHelpers::stringData(
    "QCPItemEllipse",
    "pen",
    "selectedPen",
    "brush",
    "selectedBrush"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQCPItemEllipseENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QPen, 0x00015103, uint(-1), 0,
       2, QMetaType::QPen, 0x00015103, uint(-1), 0,
       3, QMetaType::QBrush, 0x00015103, uint(-1), 0,
       4, QMetaType::QBrush, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QCPItemEllipse::staticMetaObject = { {
    QMetaObject::SuperData::link<QCPAbstractItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSQCPItemEllipseENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQCPItemEllipseENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQCPItemEllipseENDCLASS_t,
        // property 'pen'
        QtPrivate::TypeAndForceComplete<QPen, std::true_type>,
        // property 'selectedPen'
        QtPrivate::TypeAndForceComplete<QPen, std::true_type>,
        // property 'brush'
        QtPrivate::TypeAndForceComplete<QBrush, std::true_type>,
        // property 'selectedBrush'
        QtPrivate::TypeAndForceComplete<QBrush, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QCPItemEllipse, std::true_type>
    >,
    nullptr
} };

void QCPItemEllipse::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QCPItemEllipse *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPen*>(_v) = _t->pen(); break;
        case 1: *reinterpret_cast< QPen*>(_v) = _t->selectedPen(); break;
        case 2: *reinterpret_cast< QBrush*>(_v) = _t->brush(); break;
        case 3: *reinterpret_cast< QBrush*>(_v) = _t->selectedBrush(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QCPItemEllipse *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPen(*reinterpret_cast< QPen*>(_v)); break;
        case 1: _t->setSelectedPen(*reinterpret_cast< QPen*>(_v)); break;
        case 2: _t->setBrush(*reinterpret_cast< QBrush*>(_v)); break;
        case 3: _t->setSelectedBrush(*reinterpret_cast< QBrush*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *QCPItemEllipse::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPItemEllipse::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQCPItemEllipseENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QCPAbstractItem::qt_metacast(_clname);
}

int QCPItemEllipse::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPAbstractItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQCPItemPixmapENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQCPItemPixmapENDCLASS = QtMocHelpers::stringData(
    "QCPItemPixmap",
    "pixmap",
    "scaled",
    "aspectRatioMode",
    "Qt::AspectRatioMode",
    "pen",
    "selectedPen"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQCPItemPixmapENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       5,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QPixmap, 0x00015103, uint(-1), 0,
       2, QMetaType::Bool, 0x00015103, uint(-1), 0,
       3, 0x80000000 | 4, 0x00015009, uint(-1), 0,
       5, QMetaType::QPen, 0x00015103, uint(-1), 0,
       6, QMetaType::QPen, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QCPItemPixmap::staticMetaObject = { {
    QMetaObject::SuperData::link<QCPAbstractItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSQCPItemPixmapENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQCPItemPixmapENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQCPItemPixmapENDCLASS_t,
        // property 'pixmap'
        QtPrivate::TypeAndForceComplete<QPixmap, std::true_type>,
        // property 'scaled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'aspectRatioMode'
        QtPrivate::TypeAndForceComplete<Qt::AspectRatioMode, std::true_type>,
        // property 'pen'
        QtPrivate::TypeAndForceComplete<QPen, std::true_type>,
        // property 'selectedPen'
        QtPrivate::TypeAndForceComplete<QPen, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QCPItemPixmap, std::true_type>
    >,
    nullptr
} };

void QCPItemPixmap::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QCPItemPixmap *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPixmap*>(_v) = _t->pixmap(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->scaled(); break;
        case 2: *reinterpret_cast< Qt::AspectRatioMode*>(_v) = _t->aspectRatioMode(); break;
        case 3: *reinterpret_cast< QPen*>(_v) = _t->pen(); break;
        case 4: *reinterpret_cast< QPen*>(_v) = _t->selectedPen(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QCPItemPixmap *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPixmap(*reinterpret_cast< QPixmap*>(_v)); break;
        case 1: _t->setScaled(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setPen(*reinterpret_cast< QPen*>(_v)); break;
        case 4: _t->setSelectedPen(*reinterpret_cast< QPen*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *QCPItemPixmap::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPItemPixmap::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQCPItemPixmapENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QCPAbstractItem::qt_metacast(_clname);
}

int QCPItemPixmap::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPAbstractItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQCPItemTracerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQCPItemTracerENDCLASS = QtMocHelpers::stringData(
    "QCPItemTracer",
    "pen",
    "selectedPen",
    "brush",
    "selectedBrush",
    "size",
    "style",
    "TracerStyle",
    "graph",
    "QCPGraph*",
    "graphKey",
    "interpolating",
    "tsNone",
    "tsPlus",
    "tsCrosshair",
    "tsCircle",
    "tsSquare"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQCPItemTracerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       9,   14, // properties
       1,   59, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QPen, 0x00015103, uint(-1), 0,
       2, QMetaType::QPen, 0x00015103, uint(-1), 0,
       3, QMetaType::QBrush, 0x00015103, uint(-1), 0,
       4, QMetaType::QBrush, 0x00015103, uint(-1), 0,
       5, QMetaType::Double, 0x00015103, uint(-1), 0,
       6, 0x80000000 | 7, 0x0001510b, uint(-1), 0,
       8, 0x80000000 | 9, 0x0001510b, uint(-1), 0,
      10, QMetaType::Double, 0x00015103, uint(-1), 0,
      11, QMetaType::Bool, 0x00015103, uint(-1), 0,

 // enums: name, alias, flags, count, data
       7,    7, 0x0,    5,   64,

 // enum data: key, value
      12, uint(QCPItemTracer::tsNone),
      13, uint(QCPItemTracer::tsPlus),
      14, uint(QCPItemTracer::tsCrosshair),
      15, uint(QCPItemTracer::tsCircle),
      16, uint(QCPItemTracer::tsSquare),

       0        // eod
};

Q_CONSTINIT const QMetaObject QCPItemTracer::staticMetaObject = { {
    QMetaObject::SuperData::link<QCPAbstractItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSQCPItemTracerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQCPItemTracerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQCPItemTracerENDCLASS_t,
        // property 'pen'
        QtPrivate::TypeAndForceComplete<QPen, std::true_type>,
        // property 'selectedPen'
        QtPrivate::TypeAndForceComplete<QPen, std::true_type>,
        // property 'brush'
        QtPrivate::TypeAndForceComplete<QBrush, std::true_type>,
        // property 'selectedBrush'
        QtPrivate::TypeAndForceComplete<QBrush, std::true_type>,
        // property 'size'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'style'
        QtPrivate::TypeAndForceComplete<TracerStyle, std::true_type>,
        // property 'graph'
        QtPrivate::TypeAndForceComplete<QCPGraph*, std::true_type>,
        // property 'graphKey'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'interpolating'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // enum 'TracerStyle'
        QtPrivate::TypeAndForceComplete<QCPItemTracer::TracerStyle, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QCPItemTracer, std::true_type>
    >,
    nullptr
} };

void QCPItemTracer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCPGraph* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QCPItemTracer *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPen*>(_v) = _t->pen(); break;
        case 1: *reinterpret_cast< QPen*>(_v) = _t->selectedPen(); break;
        case 2: *reinterpret_cast< QBrush*>(_v) = _t->brush(); break;
        case 3: *reinterpret_cast< QBrush*>(_v) = _t->selectedBrush(); break;
        case 4: *reinterpret_cast< double*>(_v) = _t->size(); break;
        case 5: *reinterpret_cast< TracerStyle*>(_v) = _t->style(); break;
        case 6: *reinterpret_cast< QCPGraph**>(_v) = _t->graph(); break;
        case 7: *reinterpret_cast< double*>(_v) = _t->graphKey(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->interpolating(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QCPItemTracer *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPen(*reinterpret_cast< QPen*>(_v)); break;
        case 1: _t->setSelectedPen(*reinterpret_cast< QPen*>(_v)); break;
        case 2: _t->setBrush(*reinterpret_cast< QBrush*>(_v)); break;
        case 3: _t->setSelectedBrush(*reinterpret_cast< QBrush*>(_v)); break;
        case 4: _t->setSize(*reinterpret_cast< double*>(_v)); break;
        case 5: _t->setStyle(*reinterpret_cast< TracerStyle*>(_v)); break;
        case 6: _t->setGraph(*reinterpret_cast< QCPGraph**>(_v)); break;
        case 7: _t->setGraphKey(*reinterpret_cast< double*>(_v)); break;
        case 8: _t->setInterpolating(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
}

const QMetaObject *QCPItemTracer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPItemTracer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQCPItemTracerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QCPAbstractItem::qt_metacast(_clname);
}

int QCPItemTracer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPAbstractItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQCPItemBracketENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQCPItemBracketENDCLASS = QtMocHelpers::stringData(
    "QCPItemBracket",
    "pen",
    "selectedPen",
    "length",
    "style",
    "BracketStyle"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQCPItemBracketENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QPen, 0x00015103, uint(-1), 0,
       2, QMetaType::QPen, 0x00015103, uint(-1), 0,
       3, QMetaType::Double, 0x00015103, uint(-1), 0,
       4, 0x80000000 | 5, 0x0001510b, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QCPItemBracket::staticMetaObject = { {
    QMetaObject::SuperData::link<QCPAbstractItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSQCPItemBracketENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQCPItemBracketENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQCPItemBracketENDCLASS_t,
        // property 'pen'
        QtPrivate::TypeAndForceComplete<QPen, std::true_type>,
        // property 'selectedPen'
        QtPrivate::TypeAndForceComplete<QPen, std::true_type>,
        // property 'length'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'style'
        QtPrivate::TypeAndForceComplete<BracketStyle, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QCPItemBracket, std::true_type>
    >,
    nullptr
} };

void QCPItemBracket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QCPItemBracket *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPen*>(_v) = _t->pen(); break;
        case 1: *reinterpret_cast< QPen*>(_v) = _t->selectedPen(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->length(); break;
        case 3: *reinterpret_cast< BracketStyle*>(_v) = _t->style(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QCPItemBracket *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPen(*reinterpret_cast< QPen*>(_v)); break;
        case 1: _t->setSelectedPen(*reinterpret_cast< QPen*>(_v)); break;
        case 2: _t->setLength(*reinterpret_cast< double*>(_v)); break;
        case 3: _t->setStyle(*reinterpret_cast< BracketStyle*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *QCPItemBracket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPItemBracket::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQCPItemBracketENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QCPAbstractItem::qt_metacast(_clname);
}

int QCPItemBracket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPAbstractItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQCPAxisRectENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQCPAxisRectENDCLASS = QtMocHelpers::stringData(
    "QCPAxisRect",
    "background",
    "backgroundScaled",
    "backgroundScaledMode",
    "Qt::AspectRatioMode",
    "rangeDrag",
    "Qt::Orientations",
    "rangeZoom"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQCPAxisRectENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       5,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QPixmap, 0x00015103, uint(-1), 0,
       2, QMetaType::Bool, 0x00015103, uint(-1), 0,
       3, 0x80000000 | 4, 0x0001510b, uint(-1), 0,
       5, 0x80000000 | 6, 0x0001510b, uint(-1), 0,
       7, 0x80000000 | 6, 0x0001510b, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QCPAxisRect::staticMetaObject = { {
    QMetaObject::SuperData::link<QCPLayoutElement::staticMetaObject>(),
    qt_meta_stringdata_CLASSQCPAxisRectENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQCPAxisRectENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQCPAxisRectENDCLASS_t,
        // property 'background'
        QtPrivate::TypeAndForceComplete<QPixmap, std::true_type>,
        // property 'backgroundScaled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'backgroundScaledMode'
        QtPrivate::TypeAndForceComplete<Qt::AspectRatioMode, std::true_type>,
        // property 'rangeDrag'
        QtPrivate::TypeAndForceComplete<Qt::Orientations, std::true_type>,
        // property 'rangeZoom'
        QtPrivate::TypeAndForceComplete<Qt::Orientations, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QCPAxisRect, std::true_type>
    >,
    nullptr
} };

void QCPAxisRect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QCPAxisRect *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPixmap*>(_v) = _t->background(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->backgroundScaled(); break;
        case 2: *reinterpret_cast< Qt::AspectRatioMode*>(_v) = _t->backgroundScaledMode(); break;
        case 3: *reinterpret_cast< Qt::Orientations*>(_v) = _t->rangeDrag(); break;
        case 4: *reinterpret_cast< Qt::Orientations*>(_v) = _t->rangeZoom(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QCPAxisRect *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBackground(*reinterpret_cast< QPixmap*>(_v)); break;
        case 1: _t->setBackgroundScaled(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setBackgroundScaledMode(*reinterpret_cast< Qt::AspectRatioMode*>(_v)); break;
        case 3: _t->setRangeDrag(*reinterpret_cast< Qt::Orientations*>(_v)); break;
        case 4: _t->setRangeZoom(*reinterpret_cast< Qt::Orientations*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *QCPAxisRect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPAxisRect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQCPAxisRectENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QCPLayoutElement::qt_metacast(_clname);
}

int QCPAxisRect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPLayoutElement::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQCPAbstractLegendItemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQCPAbstractLegendItemENDCLASS = QtMocHelpers::stringData(
    "QCPAbstractLegendItem",
    "selectionChanged",
    "",
    "selected",
    "parentLegend",
    "QCPLegend*",
    "font",
    "textColor",
    "selectedFont",
    "selectedTextColor",
    "selectable"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQCPAbstractLegendItemENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       7,   23, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   20,    2, 0x06,    8 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // properties: name, type, flags
       4, 0x80000000 | 5, 0x00015009, uint(-1), 0,
       6, QMetaType::QFont, 0x00015103, uint(-1), 0,
       7, QMetaType::QColor, 0x00015103, uint(-1), 0,
       8, QMetaType::QFont, 0x00015103, uint(-1), 0,
       9, QMetaType::QColor, 0x00015103, uint(-1), 0,
      10, QMetaType::Bool, 0x00015103, uint(-1), 0,
       3, QMetaType::Bool, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QCPAbstractLegendItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QCPLayoutElement::staticMetaObject>(),
    qt_meta_stringdata_CLASSQCPAbstractLegendItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQCPAbstractLegendItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQCPAbstractLegendItemENDCLASS_t,
        // property 'parentLegend'
        QtPrivate::TypeAndForceComplete<QCPLegend*, std::true_type>,
        // property 'font'
        QtPrivate::TypeAndForceComplete<QFont, std::true_type>,
        // property 'textColor'
        QtPrivate::TypeAndForceComplete<QColor, std::true_type>,
        // property 'selectedFont'
        QtPrivate::TypeAndForceComplete<QFont, std::true_type>,
        // property 'selectedTextColor'
        QtPrivate::TypeAndForceComplete<QColor, std::true_type>,
        // property 'selectable'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'selected'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QCPAbstractLegendItem, std::true_type>,
        // method 'selectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void QCPAbstractLegendItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QCPAbstractLegendItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->selectionChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QCPAbstractLegendItem::*)(bool );
            if (_t _q_method = &QCPAbstractLegendItem::selectionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCPLegend* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QCPAbstractLegendItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QCPLegend**>(_v) = _t->parentLegend(); break;
        case 1: *reinterpret_cast< QFont*>(_v) = _t->font(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->textColor(); break;
        case 3: *reinterpret_cast< QFont*>(_v) = _t->selectedFont(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = _t->selectedTextColor(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->selectable(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->selected(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QCPAbstractLegendItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setFont(*reinterpret_cast< QFont*>(_v)); break;
        case 2: _t->setTextColor(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->setSelectedFont(*reinterpret_cast< QFont*>(_v)); break;
        case 4: _t->setSelectedTextColor(*reinterpret_cast< QColor*>(_v)); break;
        case 5: _t->setSelectable(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setSelected(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QCPAbstractLegendItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPAbstractLegendItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQCPAbstractLegendItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QCPLayoutElement::qt_metacast(_clname);
}

int QCPAbstractLegendItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPLayoutElement::qt_metacall(_c, _id, _a);
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
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void QCPAbstractLegendItem::selectionChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQCPPlottableLegendItemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQCPPlottableLegendItemENDCLASS = QtMocHelpers::stringData(
    "QCPPlottableLegendItem"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQCPPlottableLegendItemENDCLASS[] = {

 // content:
      12,       // revision
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

Q_CONSTINIT const QMetaObject QCPPlottableLegendItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QCPAbstractLegendItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSQCPPlottableLegendItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQCPPlottableLegendItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQCPPlottableLegendItemENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QCPPlottableLegendItem, std::true_type>
    >,
    nullptr
} };

void QCPPlottableLegendItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *QCPPlottableLegendItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPPlottableLegendItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQCPPlottableLegendItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QCPAbstractLegendItem::qt_metacast(_clname);
}

int QCPPlottableLegendItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPAbstractLegendItem::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQCPLegendENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQCPLegendENDCLASS = QtMocHelpers::stringData(
    "QCPLegend",
    "selectionChanged",
    "",
    "QCPLegend::SelectableParts",
    "selection",
    "borderPen",
    "brush",
    "font",
    "textColor",
    "iconSize",
    "iconTextPadding",
    "iconBorderPen",
    "selectableParts",
    "SelectableParts",
    "selectedParts",
    "selectedBorderPen",
    "selectedIconBorderPen",
    "selectedBrush",
    "selectedFont",
    "selectedTextColor",
    "SelectablePart",
    "spNone",
    "spLegendBox",
    "spItems"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQCPLegendENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
      14,   23, // properties
       2,   93, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   20,    2, 0x06,   17 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // properties: name, type, flags
       5, QMetaType::QPen, 0x00015103, uint(-1), 0,
       6, QMetaType::QBrush, 0x00015103, uint(-1), 0,
       7, QMetaType::QFont, 0x00015103, uint(-1), 0,
       8, QMetaType::QColor, 0x00015103, uint(-1), 0,
       9, QMetaType::QSize, 0x00015103, uint(-1), 0,
      10, QMetaType::Int, 0x00015103, uint(-1), 0,
      11, QMetaType::QPen, 0x00015103, uint(-1), 0,
      12, 0x80000000 | 13, 0x0001510b, uint(-1), 0,
      14, 0x80000000 | 13, 0x0001510b, uint(-1), 0,
      15, QMetaType::QPen, 0x00015103, uint(-1), 0,
      16, QMetaType::QPen, 0x00015103, uint(-1), 0,
      17, QMetaType::QBrush, 0x00015103, uint(-1), 0,
      18, QMetaType::QFont, 0x00015103, uint(-1), 0,
      19, QMetaType::QColor, 0x00015103, uint(-1), 0,

 // enums: name, alias, flags, count, data
      20,   20, 0x1,    3,  103,
      13,   20, 0x1,    3,  109,

 // enum data: key, value
      21, uint(QCPLegend::spNone),
      22, uint(QCPLegend::spLegendBox),
      23, uint(QCPLegend::spItems),
      21, uint(QCPLegend::spNone),
      22, uint(QCPLegend::spLegendBox),
      23, uint(QCPLegend::spItems),

       0        // eod
};

Q_CONSTINIT const QMetaObject QCPLegend::staticMetaObject = { {
    QMetaObject::SuperData::link<QCPLayoutGrid::staticMetaObject>(),
    qt_meta_stringdata_CLASSQCPLegendENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQCPLegendENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQCPLegendENDCLASS_t,
        // property 'borderPen'
        QtPrivate::TypeAndForceComplete<QPen, std::true_type>,
        // property 'brush'
        QtPrivate::TypeAndForceComplete<QBrush, std::true_type>,
        // property 'font'
        QtPrivate::TypeAndForceComplete<QFont, std::true_type>,
        // property 'textColor'
        QtPrivate::TypeAndForceComplete<QColor, std::true_type>,
        // property 'iconSize'
        QtPrivate::TypeAndForceComplete<QSize, std::true_type>,
        // property 'iconTextPadding'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'iconBorderPen'
        QtPrivate::TypeAndForceComplete<QPen, std::true_type>,
        // property 'selectableParts'
        QtPrivate::TypeAndForceComplete<SelectableParts, std::true_type>,
        // property 'selectedParts'
        QtPrivate::TypeAndForceComplete<SelectableParts, std::true_type>,
        // property 'selectedBorderPen'
        QtPrivate::TypeAndForceComplete<QPen, std::true_type>,
        // property 'selectedIconBorderPen'
        QtPrivate::TypeAndForceComplete<QPen, std::true_type>,
        // property 'selectedBrush'
        QtPrivate::TypeAndForceComplete<QBrush, std::true_type>,
        // property 'selectedFont'
        QtPrivate::TypeAndForceComplete<QFont, std::true_type>,
        // property 'selectedTextColor'
        QtPrivate::TypeAndForceComplete<QColor, std::true_type>,
        // enum 'SelectablePart'
        QtPrivate::TypeAndForceComplete<QCPLegend::SelectablePart, std::true_type>,
        // enum 'SelectableParts'
        QtPrivate::TypeAndForceComplete<QCPLegend::SelectableParts, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QCPLegend, std::true_type>,
        // method 'selectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QCPLegend::SelectableParts, std::false_type>
    >,
    nullptr
} };

void QCPLegend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QCPLegend *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->selectionChanged((*reinterpret_cast< std::add_pointer_t<QCPLegend::SelectableParts>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QCPLegend::*)(QCPLegend::SelectableParts );
            if (_t _q_method = &QCPLegend::selectionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QCPLegend *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPen*>(_v) = _t->borderPen(); break;
        case 1: *reinterpret_cast< QBrush*>(_v) = _t->brush(); break;
        case 2: *reinterpret_cast< QFont*>(_v) = _t->font(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = _t->textColor(); break;
        case 4: *reinterpret_cast< QSize*>(_v) = _t->iconSize(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->iconTextPadding(); break;
        case 6: *reinterpret_cast< QPen*>(_v) = _t->iconBorderPen(); break;
        case 7: *reinterpret_cast<int*>(_v) = QFlag(_t->selectableParts()); break;
        case 8: *reinterpret_cast<int*>(_v) = QFlag(_t->selectedParts()); break;
        case 9: *reinterpret_cast< QPen*>(_v) = _t->selectedBorderPen(); break;
        case 10: *reinterpret_cast< QPen*>(_v) = _t->selectedIconBorderPen(); break;
        case 11: *reinterpret_cast< QBrush*>(_v) = _t->selectedBrush(); break;
        case 12: *reinterpret_cast< QFont*>(_v) = _t->selectedFont(); break;
        case 13: *reinterpret_cast< QColor*>(_v) = _t->selectedTextColor(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QCPLegend *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBorderPen(*reinterpret_cast< QPen*>(_v)); break;
        case 1: _t->setBrush(*reinterpret_cast< QBrush*>(_v)); break;
        case 2: _t->setFont(*reinterpret_cast< QFont*>(_v)); break;
        case 3: _t->setTextColor(*reinterpret_cast< QColor*>(_v)); break;
        case 4: _t->setIconSize(*reinterpret_cast< QSize*>(_v)); break;
        case 5: _t->setIconTextPadding(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->setIconBorderPen(*reinterpret_cast< QPen*>(_v)); break;
        case 7: _t->setSelectableParts(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 8: _t->setSelectedParts(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 9: _t->setSelectedBorderPen(*reinterpret_cast< QPen*>(_v)); break;
        case 10: _t->setSelectedIconBorderPen(*reinterpret_cast< QPen*>(_v)); break;
        case 11: _t->setSelectedBrush(*reinterpret_cast< QBrush*>(_v)); break;
        case 12: _t->setSelectedFont(*reinterpret_cast< QFont*>(_v)); break;
        case 13: _t->setSelectedTextColor(*reinterpret_cast< QColor*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QCPLegend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPLegend::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQCPLegendENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QCPLayoutGrid::qt_metacast(_clname);
}

int QCPLegend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPLayoutGrid::qt_metacall(_c, _id, _a);
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
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void QCPLegend::selectionChanged(QCPLegend::SelectableParts _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQCPPlotTitleENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQCPPlotTitleENDCLASS = QtMocHelpers::stringData(
    "QCPPlotTitle",
    "selectionChanged",
    "",
    "selected",
    "text",
    "font",
    "textColor",
    "selectedFont",
    "selectedTextColor",
    "selectable"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQCPPlotTitleENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       7,   23, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   20,    2, 0x06,    8 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // properties: name, type, flags
       4, QMetaType::QString, 0x00015103, uint(-1), 0,
       5, QMetaType::QFont, 0x00015103, uint(-1), 0,
       6, QMetaType::QColor, 0x00015103, uint(-1), 0,
       7, QMetaType::QFont, 0x00015103, uint(-1), 0,
       8, QMetaType::QColor, 0x00015103, uint(-1), 0,
       9, QMetaType::Bool, 0x00015103, uint(-1), 0,
       3, QMetaType::Bool, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QCPPlotTitle::staticMetaObject = { {
    QMetaObject::SuperData::link<QCPLayoutElement::staticMetaObject>(),
    qt_meta_stringdata_CLASSQCPPlotTitleENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQCPPlotTitleENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQCPPlotTitleENDCLASS_t,
        // property 'text'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'font'
        QtPrivate::TypeAndForceComplete<QFont, std::true_type>,
        // property 'textColor'
        QtPrivate::TypeAndForceComplete<QColor, std::true_type>,
        // property 'selectedFont'
        QtPrivate::TypeAndForceComplete<QFont, std::true_type>,
        // property 'selectedTextColor'
        QtPrivate::TypeAndForceComplete<QColor, std::true_type>,
        // property 'selectable'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'selected'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QCPPlotTitle, std::true_type>,
        // method 'selectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void QCPPlotTitle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QCPPlotTitle *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->selectionChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QCPPlotTitle::*)(bool );
            if (_t _q_method = &QCPPlotTitle::selectionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QCPPlotTitle *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->text(); break;
        case 1: *reinterpret_cast< QFont*>(_v) = _t->font(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->textColor(); break;
        case 3: *reinterpret_cast< QFont*>(_v) = _t->selectedFont(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = _t->selectedTextColor(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->selectable(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->selected(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QCPPlotTitle *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setText(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setFont(*reinterpret_cast< QFont*>(_v)); break;
        case 2: _t->setTextColor(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->setSelectedFont(*reinterpret_cast< QFont*>(_v)); break;
        case 4: _t->setSelectedTextColor(*reinterpret_cast< QColor*>(_v)); break;
        case 5: _t->setSelectable(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setSelected(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QCPPlotTitle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCPPlotTitle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQCPPlotTitleENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QCPLayoutElement::qt_metacast(_clname);
}

int QCPPlotTitle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCPLayoutElement::qt_metacall(_c, _id, _a);
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
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void QCPPlotTitle::selectionChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
