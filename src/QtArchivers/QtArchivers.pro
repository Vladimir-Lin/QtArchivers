NAME         = QtArchivers
TARGET       = $${NAME}
QT           = core
QT          -= gui
CONFIG(static,static|shared) {
# static version does not support Qt Script now
QT          -= script
} else {
QT          += script
}
QT          += QtCompression
QT          += QtTAR
QT          += QtRAR
QT          += QtARJ
QT          += QtZIP
QT          += QtLHA
QT          += Qt7z
QT          += QtISO9660
QT          += QtUDF

load(qt_build_config)
load(qt_module)

INCLUDEPATH += $${PWD}/../../include/QtArchivers

HEADERS     += $${PWD}/../../include/QtArchivers/QtArchivers
HEADERS     += $${PWD}/../../include/QtArchivers/qtarchivers.h

SOURCES     += $${PWD}/qtarchivers.cpp

OTHER_FILES += $${PWD}/../../include/$${NAME}/headers.pri

include ($${PWD}/../../doc/Qt/Qt.pri)
