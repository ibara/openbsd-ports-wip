# $OpenBSD$

COMMENT =	about setter for elementary OS

GH_PROJECT =	switchboard-plug-about
GH_TAGNAME =	2.6.3

# GPLv3+
PERMIT_PACKAGE =	Yes

WANTLIB += gee-0.8 gio-2.0 glib-2.0 gobject-2.0 granite gtk-3
WANTLIB += switchboard-2.0

BUILD_DEPENDS =	devel/gettext,-tools \
		devel/gobject-introspection \
		lang/vala

LIB_DEPENDS =	x11/elementary/switchboard

.include <bsd.port.mk>
