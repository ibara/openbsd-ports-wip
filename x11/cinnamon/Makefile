# $OpenBSD$

COMMENT =	desktop featuring a traditional layout
CATEGORIES =	x11

GH_ACCOUNT =	linuxmint
GH_PROJECT =	cinnamon
GH_TAGNAME =	4.2.4

MAINTAINER =	Your Name <you@example.com>

# GPLv2+
PERMIT_PACKAGE =	Yes

#WANTLIB += X11 atk-1.0 c cairo gdk-3 gdk_pixbuf-2.0 gio-2.0 girepository-1.0
#WANTLIB += glib-2.0 gobject-2.0 gspell-1 gtk-3 gtksourceview-3.0
#WANTLIB += intl m pango-1.0 peas-1.0 peas-gtk-1.0 xapp xml2

BUILD_DEPENDS =	${MODGNU_AUTOCONF_VERSION} \
		${MODGNU_AUTOMAKE_VERSION} \
		devel/gettext,-tools

CONFIGURE_STYLE =	gnu

AUTOCONF_VERSION =	2.69
AUTOMAKE_VERSION =	1.16

do-gen:
	cd ${WRKSRC} && \
		mkdir -p m4 && \
		glib-gettextize --force --copy && \
		gtkdocize --copy && \
		intltoolize --force --copy --automake && \
		${SETENV} AUTOCONF_VERSION=${AUTOCONF_VERSION} \
		AUTOMAKE_VERSION=${AUTOMAKE_VERSION} \
		autoreconf --verbose --force --install

.include <bsd.port.mk>
