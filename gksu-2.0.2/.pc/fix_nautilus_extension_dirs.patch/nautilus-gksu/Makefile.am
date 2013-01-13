AM_CFLAGS = -g -O2 -Wall
INCLUDES = ${ATHENA_CFLAGS}
AM_CPPFLAGS = -DLOCALEDIR=\"$(datadir)/locale\" -DDATA_DIR=\"$(datadir)\" -DPREFIX=\"$(prefix)\"

athena_extensiondir=$(libdir)/athena/extensions-2.0
athena_extension_LTLIBRARIES = libathena-gksu.la
libathena_gksu_la_SOURCES = libathena-gksu.c
libathena_gksu_la_LDFLAGS = LDFLAGS = -module -avoid-version -no-undefined
libathena_gksu_la_LIBADD  = $(ATHENA_LIBS)
