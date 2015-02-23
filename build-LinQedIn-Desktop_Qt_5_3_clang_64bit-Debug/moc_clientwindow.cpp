/****************************************************************************
** Meta object code from reading C++ file 'clientwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../LinQedIn/clientwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'clientwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ClientWindow_t {
    QByteArrayData data[16];
    char stringdata[518];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ClientWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ClientWindow_t qt_meta_stringdata_ClientWindow = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 35),
QT_MOC_LITERAL(2, 49, 0),
QT_MOC_LITERAL(3, 50, 16),
QT_MOC_LITERAL(4, 67, 36),
QT_MOC_LITERAL(5, 104, 39),
QT_MOC_LITERAL(6, 144, 38),
QT_MOC_LITERAL(7, 183, 39),
QT_MOC_LITERAL(8, 223, 38),
QT_MOC_LITERAL(9, 262, 39),
QT_MOC_LITERAL(10, 302, 38),
QT_MOC_LITERAL(11, 341, 35),
QT_MOC_LITERAL(12, 377, 34),
QT_MOC_LITERAL(13, 412, 36),
QT_MOC_LITERAL(14, 449, 37),
QT_MOC_LITERAL(15, 487, 30)
    },
    "ClientWindow\0on_listWidgetContatti_doubleClicked\0"
    "\0QListWidgetItem*\0"
    "on_pushButtonEliminaContatto_clicked\0"
    "on_pushButtonAggiungiFormazione_clicked\0"
    "on_pushButtonEliminaFormazione_clicked\0"
    "on_pushButtonAggiungiEsperienze_clicked\0"
    "on_pushButtonEliminaEsperienze_clicked\0"
    "on_pushButtonAggiungiCompetenze_clicked\0"
    "on_pushButtonEliminaCompetenze_clicked\0"
    "on_pushButtonAggiungiLingue_clicked\0"
    "on_pushButtonEliminaLingue_clicked\0"
    "on_pushButtonRicercaContatti_clicked\0"
    "on_pushButtonAggiungiContatto_clicked\0"
    "on_pushButtonEsciSalva_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClientWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x08 /* Private */,
       4,    0,   82,    2, 0x08 /* Private */,
       5,    0,   83,    2, 0x08 /* Private */,
       6,    0,   84,    2, 0x08 /* Private */,
       7,    0,   85,    2, 0x08 /* Private */,
       8,    0,   86,    2, 0x08 /* Private */,
       9,    0,   87,    2, 0x08 /* Private */,
      10,    0,   88,    2, 0x08 /* Private */,
      11,    0,   89,    2, 0x08 /* Private */,
      12,    0,   90,    2, 0x08 /* Private */,
      13,    0,   91,    2, 0x08 /* Private */,
      14,    0,   92,    2, 0x08 /* Private */,
      15,    0,   93,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ClientWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ClientWindow *_t = static_cast<ClientWindow *>(_o);
        switch (_id) {
        case 0: _t->on_listWidgetContatti_doubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 1: _t->on_pushButtonEliminaContatto_clicked(); break;
        case 2: _t->on_pushButtonAggiungiFormazione_clicked(); break;
        case 3: _t->on_pushButtonEliminaFormazione_clicked(); break;
        case 4: _t->on_pushButtonAggiungiEsperienze_clicked(); break;
        case 5: _t->on_pushButtonEliminaEsperienze_clicked(); break;
        case 6: _t->on_pushButtonAggiungiCompetenze_clicked(); break;
        case 7: _t->on_pushButtonEliminaCompetenze_clicked(); break;
        case 8: _t->on_pushButtonAggiungiLingue_clicked(); break;
        case 9: _t->on_pushButtonEliminaLingue_clicked(); break;
        case 10: _t->on_pushButtonRicercaContatti_clicked(); break;
        case 11: _t->on_pushButtonAggiungiContatto_clicked(); break;
        case 12: _t->on_pushButtonEsciSalva_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject ClientWindow::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ClientWindow.data,
      qt_meta_data_ClientWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *ClientWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClientWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ClientWindow.stringdata))
        return static_cast<void*>(const_cast< ClientWindow*>(this));
    return QDialog::qt_metacast(_clname);
}

int ClientWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
