# $OpenBSD$

COMMENT =	Bluetooth indicator for wingpanel

GH_PROJECT =	wingpanel-indicator-bluetooth
GH_TAGNAME =	2.1.5

# LGPLv2.1+
PERMIT_PACKAGE =	Yes

WANTLIB += gee-0.8 gio-2.0 glib-2.0 gobject-2.0 gtk-3 wingpanel-2.0

MODULES =	devel/dconf

BUILD_DEPENDS =	devel/gettext,-tools \
		devel/gobject-introspection \
		devel/libnotify \
		lang/vala \
		x11/elementary/granite

LIB_DEPENDS =	devel/libgee \
		x11/elementary/wingpanel

RUN_DEPENDS =	x11/elementary/granite

.include <bsd.port.mk>
