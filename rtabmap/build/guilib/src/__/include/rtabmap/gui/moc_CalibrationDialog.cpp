/****************************************************************************
** Meta object code from reading C++ file 'CalibrationDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../guilib/include/rtabmap/gui/CalibrationDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CalibrationDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_rtabmap__CalibrationDialog_t {
    QByteArrayData data[21];
    char stringdata0[224];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rtabmap__CalibrationDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rtabmap__CalibrationDialog_t qt_meta_stringdata_rtabmap__CalibrationDialog = {
    {
QT_MOC_LITERAL(0, 0, 26), // "rtabmap::CalibrationDialog"
QT_MOC_LITERAL(1, 27, 13), // "setBoardWidth"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 5), // "width"
QT_MOC_LITERAL(4, 48, 14), // "setBoardHeight"
QT_MOC_LITERAL(5, 63, 6), // "height"
QT_MOC_LITERAL(6, 70, 13), // "setSquareSize"
QT_MOC_LITERAL(7, 84, 4), // "size"
QT_MOC_LITERAL(8, 89, 25), // "setExpectedStereoBaseline"
QT_MOC_LITERAL(9, 115, 6), // "length"
QT_MOC_LITERAL(10, 122, 11), // "setMaxScale"
QT_MOC_LITERAL(11, 134, 5), // "scale"
QT_MOC_LITERAL(12, 140, 13), // "processImages"
QT_MOC_LITERAL(13, 154, 7), // "cv::Mat"
QT_MOC_LITERAL(14, 162, 9), // "imageLeft"
QT_MOC_LITERAL(15, 172, 10), // "imageRight"
QT_MOC_LITERAL(16, 183, 10), // "cameraName"
QT_MOC_LITERAL(17, 194, 9), // "calibrate"
QT_MOC_LITERAL(18, 204, 7), // "restart"
QT_MOC_LITERAL(19, 212, 4), // "save"
QT_MOC_LITERAL(20, 217, 6) // "unlock"

    },
    "rtabmap::CalibrationDialog\0setBoardWidth\0"
    "\0width\0setBoardHeight\0height\0setSquareSize\0"
    "size\0setExpectedStereoBaseline\0length\0"
    "setMaxScale\0scale\0processImages\0cv::Mat\0"
    "imageLeft\0imageRight\0cameraName\0"
    "calibrate\0restart\0save\0unlock"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rtabmap__CalibrationDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x0a /* Public */,
       4,    1,   67,    2, 0x0a /* Public */,
       6,    1,   70,    2, 0x0a /* Public */,
       8,    1,   73,    2, 0x0a /* Public */,
      10,    1,   76,    2, 0x0a /* Public */,
      12,    3,   79,    2, 0x0a /* Public */,
      17,    0,   86,    2, 0x0a /* Public */,
      18,    0,   87,    2, 0x0a /* Public */,
      19,    0,   88,    2, 0x0a /* Public */,
      20,    0,   89,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, 0x80000000 | 13, 0x80000000 | 13, QMetaType::QString,   14,   15,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,

       0        // eod
};

void rtabmap::CalibrationDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CalibrationDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setBoardWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setBoardHeight((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setSquareSize((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->setExpectedStereoBaseline((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->setMaxScale((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->processImages((*reinterpret_cast< const cv::Mat(*)>(_a[1])),(*reinterpret_cast< const cv::Mat(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 6: _t->calibrate(); break;
        case 7: _t->restart(); break;
        case 8: { bool _r = _t->save();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->unlock(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject rtabmap::CalibrationDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_rtabmap__CalibrationDialog.data,
    qt_meta_data_rtabmap__CalibrationDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *rtabmap::CalibrationDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rtabmap::CalibrationDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rtabmap__CalibrationDialog.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "UEventsHandler"))
        return static_cast< UEventsHandler*>(this);
    return QDialog::qt_metacast(_clname);
}

int rtabmap::CalibrationDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
