/****************************************************************************
 *
 * Copyright (C) 2016 Neutrino International Inc.
 *
 * Author   : Brian Lin ( Vladimir Lin , Vladimir Forest )
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

#include <qtarchivers.h>

QT_BEGIN_NAMESPACE

//////////////////////////////////////////////////////////////////////////////

void RegisterArchivers(void)
{
  qRegisterMetaType<QtFileDetail>("QtFileDetail") ;
}

void AddArchivers(QtTransformers & t)
{
}

//////////////////////////////////////////////////////////////////////////////

QtArchiver:: QtArchiver(void)
{
}

QtArchiver::~QtArchiver(void)
{
}

//////////////////////////////////////////////////////////////////////////////

QT_END_NAMESPACE
