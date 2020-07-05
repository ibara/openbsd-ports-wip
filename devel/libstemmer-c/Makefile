# $OpenBSD$

COMMENT =	stemming algorithms in a C library
DISTNAME =	libstemmer-c-2.0.0
CATEGORIES =	devel

SHARED_LIBS +=	stemmer                   0.0 # 2.0.0

HOMEPAGE =	https://snowballstem.org/
MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# BSD
PERMIT_PACKAGE =	Yes

MASTER_SITES =	https://mirrors.nycbug.org/pub/distfiles/

USE_GMAKE =	Yes
MAKE_FLAGS =	LIBstemmer_VERSION="${LIBstemmer_VERSION}" \
		RANLIB="${RANLIB}"

NO_TEST =	Yes

# No install routine.
do-install:
	${INSTALL_DATA} ${WRKSRC}/include/libstemmer.h \
		${PREFIX}/include
	${INSTALL_DATA} ${WRKSRC}/libstemmer.so.${LIBstemmer_VERSION} \
		${PREFIX}/lib
	${INSTALL_DATA} ${WRKSRC}/libstemmer.a \
		${PREFIX}/lib

.include <bsd.port.mk>
