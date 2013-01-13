INCLUDES =						\
	-DFR_DATADIR=\"$(datadir)\"			\
	-DGNOMELOCALEDIR=\""$(datadir)/locale"\" 	\
	-I$(top_srcdir)					\
	-I$(top_builddir)				\
	$(DISABLE_DEPRECATED)				\
	$(ATHENA_CFLAGS)				\
	$(FR_CFLAGS)

athena_extensiondir=$(ATHENA_EXTENSION_DIR)

athena_extension_LTLIBRARIES=libathena-fileroller.la

libathena_fileroller_la_SOURCES =     \
	athena-fileroller.c           \
	athena-fileroller.h           \
	fileroller-module.c

libathena_fileroller_la_LDFLAGS = -module -avoid-version -no-undefined
libathena_fileroller_la_LIBADD  = $(ATHENA_LIBS)

-include $(top_srcdir)/git.mk
