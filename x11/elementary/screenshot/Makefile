# $OpenBSD$

COMMENT =	screenshot app from elementary OS
PKGNAME =	${DISTNAME:S/^/elementary-/}

GH_PROJECT =	screenshot
GH_TAGNAME =	1.7.1

# GPLv3+
PERMIT_PACKAGE =	Yes

WANTLIB += c cairo canberra gdk-3 gdk_pixbuf-2.0 gio-2.0 glib-2.0
WANTLIB += gobject-2.0 granite gtk-3 intl

MODULES =	devel/dconf

BUILD_DEPENDS =	devel/gettext,-tools \
		lang/vala

LIB_DEPENDS =	audio/libcanberra \
		x11/elementary/granite

RUN_DEPENDS =	devel/desktop-file-utils \
		x11/gtk+3,-guic

.include <bsd.port.mk>
