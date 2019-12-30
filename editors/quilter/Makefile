# $OpenBSD$

COMMENT =	simple graphical markdown editor
CATEGORIES =	editors x11

GH_ACCOUNT =	lainsce
GH_PROJECT =	quilter
GH_TAGNAME =	1.7.4

MAINTAINER =	Your Name <you@example.com>

# GPLv3+
# Fonts: SIL OFL 1.1
PERMIT_PACKAGE =	Yes

WANTLIB += atk-1.0 c cairo cairo-gobject enchant-2 gdk-3 gdk_pixbuf-2.0
WANTLIB += gee-0.8 gio-2.0 glib-2.0 gobject-2.0 granite gtk-3
WANTLIB += gtksourceview-3.0 gtkspell3-3 intl javascriptcoregtk-4.0
WANTLIB += pango-1.0 pangocairo-1.0 soup-2.4 webkit2gtk-4.0

MODULES =	devel/dconf \
		devel/meson

BUILD_DEPENDS =	devel/gettext-tools \
		lang/vala \
		textproc/discount

LIB_DEPENDS =	textproc/gtkspell3 \
		www/webkitgtk4 \
		x11/granite \
		x11/gtksourceview3

RUN_DEPENDS =	devel/desktop-file-utils \
		x11/gtk+3,-guic

# libmarkdown must be added out-of-band or the compile fails
CONFIGURE_ENV =	LDFLAGS="${LDFLAGS} -L${LOCALBASE}/lib -lmarkdown"

# For those not using fancy desktops
post-install:
	@echo "#!/bin/sh" > ${WRKSRC}/quilter.sh
	@echo "${TRUEPREFIX}/bin/com.github.lainsce.quilter $@" >> ${WRKSRC}/quilter.sh
	${INSTALL_SCRIPT} ${WRKSRC}/quilter.sh ${PREFIX}/bin/quilter

.include <bsd.port.mk>
