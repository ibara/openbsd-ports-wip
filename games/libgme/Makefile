# $OpenBSD$

COMMENT =	game music file emulator
DISTNAME =	${GH_PROJECT}-0.5.2pl20110320
CATEGORIES =	games

SHARED_LIBS +=	gme                       0.0 # 0.6.0

# No releases...
GH_ACCOUNT =	mcfiredrill
GH_PROJECT =	libgme
GH_COMMIT =	ae76c88be9beb5132ee0e50c5006bbcb2ccb798e

MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# LGPLv2.1+
PERMIT_PACKAGE =	Yes

WANTLIB += ${COMPILER_LIBCXX} m

COMPILER =	base-clang ports-gcc

MODULES =	devel/cmake

CONFIGURE_ARGS =	-DCMAKE_CXX_FLAGS="${CXXFLAGS} -std=gnu++98"

.include <bsd.port.mk>
