/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[19];
    char stringdata0[486];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 24), // "on_actionAbrir_triggered"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 26), // "on_actionGuardar_triggered"
QT_MOC_LITERAL(4, 64, 27), // "on_actionDuplicar_triggered"
QT_MOC_LITERAL(5, 92, 29), // "on_actionHistograma_triggered"
QT_MOC_LITERAL(6, 122, 39), // "on_actionHistograma_Acumulado..."
QT_MOC_LITERAL(7, 162, 35), // "on_actionRango_de_valores_tri..."
QT_MOC_LITERAL(8, 198, 25), // "on_actionTama_o_triggered"
QT_MOC_LITERAL(9, 224, 33), // "on_actionCambiar_Brillo_trigg..."
QT_MOC_LITERAL(10, 258, 25), // "on_actionTramos_triggered"
QT_MOC_LITERAL(11, 284, 36), // "on_actionCambiar_Contraste_tr..."
QT_MOC_LITERAL(12, 321, 36), // "on_actionCorrecci_on_Gamma_tr..."
QT_MOC_LITERAL(13, 358, 29), // "on_actionDiferencia_triggered"
QT_MOC_LITERAL(14, 388, 17), // "Mouse_current_pos"
QT_MOC_LITERAL(15, 406, 3), // "uno"
QT_MOC_LITERAL(16, 410, 3), // "dos"
QT_MOC_LITERAL(17, 414, 35), // "on_actionEscala_de_grises_tri..."
QT_MOC_LITERAL(18, 450, 35) // "on_actionEcualizar_imagen_tri..."

    },
    "MainWindow\0on_actionAbrir_triggered\0"
    "\0on_actionGuardar_triggered\0"
    "on_actionDuplicar_triggered\0"
    "on_actionHistograma_triggered\0"
    "on_actionHistograma_Acumulado_triggered\0"
    "on_actionRango_de_valores_triggered\0"
    "on_actionTama_o_triggered\0"
    "on_actionCambiar_Brillo_triggered\0"
    "on_actionTramos_triggered\0"
    "on_actionCambiar_Contraste_triggered\0"
    "on_actionCorrecci_on_Gamma_triggered\0"
    "on_actionDiferencia_triggered\0"
    "Mouse_current_pos\0uno\0dos\0"
    "on_actionEscala_de_grises_triggered\0"
    "on_actionEcualizar_imagen_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x08 /* Private */,
       3,    0,  100,    2, 0x08 /* Private */,
       4,    0,  101,    2, 0x08 /* Private */,
       5,    0,  102,    2, 0x08 /* Private */,
       6,    0,  103,    2, 0x08 /* Private */,
       7,    0,  104,    2, 0x08 /* Private */,
       8,    0,  105,    2, 0x08 /* Private */,
       9,    0,  106,    2, 0x08 /* Private */,
      10,    0,  107,    2, 0x08 /* Private */,
      11,    0,  108,    2, 0x08 /* Private */,
      12,    0,  109,    2, 0x08 /* Private */,
      13,    0,  110,    2, 0x08 /* Private */,
      14,    0,  111,    2, 0x08 /* Private */,
      15,    0,  112,    2, 0x08 /* Private */,
      16,    0,  113,    2, 0x08 /* Private */,
      17,    0,  114,    2, 0x08 /* Private */,
      18,    0,  115,    2, 0x08 /* Private */,

 // slots: parameters
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_actionAbrir_triggered(); break;
        case 1: _t->on_actionGuardar_triggered(); break;
        case 2: _t->on_actionDuplicar_triggered(); break;
        case 3: _t->on_actionHistograma_triggered(); break;
        case 4: _t->on_actionHistograma_Acumulado_triggered(); break;
        case 5: _t->on_actionRango_de_valores_triggered(); break;
        case 6: _t->on_actionTama_o_triggered(); break;
        case 7: _t->on_actionCambiar_Brillo_triggered(); break;
        case 8: _t->on_actionTramos_triggered(); break;
        case 9: _t->on_actionCambiar_Contraste_triggered(); break;
        case 10: _t->on_actionCorrecci_on_Gamma_triggered(); break;
        case 11: _t->on_actionDiferencia_triggered(); break;
        case 12: _t->Mouse_current_pos(); break;
        case 13: _t->uno(); break;
        case 14: _t->dos(); break;
        case 15: _t->on_actionEscala_de_grises_triggered(); break;
        case 16: _t->on_actionEcualizar_imagen_triggered(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
