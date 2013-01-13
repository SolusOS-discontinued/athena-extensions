INCLUDES =						\
	-I$(top_srcdir)					\
	-I$(top_builddir)

athena_extensiondir=$(ATHENA_EXTENSION_DIR)

athena_extension_LTLIBRARIES=libathena-dropbox.la

libathena_dropbox_la_CFLAGS = 	                \
	-DDATADIR=\"$(datadir)\"					    \
	-DEMBLEMDIR=\"$(EMBLEM_DIR)\"					\
	-Wall                                           \
	$(WARN_CFLAGS)                                  \
	$(DISABLE_DEPRECATED_CFLAGS)					\
	$(ATHENA_CFLAGS)                              \
	$(GLIB_CFLAGS)

if DEBUG
libathena_dropbox_la_CFLAGS += -DND_DEBUG
else
libathena_dropbox_la_CFLAGS += -DG_DISABLE_ASSERT -DG_DISABLE_CHECKS
endif

libathena_dropbox_la_SOURCES = \
	athena-dropbox.c       \
	athena-dropbox.h       \
	athena-dropbox-hooks.h \
	athena-dropbox-hooks.c \
	dropbox-command-client.h \
	dropbox-command-client.c \
	dropbox-client.c dropbox-client.h \
	g-util.h \
	async-io-coroutine.h \
	dropbox-client-util.c \
	dropbox-client-util.h \
	dropbox.c

libathena_dropbox_la_LDFLAGS = -module -avoid-version
libathena_dropbox_la_LIBADD  = $(ATHENA_LIBS) $(GLIB_LIBS)
