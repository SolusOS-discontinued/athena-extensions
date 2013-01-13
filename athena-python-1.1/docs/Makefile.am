BUILDDIR = $(top_builddir)/docs

REF_VERSION = $(VERSION)
FULL_VERSION = $(VERSION)

FIXXREF = $(srcdir)/xsl/fixxref.py
HTML_STYLE = $(srcdir)/xsl/ref-html-style.xsl

XML_FILES = 							\
	reference/athena-python-ref.xml			\
	reference/athena-python-overview.xml			\
	reference/athena-python-overview-example.xml			\
	reference/athena-python-overview-methods.xml			\
	reference/athena-python-class-reference.xml			\
	reference/athena-python-provider-reference.xml			\
	reference/athena-python-column.xml   \
	reference/athena-python-column-provider.xml   \
	reference/athena-python-menu.xml  \
	reference/athena-python-menu-item.xml \
	reference/athena-python-menu-provider.xml \
	reference/athena-python-property-page.xml \
	reference/athena-python-property-page-provider.xml \
	reference/athena-python-location-widget-provider.xml \
	reference/athena-python-file-info.xml \
	reference/athena-python-info-provider.xml \
	reference/athena-python-enum-reference.xml \
	reference/athena-python-operation-result.xml

HTMLdir = $(datadir)/gtk-doc/html/athena-python
HTML_FILES =						\
	html/index.html					\
	html/index.sgml					\
	html/athena-python-overview.html \
	html/athena-python-overview-example.html \
	html/athena-python-overview-methods.html \
	html/athena-python-class-reference.html \
	html/athena-python-provider-reference.html \
	html/class-athena-python-column.html \
	html/class-athena-python-column-provider.html \
	html/class-athena-python-menu.html  \
	html/class-athena-python-menu-item.html  \
	html/class-athena-python-menu-provider.html  \
	html/class-athena-python-property-page.html  \
	html/class-athena-python-property-page-provider.html  \
	html/class-athena-python-location-widget-provider.html  \
	html/class-athena-python-file-info.html  \
	html/class-athena-python-info-provider.html  \
	html/athena-python-enum-reference.html \
	html/enum-athena-python-operation-result.html  \
	html/athena-python.devhelp
HTML_DATA = $(HTMLFILES)

XSL_FILES =             \
	xsl/common.xsl      \
	xsl/devhelp.xsl     \
	xsl/html.xsl        \
	xsl/pdf-style.xsl   \
	xsl/pdf.xsl         \
	xsl/style.css
XSL_DATA = $(XSL_FILES) $(FIXXREF)
XSLdir = $(BUILDDIR)/xsl

CSS_FILES = xsl/style.css
CSSdir = $(HTMLdir)
CSS_DATA = $(CSS_FILES)

BUILT_SOURCES = 		\
	reference/builddate.xml	\
	$(HTML_FILES)

CLEANFILES = 			\
	athena-python-ref.*	\
	reference/builddate.xml	\
	$(HTML_FILES)

EXTRA_DIST = 		\
	$(XML_FILES)     \
	$(XSL_FILES)    \
	$(FIXXREF)      \
	$(HTML_STYLE)

REFERENCE_DEPS = 	\
	reference 	\
	$(XML_FILES)    \
	$(XSL_FILES)    \
	$(FIXXREF)

if ENABLE_GTK_DOC

reference/builddate.xml: $(REFERENCE_DEPS)
	$(PYTHON) -c 'import datetime; print datetime.date.today()' > $@

$(HTML_FILES): $(REFERENCE_DEPS)
	xsltproc --nonet --xinclude -o $(BUILDDIR)/html/ \
		 --path $(BUILDDIR)/reference:$(srcdir)/reference \
		 --stringparam gtkdoc.bookname "athena-python" \
		 --stringparam gtkdoc.version ${REF_VERSION} \
		 $(HTML_STYLE) $(srcdir)/reference/athena-python-ref.xml
	$(FIXXREF) -i xsl $(BUILDDIR)/html 
	touch $@

endif
