# $OpenBSD$

COMMENT =	network indicator for wingpanel

GH_PROJECT =	wingpanel-indicator-network
GH_TAGNAME =	2.2.4

# LGPLv2.1+
PERMIT_PACKAGE =	Yes

#WANTLIB += gdk-3 gio-2.0 glib-2.0 gobject-2.0 gtk-3 wingpanel-2.0

BUILD_DEPENDS =	devel/gettext,-tools \
		devel/gobject-introspection \
		lang/vala

LIB_DEPENDS =	x11/elementary/wingpanel \
		x11/gtk+3

.include <bsd.port.mk>
