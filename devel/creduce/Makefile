# $OpenBSD$

COMMENT =	C and C++ program reducer
PKGNAME =	${GH_TAGNAME}
CATEGORIES =	devel

GH_ACCOUNT =	csmith-project
GH_PROJECT =	creduce
GH_TAGNAME =	${GH_PROJECT}-2.10.0

HOMEPAGE =	https://embed.cs.utah.edu/creduce/
MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# BSD
PERMIT_PACKAGE =	Yes

# This links libLLVM-8.0.so
WANTLIB += ${COMPILER_LIBCXX} c m

MODULES =	devel/cmake

BUILD_DEPENDS =	${RUN_DEPENDS}

# XXX: devel/llvm should really be a LIB_DEPENDS
# Revisit if libLLVM.so is ever versioned
RUN_DEPENDS =	devel/llvm>=8.0,<8.1 \
		devel/p5-Exporter-Lite \
		devel/p5-Getopt-Tabular \
		sysutils/p5-File-Which \
		textproc/p5-Regexp-Common

NO_TEST =	Yes

.include <bsd.port.mk>
