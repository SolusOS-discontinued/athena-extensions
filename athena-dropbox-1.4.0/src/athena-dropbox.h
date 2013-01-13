/*
 * Copyright 2008 Evenflow, Inc.
 *
 * athena-dropbox.h
 * Header file for athena-dropbox.c
 *
 * This file is part of athena-dropbox.
 *
 * athena-dropbox is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * athena-dropbox is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with athena-dropbox.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef ATHENA_DROPBOX_H
#define ATHENA_DROPBOX_H

#include <glib.h>
#include <glib-object.h>

#include <libathena-extension/athena-info-provider.h>

#include "dropbox-command-client.h"
#include "athena-dropbox-hooks.h"
#include "dropbox-client.h"

G_BEGIN_DECLS

/* Declarations for the dropbox extension object.  This object will be
 * instantiated by athena.  It implements the GInterfaces 
 * exported by libathena. */

#define ATHENA_TYPE_DROPBOX	  (athena_dropbox_get_type ())
#define ATHENA_DROPBOX(o)	  (G_TYPE_CHECK_INSTANCE_CAST ((o), ATHENA_TYPE_DROPBOX, AthenaDropbox))
#define ATHENA_IS_DROPBOX(o)	  (G_TYPE_CHECK_INSTANCE_TYPE ((o), ATHENA_TYPE_DROPBOX))
typedef struct _AthenaDropbox      AthenaDropbox;
typedef struct _AthenaDropboxClass AthenaDropboxClass;

struct _AthenaDropbox {
  GObject parent_slot;
  GHashTable *filename2obj;
  GHashTable *obj2filename;
  GMutex *emblem_paths_mutex;
  GHashTable *emblem_paths;
  DropboxClient dc;
};

struct _AthenaDropboxClass {
	GObjectClass parent_slot;
};

GType athena_dropbox_get_type(void);
void  athena_dropbox_register_type(GTypeModule *module);

extern gboolean dropbox_use_athena_submenu_workaround;
extern gboolean dropbox_use_operation_in_progress_workaround;

G_END_DECLS

#endif
