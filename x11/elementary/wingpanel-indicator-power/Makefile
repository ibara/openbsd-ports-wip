# $OpenBSD$

COMMENT =	power indicator for wingpanel

GH_PROJECT =	wingpanel-indicator-power
GH_TAGNAME =	2.1.5

# GPLv3+
PERMIT_PACKAGE =	Yes

WANTLIB += bamf3 gee-0.8 gio-2.0 glib-2.0 gobject-2.0 gtk-3 gtop-2.0
WANTLIB += intl wingpanel-2.0

MODULES =	devel/dconf

BUILD_DEPENDS =	devel/gettext,-tools \
		devel/gobject-introspection \
		lang/vala

LIB_DEPENDS =	devel/bamf \
		devel/libgee \
		x11/elementary/wingpanel

.include <bsd.port.mk>
