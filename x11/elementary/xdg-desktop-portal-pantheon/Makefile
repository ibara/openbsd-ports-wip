# $OpenBSD$

COMMENT =	DBus interfaces to implement portals
DISTNAME =	${GH_PROJECT}-0.0.1pl20191023

# No releases...
GH_PROJECT =	xdg-desktop-portal-pantheon
GH_COMMIT =	1d03aae5f58becafb0db4c722456ab43aa36e22d

# GPLv3+
PERMIT_PACKAGE =	Yes

WANTLIB += c gio-2.0 glib-2.0 gobject-2.0 gtk-3

BUILD_DEPENDS =	devel/gettext,-tools \
		devel/gobject-introspection \
		lang/vala

LIB_DEPENDS =	x11/gtk+3

CONFIGURE_ARGS =	-Dsystemduserunitdir="${PREFIX}/share/xdg-desktop-portal-pantheon"

.include <bsd.port.mk>
