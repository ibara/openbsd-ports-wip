# $OpenBSD$

COMMENT =	build scripts for bgfx
DISTNAME =	bgfx.cmake-0.0.0.20200512
PKGNAME =	${DISTNAME:S/bgfx./bgfx-/}
CATEGORIES =	games x11

HOMEPAGE =	https://github.com/openblack/bgfx.cmake
MAINTAINER =	Your Name <you@example.com>

# Public Domain
PERMIT_PACKAGE =	Yes

WANTLIB += ${COMPILER_LIBCXX} GL GLU ICE SM X11 Xext c m

# Upstream makes no releases and depends on submodules
MASTER_SITES =	https://mirrors.nycbug.org/pub/distfiles/

# C++17
COMPILER =	base-clang ports-gcc

MODULES =	devel/cmake

CONFIGURE_ARGS =	-DCMAKE_CXX_FLAGS="${CXXFLAGS} -I${X11BASE}/include" \
			-DCMAKE_EXE_LINKER_FLAGS="${LDFLAGS} -L${X11BASE}/lib"

NO_TEST =	Yes

post-extract:
	perl -pi -e 's,\r\n,\n,g' ${WRKSRC}/cmake/bx.cmake

.include <bsd.port.mk>
