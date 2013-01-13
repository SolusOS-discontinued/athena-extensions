/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*- */
/*
 *  Copyright (C) 2004,2005 Johan Dahlin
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA.
 */

#ifndef ATHENA_PYTHON_H
#define ATHENA_PYTHON_H

#include <glib-object.h>
#include <glib/gprintf.h>
#include <Python.h>

#if PY_VERSION_HEX < 0x02050000 && !defined(PY_SSIZE_T_MIN)
typedef int Py_ssize_t;
#define PY_SSIZE_T_MAX INT_MAX
#define PY_SSIZE_T_MIN INT_MIN
#endif

typedef enum {
    ATHENA_PYTHON_DEBUG_MISC = 1 << 0,
} AthenaPythonDebug;

extern AthenaPythonDebug athena_python_debug;

#define debug(x) { if (athena_python_debug & ATHENA_PYTHON_DEBUG_MISC) \
                       g_printf( "athena-python:" x "\n"); }
#define debug_enter()  { if (athena_python_debug & ATHENA_PYTHON_DEBUG_MISC) \
                             g_printf("%s: entered\n", __FUNCTION__); }
#define debug_enter_args(x, y) { if (athena_python_debug & ATHENA_PYTHON_DEBUG_MISC) \
                                     g_printf("%s: entered " x "\n", __FUNCTION__, y); }

PyTypeObject *_PyGtkWidget_Type;
#define PyGtkWidget_Type (*_PyGtkWidget_Type)

PyTypeObject *_PyAthenaColumn_Type;
#define PyAthenaColumn_Type (*_PyAthenaColumn_Type)

PyTypeObject *_PyAthenaColumnProvider_Type;
#define PyAthenaColumnProvider_Type (*_PyAthenaColumnProvider_Type)

PyTypeObject *_PyAthenaInfoProvider_Type;
#define PyAthenaInfoProvider_Type (*_PyAthenaInfoProvider_Type)

PyTypeObject *_PyAthenaLocationWidgetProvider_Type;
#define PyAthenaLocationWidgetProvider_Type (*_PyAthenaLocationWidgetProvider_Type)

PyTypeObject *_PyAthenaMenu_Type;
#define PyAthenaMenu_Type (*_PyAthenaMenu_Type)

PyTypeObject *_PyAthenaMenuItem_Type;
#define PyAthenaMenuItem_Type (*_PyAthenaMenuItem_Type)

PyTypeObject *_PyAthenaMenuProvider_Type;
#define PyAthenaMenuProvider_Type (*_PyAthenaMenuProvider_Type)

PyTypeObject *_PyAthenaPropertyPage_Type;
#define PyAthenaPropertyPage_Type (*_PyAthenaPropertyPage_Type)

PyTypeObject *_PyAthenaPropertyPageProvider_Type;
#define PyAthenaPropertyPageProvider_Type (*_PyAthenaPropertyPageProvider_Type)

PyTypeObject *_PyAthenaOperationHandle_Type;
#define PyAthenaOperationHandle_Type (*_PyAthenaOperationHandle_Type)

#endif /* ATHENA_PYTHON_H */
