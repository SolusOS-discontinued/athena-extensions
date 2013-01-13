INCLUDES =						\
	-DG_LOG_DOMAIN=\"Athena-Python\"	        \
	-DDATADIR=\"$(datadir)\"			\
	-DLIBDIR=\"$(libdir)\"				\
	-I$(top_srcdir)					\
	-I$(top_builddir)				\
	$(DISABLE_DEPRECATED_CFLAGS)			\
	$(ATHENA_PYTHON_CFLAGS)			\
	-DPYTHON_VERSION=\"$(PYTHON_VERSION)\"		\
	-DPY_LIB_LOC="\"$(PYTHON_LIB_LOC)\""		\
	$(PYTHON_INCLUDES)

athena_extensiondir=$(ATHENA_EXTENSION_DIR)

athena_extension_LTLIBRARIES = libathena-python.la

libathena_python_la_SOURCES =     	\
	athena-python.c		\
	athena-python.h		\
	athena-python-object.c	\
	athena-python-object.h

libathena_python_la_LDFLAGS = -module -avoid-version
libathena_python_la_LIBADD  = $(ATHENA_PYTHON_LIBS) $(PYTHON_LIBS)
