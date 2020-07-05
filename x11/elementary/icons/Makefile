# $OpenBSD$

COMMENT =	named vector icons from elementary OS
PKGNAME =	${DISTNAME:S/^/elementary-/}

GH_PROJECT =	icons
GH_TAGNAME =	5.3.1

# GPLv3+
PERMIT_PACKAGE =	Yes

BUILD_DEPENDS =	devel/gettext,-tools \
		devel/gobject-introspection \
		lang/vala \
		x11/gnome/librsvg \
		x11/xcursorgen

RUN_DEPENDS =	x11/gtk+3,-guic

.include <bsd.port.mk>
