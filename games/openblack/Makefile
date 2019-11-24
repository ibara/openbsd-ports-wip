# $OpenBSD$

COMMENT =	open source reimplementaton of Black & White game
DISTNAME =	openblack-0.0.0.20191107
CATEGORIES =	games x11

HOMEPAGE =	https://www.bwfiles.com/
MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# GPLv3+
PERMIT_PACKAGE =	Yes

WANTLIB += ${COMPILER_LIBCXX} GL GLU SDL2 c m

MASTER_SITES =	https://mirrors.nycbug.org/pub/distfiles/

# C++17
COMPILER =	base-clang ports-gcc

MODULES =	devel/cmake

BUILD_DEPENDS =	devel/cxxopts \
		games/entt

LIB_DEPENDS =	devel/sdl2

RUN_DEPENDS =	devel/desktop-file-utils \
		x11/gtk+3,-guic

NO_TEST =	Yes

pre-configure:
	sed -i 's,$${LOCALBASE},${LOCALBASE},g' \
		${WRKSRC}/src/Game.cpp

.include <bsd.port.mk>
