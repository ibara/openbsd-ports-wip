# $OpenBSD$

COMMENT =	simple graphical markdown editor
CATEGORIES =	editors x11

GH_ACCOUNT =	lainsce
GH_PROJECT =	quilter
GH_TAGNAME =	2.2.4

MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# GPLv3+
# Fonts: SIL OFL 1.1
PERMIT_PACKAGE =	Yes

WANTLIB += c gdk-3 gee-0.8 gio-2.0 glib-2.0 gobject-2.0 granite
WANTLIB += gtk-3 gtksourceview-3.0 gtkspell3-3 markdown webkit2gtk-4.0

MODULES =	devel/dconf \
		devel/meson

BUILD_DEPENDS =	devel/gettext,-tools \
		lang/vala

LIB_DEPENDS =	textproc/discount \
		textproc/gtkspell3 \
		www/webkitgtk4 \
		x11/granite \
		x11/gtksourceview3

RUN_DEPENDS =	devel/desktop-file-utils \
		x11/gtk+3,-guic

# meson is unable to find libmarkdown by itself
CONFIGURE_ENV =	LDFLAGS="${LDFLAGS} -L${LOCALBASE}/lib -lmarkdown"

# For those not using fancy desktops
post-install:
	@echo "#!/bin/sh" > ${WRKSRC}/quilter.sh
	@echo "${TRUEPREFIX}/bin/com.github.lainsce.quilter $@" >> ${WRKSRC}/quilter.sh
	${INSTALL_SCRIPT} ${WRKSRC}/quilter.sh ${PREFIX}/bin/quilter

.include <bsd.port.mk>
