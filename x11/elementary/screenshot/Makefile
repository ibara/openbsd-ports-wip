# $OpenBSD$

COMMENT =	screenshot app from elementary OS
DISTNAME =	${GH_PROJECT}-1.7.1pl20200705
PKGNAME =	${DISTNAME:S/^/elementary-/}

# Latest release is too old...
GH_PROJECT =	screenshot
GH_COMMIT =	15acfa4ec3a683f29e02a90367ae4de595070a23

# GPLv3+
PERMIT_PACKAGE =	Yes

WANTLIB += c canberra gdk-3 gdk_pixbuf-2.0 gio-2.0 glib-2.0 gobject-2.0
WANTLIB += granite gtk-3

MODULES =	devel/dconf

BUILD_DEPENDS =	devel/gettext,-tools \
		lang/vala

LIB_DEPENDS =	audio/libcanberra \
		x11/elementary/granite

RUN_DEPENDS =	devel/desktop-file-utils \
		x11/gtk+3,-guic

.include <bsd.port.mk>
