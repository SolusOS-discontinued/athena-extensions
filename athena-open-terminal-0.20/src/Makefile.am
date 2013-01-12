INCLUDES =						\
	-DG_LOG_DOMAIN=\"Athena-Open-Terminal\"	\
	-DDATADIR=\"$(datadir)\"			\
	-DGNOMELOCALEDIR=\""$(datadir)/locale"\" 	\
	-I$(top_srcdir)					\
	-I$(top_builddir)				\
	$(WARN_CFLAGS)                                  \
	-Werror                                         \
	$(DISABLE_DEPRECATED)				\
	$(ATHENA_CFLAGS)				\
	$(GCONF_CFLAGS)					\
	$(GNOMEDESKTOP_CFLAGS)

athena_extensiondir=$(ATHENA_EXTENSION_DIR)

athena_extension_LTLIBRARIES=libathena-open-terminal.la

libathena_open_terminal_la_SOURCES = \
	eel-gnome-extensions.c       \
	eel-gnome-extensions.h       \
	athena-open-terminal.h       \
	athena-open-terminal.c       \
	athena-open-terminal.h       \
	open-terminal.c

libathena_open_terminal_la_LDFLAGS = -module -avoid-version
libathena_open_terminal_la_LIBADD  = $(ATHENA_LIBS) $(GCONF_LIBS) $(GNOMEDESKTOP_LIBS)
