/****************************************************************************
 *
 * Copyright (C) 2001~2016 Neutrino International Inc.
 *
 * Author   : Brian Lin ( Foxman , Vladimir Lin , Vladimir Forest )
 * E-mail   : lin.foxman@gmail.com
 *          : lin.vladimir@gmail.com
 *          : wolfram_lin@yahoo.com
 *          : wolfram_lin@sina.com
 *          : wolfram_lin@163.com
 * Skype    : wolfram_lin
 * WeChat   : 153-0271-7160
 * WhatsApp : 153-0271-7160
 * QQ       : lin.vladimir@gmail.com (2107437784)
 * URL      : http://qtarchivers.sourceforge.net/
 *
 * QtArchivers acts as an interface between Qt and archivers library.
 *
 * Copyright 2001 ~ 2016
 *
 ****************************************************************************/

#ifndef QT_ARCHIVERS_H
#define QT_ARCHIVERS_H

#include <QtCore>
#ifndef QT_STATIC
#include <QtScript>
#endif
#include <QtCompression>
#include <QtTAR>
#include <QtRAR>
#include <QtARJ>
#include <QtZIP>
#include <Qt7z>
#include <QtISO9660>
#include <QtUDF>

QT_BEGIN_NAMESPACE

#ifndef QT_STATIC
#    if defined(QT_BUILD_QTARCHIVERS_LIB)
#      define Q_ARCHIVERS_EXPORT Q_DECL_EXPORT
#    else
#      define Q_ARCHIVERS_EXPORT Q_DECL_IMPORT
#    endif
#else
#      define Q_ARCHIVERS_EXPORT
#endif

#define QT_ARCHIVERS_LIB 1

class Q_ARCHIVERS_EXPORT QtArchiver ;

namespace Archivers
{



}

class Q_ARCHIVERS_EXPORT QtArchiver
{
  public:

    QMap<QString,QVariant> Information ;

    explicit     QtArchiver    (void) ;
    virtual     ~QtArchiver    (void) ;

    virtual int  type          (void) const = 0 ;
    virtual void clean         (void)       = 0 ;

    virtual int  suffixes      (QStringList & names) = 0;
    virtual bool containSuffix (QString filename) = 0 ;

    virtual int  MimeTypes     (QList<int>  & mimetypes) = 0 ;
    virtual bool containMime   (int mime) = 0 ;

    virtual bool isSequential  (void) const = 0 ;
    virtual int  BlockSize     (void) const = 0 ;

    virtual bool DecodeHeader  (QByteArray & block) = 0 ;
    virtual bool isPadding     (QByteArray & block) = 0 ;
    virtual int  FileBlock     (QtFileDetail & file) = 0 ;

  protected:

  private:

};



namespace Archivers
{



}

Q_ARCHIVERS_EXPORT void RegisterArchivers (void) ;
Q_ARCHIVERS_EXPORT void AddArchivers      (QtTransformers & transformers) ;

Q_DECLARE_INTERFACE(QtArchiver,"com.neutrino.data.qtarchiver")

QT_END_NAMESPACE

#endif
