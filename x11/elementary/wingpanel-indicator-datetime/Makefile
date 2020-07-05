# $OpenBSD$

COMMENT =	date and time indicator for wingpanel

GH_PROJECT =	wingpanel-indicator-datetime
GH_TAGNAME =	2.2.5

# GPLv3+
PERMIT_PACKAGE =	Yes

WANTLIB += ecal-2.0 edataserver-1.2 gdk-3 gee-0.8 gio-2.0 glib-2.0
WANTLIB += gobject-2.0 granite gtk-3 ical-glib wingpanel-2.0

MODULES =	devel/dconf

BUILD_DEPENDS =	devel/gettext,-tools \
		devel/gobject-introspection \
		lang/vala

LIB_DEPENDS =	databases/evolution-data-server \
		devel/libgee \
		textproc/libical,-glib \
		x11/elementary/granite \
		x11/elementary/wingpanel

RUN_DEPENDS =	devel/desktop-file-utils \
		x11/gtk+3,-guic

.include <bsd.port.mk>
