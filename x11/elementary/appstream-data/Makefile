# $OpenBSD$

COMMENT =	AppStream data for Pantheon
DISTNAME =	${GH_PROJECT}-0.0.1pl20200630
PKGNAME =	${DISTNAME:S/^/elementary-/}

# No releases...
GH_PROJECT =	appstream-data
GH_COMMIT =	c26e55e6c6b6e9116fc5ed644a7cd9d30c52e2be

# GPLv3+
PERMIT_PACKAGE =	Yes

MODULES =	devel/dconf

BUILD_DEPENDS =	devel/appstream \
		devel/gettext,-tools \
		devel/gobject-introspection \
		lang/vala \
		shells/bash \
		x11/elementary/icons

.include <bsd.port.mk>
