# $OpenBSD $

COMMENT =	minimalistic command line pastebin
PKGNAME =	${DISTNAME:L}
CATEGORIES =	net

GH_ACCOUNT =	PurritoBin
GH_PROJECT =	PurritoBin
GH_TAGNAME =	0.2.1

HOMEPAGE =	https://bsd.ac/
MAINTAINER =	Aisha Tammy <openbsd@aisha.cc>

# ISC
PERMIT_PACKAGE =	Yes

# uses pledge()
WANTLIB += ${COMPILER_LIBCXX} c m ssl usockets uv

# C++2a
COMPILER =	base-clang ports-gcc

BUILD_DEPENDS =	www/uwebsockets

LIB_DEPENDS =	devel/usockets

NO_TEST	=	Yes

MAKE_FLAGS =	-DUSE_LIBUV

.include <bsd.port.mk>
