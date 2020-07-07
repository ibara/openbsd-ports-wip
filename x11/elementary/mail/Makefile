# $OpenBSD$

# XXX: Bus error on startup!

COMMENT =	mail application from elementary OS
DISTNAME =	${GH_PROJECT}-1.0.8pl20200623
PKGNAME =	${DISTNAME:S/^/elementary-/}

# Previous release is too old...
GH_PROJECT =	mail
GH_COMMIT =	b0973b0641a21b28d29f80883f6dec9a96ecb1ae

# GPLv3+
PERMIT_PACKAGE =	Yes

WANTLIB += c camel-1.2 edataserver-1.2 edataserverui-1.2 folks
WANTLIB += gdk-3 gee-0.8 gio-2.0 glib-2.0 gobject-2.0 granite
WANTLIB += gtk-3 intl javascriptcoregtk-4.0 soup-2.4 webkit2gtk-4.0

MODULES =	devel/dconf

BUILD_DEPENDS =	devel/gettext,-tools \
		lang/vala

LIB_DEPENDS =	databases/evolution-data-server \
		devel/libgee \
		net/telepathy/folks \
		www/webkitgtk4 \
		x11/elementary/granite

RUN_DEPENDS =	devel/desktop-file-utils

.include <bsd.port.mk>
