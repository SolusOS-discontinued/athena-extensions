/*
 *  File-Roller
 * 
 *  Copyright (C) 2004 Free Software Foundation, Inc.
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU General Public
 *  License as published by the Free Software Foundation; either
 *  version 2 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Library General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public
 *  License along with this library; if not, write to the Free
 *  Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 *  Author: Paolo Bacchilega <paobac@cvs.gnome.org>
 * 
 */

#ifndef ATHENA_FILEROLLER_H
#define ATHENA_FILEROLLER_H

#include <glib-object.h>

G_BEGIN_DECLS

#define ATHENA_TYPE_FR  (athena_fr_get_type ())
#define ATHENA_FR(o)    (G_TYPE_CHECK_INSTANCE_CAST ((o), ATHENA_TYPE_FR, AthenaFr))
#define ATHENA_IS_FR(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), ATHENA_TYPE_FR))

typedef struct _AthenaFr      AthenaFr;
typedef struct _AthenaFrClass AthenaFrClass;

struct _AthenaFr {
	GObject __parent;
};

struct _AthenaFrClass {
	GObjectClass __parent;
};

GType athena_fr_get_type      (void);
void  athena_fr_register_type (GTypeModule *module);

G_END_DECLS

#endif /* ATHENA_FILEROLLER_H */
