# $OpenBSD$

COMMENT =	night light indicator for wingpanel

GH_PROJECT =	wingpanel-indicator-nightlight
GH_TAGNAME =	2.0.3

# GPLv2+
PERMIT_PACKAGE =	Yes

WANTLIB += gdk-3 gio-2.0 glib-2.0 gobject-2.0 gtk-3 wingpanel-2.0

BUILD_DEPENDS =	devel/gettext,-tools \
		devel/gobject-introspection \
		lang/vala

LIB_DEPENDS =	x11/elementary/wingpanel \
		x11/gtk+3

.include <bsd.port.mk>
