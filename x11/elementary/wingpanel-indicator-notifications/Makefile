# $OpenBSD$

COMMENT =	notifications indicator for wingpanel

GH_PROJECT =	wingpanel-indicator-notifications
GH_TAGNAME =	2.1.4

# LGPLv2.1+
PERMIT_PACKAGE =	Yes

WANTLIB += gee-0.8 gio-2.0 glib-2.0 gobject-2.0 granite gtk-3
WANTLIB += wingpanel-2.0

BUILD_DEPENDS =	devel/gettext,-tools \
		devel/gobject-introspection \
		lang/vala

LIB_DEPENDS =	x11/elementary/granite \
		x11/elementary/wingpanel

.include <bsd.port.mk>
