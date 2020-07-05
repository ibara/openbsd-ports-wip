# $OpenBSD$

# XXX: Bus error on startup!

COMMENT =	task application from elementary OS
DISTNAME =	${GH_PROJECT}-0.0.1pl20200616
PKGNAME =	${DISTNAME:S/^/elementary-/}

# No releases...
GH_PROJECT =	tasks
GH_COMMIT =	a29abc94b2550cd92095169eb4bd257a535ad98b

# GPLv3+
PERMIT_PACKAGE =	Yes

WANTLIB += c ecal-2.0 edataserver-1.2 gdk-3 gee-0.8 gio-2.0 glib-2.0
WANTLIB += gobject-2.0 granite gtk-3 ical-glib

MODULES =	devel/dconf

BUILD_DEPENDS =	devel/gettext,-tools \
		devel/gobject-introspection \
		lang/vala

LIB_DEPENDS =	databases/evolution-data-server \
		devel/libgee \
		x11/elementary/granite

RUN_DEPENDS =	devel/desktop-file-utils \
		x11/gtk+3,-guic

.include <bsd.port.mk>
