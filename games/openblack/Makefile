# $OpenBSD$

COMMENT =	open source reimplementaton of Black & White game
DISTNAME =	openblack-0.0.0.20200709
CATEGORIES =	games x11

HOMEPAGE =	https://www.bwfiles.com/
MAINTAINER =	Your Name <you@example.com>

# GPLv3+
PERMIT_PACKAGE =	Yes

WANTLIB += ${COMPILER_LIBCXX} GL GLU SDL2 c m

# Upstream makes no releases and depends on submodules
MASTER_SITES =	https://mirrors.nycbug.org/pub/distfiles/

# C++17
COMPILER =	base-clang ports-gcc

MODULES =	devel/cmake

BUILD_DEPENDS =	devel/cxxopts \
		games/bgfx-cmake \
		games/entt

LIB_DEPENDS =	devel/sdl2

RUN_DEPENDS =	devel/desktop-file-utils \
		x11/gtk+3,-guic

CONFIGURE_ARGS =	-DCMAKE_C_FLAGS="${CFLAGS} -I${X11BASE}/include" \
			-DCMAKE_CXX_FLAGS="${CXXFLAGS} -I${X11BASE}/include" \
			-DCMAKE_EXE_LINKER_FLAGS="${LDFLAGS} -L${X11BASE}/lib" \
			-DCMAKE_C_COMPILER="/usr/local/gnu/bin/gcc" \
			-DCMAKE_CXX_COMPILER="/usr/local/gnu/bin/g++"

NO_TEST =	Yes

.include <bsd.port.mk>
