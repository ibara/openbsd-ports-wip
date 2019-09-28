# $OpenBSD$

COMMENT =	elementary OS Gtk+/GLib extension library
CATEGORIES =	x11

SHARED_LIBS +=	granite                   0.0 # 5.2.3

GH_ACCOUNT =	elementary
GH_PROJECT =	granite
GH_TAGNAME =	5.2.3

MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# LGPLv3+
PERMIT_PACKAGE =	Yes

WANTLIB += atk-1.0 cairo cairo-gobject gdk-3 gdk_pixbuf-2.0 gee-0.8
WANTLIB += gio-2.0 glib-2.0 gobject-2.0 gtk-3 intl m pango-1.0
WANTLIB += pangocairo-1.0

MODULES =	devel/meson

BUILD_DEPENDS =	devel/gettext-tools \
		devel/gobject-introspection \
		lang/vala

LIB_DEPENDS =	devel/libgee \
		x11/gtk+3

RUN_DEPENDS =	x11/gtk+3,-guic

.include <bsd.port.mk>
