ACLOCAL_AMFLAGS = -I m4

SUBDIRS = src examples

if ENABLE_GTK_DOC
SUBDIRS += docs
endif

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = athena-python.pc

EXTRA_DIST = athena-python.pc.in

DISTCHECK_CONFIGURE_FLAGS=--enable-gtk-doc
