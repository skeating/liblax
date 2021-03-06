/**
 * @file    liblaxconfig.h
 * @brief   Decides whether to \#include Unix or Windows configuration variables.
 * @author  Ben Bornstein
 * 
 * ------------------------------------------------------------------------ -->
 *
 * Some explanations about this file are warranted.  This file includes
 * one of the following (depending on operating system and compiler):
 * 
 * - <tt>liblaxconfig-unix.h</tt>
 * - <tt>liblaxconfig-win.h</tt>
 * 
 * On Linux, MacOS X, Cygwin, etc., <tt>liblaxconfig-unix.h</tt> and
 * <tt>liblaxpackage.h</tt> are generated from
 * <tt>liblaxconfig-unix.h.in</tt> and <tt>liblaxpackage.h.in</tt>,
 * respectively, by the @c configure script at the top level of the libLAX
 * distribution.
 * 
 * On Windows, we cannot rely on <tt>liblaxconfig-win.h</tt> being
 * generated by @c configure, since most developers will not be able to run
 * @c configure in that environment.  Instead, both
 * <tt>liblaxconfig-win.h</tt> and <tt>liblaxpackage.h</tt> (which see)
 * are stored in the source repository and must be updated by the libLAX
 * developers as necessary.  The file <tt>liblaxconfig-win.h</tt> should
 * rarely, if ever, need to be updated, while <tt>liblaxpackage.h</tt>
 * should require minor updates prior to each libsbml release.  This is
 * admittedly not an ideal and fool-proof arrangement; however, at this
 * time it is the best we have been able to find under the circumstances.
 * 
 * Finally, <tt>liblaxconfig.h</tt>, <tt>liblaxpackage.h</tt>,
 * <tt>liblaxconfig-unix.h</tt>, and (for consistency)
 * <tt>liblaxconfig-win.h</tt> are all installed by @c "make install".
 */

#ifndef LIBLAX_CONFIG_H
#define LIBLAX_CONFIG_H 1

#include <xml/common/liblax-config-common.h>

#include <xml/common/liblax-version.h>


#endif  /* LIBLAX_CONFIG_H */

