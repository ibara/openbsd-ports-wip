# $OpenBSD$

COMMENT =	cinnamon-menu library
CATEGORIES =	x11

SHARED_LIBS +=	cinnamon-menu-3           0.0 # 0.0

GH_ACCOUNT =	linuxmint
GH_PROJECT =	cinnamon-menus
GH_TAGNAME =	4.2.0

MAINTAINER =	Your Name <you@example.com>

# GPLv2+
PERMIT_PACKAGE =	Yes

WANTLIB += gio-2.0 glib-2.0 gobject-2.0

MODULES =	devel/meson \
		x11/gnome

BUILD_DEPENDS =	devel/gettext,-tools

LIB_DEPENDS =	devel/glib2

.include <bsd.port.mk>
