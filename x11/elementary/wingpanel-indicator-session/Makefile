# $OpenBSD$

COMMENT =	session indicator for wingpanel

GH_PROJECT =	wingpanel-indicator-session
GH_TAGNAME =	2.2.8

# GPLv3+
PERMIT_PACKAGE =	Yes

WANTLIB += accountsservice gdk-3 gdk_pixbuf-2.0 gee-0.8 gio-2.0
WANTLIB += glib-2.0 gobject-2.0 granite gtk-3 wingpanel-2.0

MODULES =	devel/dconf

BUILD_DEPENDS =	devel/gettext,-tools \
		devel/gobject-introspection \
		lang/vala

LIB_DEPENDS =	sysutils/accountsservice \
		x11/elementary/granite \
		x11/elementary/wingpanel

.include <bsd.port.mk>
