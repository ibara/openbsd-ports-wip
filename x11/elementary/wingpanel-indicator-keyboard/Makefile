# $OpenBSD$

COMMENT =	keyboard indicator for wingpanel

GH_PROJECT =	wingpanel-indicator-keyboard
GH_TAGNAME =	2.2.1

# GPLv3+
PERMIT_PACKAGE =	Yes

WANTLIB += gdk-3 gio-2.0 glib-2.0 gobject-2.0 gtk-3 wingpanel-2.0
WANTLIB += xml2

BUILD_DEPENDS =	devel/gettext,-tools \
		devel/gobject-introspection \
		lang/vala \
		x11/elementary/granite

LIB_DEPENDS =	textproc/libxml \
		x11/elementary/wingpanel \
		x11/gtk+3

RUN_DEPENDS =	x11/elementary/granite

.include <bsd.port.mk>
