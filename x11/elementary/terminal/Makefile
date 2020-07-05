# $OpenBSD$

COMMENT =	terminal emulator from elementary OS
PKGNAME =	${DISTNAME:S/^/elementary-/}

GH_PROJECT =	terminal
GH_TAGNAME =	5.5.2

# GPLv3+
PERMIT_PACKAGE =	Yes

WANTLIB += c gdk-3 gee-0.8 gio-2.0 glib-2.0 gobject-2.0 granite
WANTLIB += gtk-3 pango-1.0 vte-2.91

MODULES =	devel/dconf

BUILD_DEPENDS =	devel/gettext,-tools \
		devel/gobject-introspection \
		lang/vala

LIB_DEPENDS =	devel/libgee \
		devel/vte3 \
		x11/elementary/granite

RUN_DEPENDS =	devel/desktop-file-utils \
		x11/gtk+3,-guic

CONFIGURE_ENV =	CPPFLAGS="${CPPFLAGS} -I${LOCALBASE}/include" \
		LDFLAGS="${LDFLAGS} -L${LOCALBASE}/lib"

.include <bsd.port.mk>
