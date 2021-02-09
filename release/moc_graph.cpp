/****************************************************************************
** Meta object code from reading C++ file 'graph.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../FlashyCard/graph.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'graph.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Graph_t {
    QByteArrayData data[23];
    char stringdata0[334];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Graph_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Graph_t qt_meta_stringdata_Graph = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Graph"
QT_MOC_LITERAL(1, 6, 40), // "on_graphTimeSelecter_currentI..."
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 5), // "index"
QT_MOC_LITERAL(4, 54, 9), // "drawGraph"
QT_MOC_LITERAL(5, 64, 15), // "QList<statData>"
QT_MOC_LITERAL(6, 80, 8), // "dataList"
QT_MOC_LITERAL(7, 89, 12), // "graphPercent"
QT_MOC_LITERAL(8, 102, 10), // "graphCards"
QT_MOC_LITERAL(9, 113, 8), // "graphNew"
QT_MOC_LITERAL(10, 122, 13), // "graphComplete"
QT_MOC_LITERAL(11, 136, 9), // "dataList4"
QT_MOC_LITERAL(12, 146, 13), // "getDimensions"
QT_MOC_LITERAL(13, 160, 10), // "setSpacers"
QT_MOC_LITERAL(14, 171, 5), // "space"
QT_MOC_LITERAL(15, 177, 9), // "graphTime"
QT_MOC_LITERAL(16, 187, 7), // "doGraph"
QT_MOC_LITERAL(17, 195, 14), // "setSpacersTime"
QT_MOC_LITERAL(18, 210, 24), // "on_radioComplete_clicked"
QT_MOC_LITERAL(19, 235, 23), // "on_radioAverage_clicked"
QT_MOC_LITERAL(20, 259, 19), // "on_radioNew_clicked"
QT_MOC_LITERAL(21, 279, 25), // "on_radioTimeSpent_clicked"
QT_MOC_LITERAL(22, 305, 28) // "on_radioCardStrength_clicked"

    },
    "Graph\0on_graphTimeSelecter_currentIndexChanged\0"
    "\0index\0drawGraph\0QList<statData>\0"
    "dataList\0graphPercent\0graphCards\0"
    "graphNew\0graphComplete\0dataList4\0"
    "getDimensions\0setSpacers\0space\0graphTime\0"
    "doGraph\0setSpacersTime\0on_radioComplete_clicked\0"
    "on_radioAverage_clicked\0on_radioNew_clicked\0"
    "on_radioTimeSpent_clicked\0"
    "on_radioCardStrength_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Graph[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x08 /* Private */,
       4,    1,   97,    2, 0x08 /* Private */,
       7,    1,  100,    2, 0x08 /* Private */,
       8,    1,  103,    2, 0x08 /* Private */,
       9,    1,  106,    2, 0x08 /* Private */,
      10,    1,  109,    2, 0x08 /* Private */,
      12,    0,  112,    2, 0x08 /* Private */,
      13,    1,  113,    2, 0x08 /* Private */,
      15,    1,  116,    2, 0x08 /* Private */,
      16,    1,  119,    2, 0x08 /* Private */,
      17,    1,  122,    2, 0x08 /* Private */,
      18,    0,  125,    2, 0x08 /* Private */,
      19,    0,  126,    2, 0x08 /* Private */,
      20,    0,  127,    2, 0x08 /* Private */,
      21,    0,  128,    2, 0x08 /* Private */,
      22,    0,  129,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Graph::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Graph *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_graphTimeSelecter_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->drawGraph((*reinterpret_cast< QList<statData>(*)>(_a[1]))); break;
        case 2: _t->graphPercent((*reinterpret_cast< QList<statData>(*)>(_a[1]))); break;
        case 3: _t->graphCards((*reinterpret_cast< QList<statData>(*)>(_a[1]))); break;
        case 4: _t->graphNew((*reinterpret_cast< QList<statData>(*)>(_a[1]))); break;
        case 5: _t->graphComplete((*reinterpret_cast< QList<statData>(*)>(_a[1]))); break;
        case 6: _t->getDimensions(); break;
        case 7: _t->setSpacers((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->graphTime((*reinterpret_cast< QList<statData>(*)>(_a[1]))); break;
        case 9: _t->doGraph((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->setSpacersTime((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_radioComplete_clicked(); break;
        case 12: _t->on_radioAverage_clicked(); break;
        case 13: _t->on_radioNew_clicked(); break;
        case 14: _t->on_radioTimeSpent_clicked(); break;
        case 15: _t->on_radioCardStrength_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Graph::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Graph.data,
    qt_meta_data_Graph,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Graph::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Graph::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Graph.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Graph::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
