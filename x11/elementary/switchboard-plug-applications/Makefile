# $OpenBSD$

COMMENT =	default application setter for elementary OS

GH_PROJECT =	switchboard-plug-applications
GH_TAGNAME =	2.1.7

# GPLv3+
PERMIT_PACKAGE =	Yes

WANTLIB += gdk_pixbuf-2.0 gee-0.8 gio-2.0 glib-2.0 gobject-2.0
WANTLIB += granite gtk-3 switchboard-2.0

BUILD_DEPENDS =	devel/gettext,-tools \
		devel/gobject-introspection \
		lang/vala

LIB_DEPENDS =	x11/elementary/switchboard

.include <bsd.port.mk>
