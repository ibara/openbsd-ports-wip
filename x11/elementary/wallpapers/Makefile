# $OpenBSD$

COMMENT =	collection of wallpapers from elementary OS
PKGNAME =	${DISTNAME:S/^/elementary-/}

GH_PROJECT =	wallpapers
GH_TAGNAME =	5.5.0

# Varies: CC0, Unsplash License, Pexels License
# Unsplash: https://unsplash.com/license
# Pexels: https://www.pexels.com/license/
# For more info, see:
#   https://github.com/elementary/wallpapers/blob/deb-packaging/debian/copyright
PERMIT_PACKAGE =	Yes

MODULES =	devel/meson

BUILD_DEPENDS =	devel/gettext,-tools

.include <bsd.port.mk>
