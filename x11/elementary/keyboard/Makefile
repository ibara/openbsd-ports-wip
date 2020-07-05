# $OpenBSD$

COMMENT =	on-screen keyboard for touch devices
DISTNAME =	${GH_PROJECT}-0.0.1
PKGNAME =	${DISTNAME:S/^/elementary-/}

# No releases...
GH_PROJECT =	keyboard
GH_COMMIT =	1c3101d4238a53f281ee21ed6aa28da0ed32cdbb

# GPLv3+
PERMIT_PACKAGE =	Yes

WANTLIB += c caribou gdk-3 gio-2.0 glib-2.0 gobject-2.0 gspell-1
WANTLIB += gtk-3

BUILD_DEPENDS =	lang/vala

LIB_DEPENDS =	textproc/gspell \
		x11/gnome/caribou

do-gen:
	sed -i 's,LOCALBASE,${LOCALBASE},g' \
		${WRKSRC}/src/KeyboardGrid.vala

.include <bsd.port.mk>
