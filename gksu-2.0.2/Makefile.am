DISTCLEANFILES = *~

if ENABLE_ATHENA_EXTENSION
ATHENA_EXTENSION_DIR = athena-gksu
else
ATHENA_EXTENSION_DIR =
endif

SUBDIRS = po man gksu $(ATHENA_EXTENSION_DIR)
DIST_SUBDIRS = $(SUBDIRS)

icondir = $(datadir)/pixmaps
dist_icon_DATA = gksu-icon.png gksu-root-terminal.png

desktopdir = $(datadir)/applications
desktop_in_files = gksu.desktop.in
dist_desktop_DATA = $(desktop_in_files:.desktop.in=.desktop)
@INTLTOOL_DESKTOP_RULE@

scriptsdir = $(datadir)/gksu
dist_scripts_DATA = gksu-migrate-conf.sh

EXTRA_DIST = config.rpath intltool-extract.in intltool-merge.in intltool-update.in
