#ifndef QT_BUILD_CORE_LIB
#include <QtGlobal>
#if QT_VERSION >= 0x050000
#include <QApplication>
#include <QTreeWidget>
#include <QItemDelegate>
#include <QTableView>
#include <QCalendarWidget>
#include <QSystemTrayIcon>
#include <QMessageBox>
#include <QComboBox>
#include <QPlainTextEdit>
#include <QtXml>
#include <QtNetwork>
#include <QDesktopServices>
#include <QCompleter>
#include <QMenu>
#include <QFileDialog>
#include <QLabel>
#include <QLineEdit>
#include <QCheckBox>
#include <QLayout>
#include <QScrollBar>
#include <QStylePainter>
#include <QFileIconProvider>

#else
#include <QtGui/QtGui>
#include <QtXml/QtXml>
#include <QtNetwork/QtNetwork>
#endif
#else
#include "qglobal.h"
#endif

#ifdef QTD_STATIC
Q_CORE_EXPORT void* qtdbase_new(size_t size);
Q_CORE_EXPORT void qtdbase_delete(void* p);
#endif


