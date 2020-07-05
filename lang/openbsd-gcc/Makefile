# $OpenBSD$

ONLY_FOR_ARCHS =	amd64

COMMENT =	gcc-4.2.1 from OpenBSD base
DISTNAME =	openbsd-gcc-4.2.1
CATEGORIES =	lang

MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# GPLv2+
PERMIT_PACKAGE =	Yes

WANTLIB += c

MASTER_SITES =	https://mirrors.nycbug.org/pub/distfiles/

MAKE_FLAGS =	CC="${CC}" CXX="${CXX}"

CFLAGS +=	-std=gnu89

NO_TEST =	Yes

WRKDIST =	${WRKDIR}/gnu/usr.bin/cc

do-configure:
	cd ${WRKSRC} && ${SETENV} ${MAKE_ENV} ${MAKE_PROGRAM} obj

pre-build:
	cd ${WRKDIR}/gnu/lib/libiberty && \
		${SETENV} ${MAKE_ENV} ${MAKE_PROGRAM} -f Makefile.bsd-wrapper obj
	cd ${WRKDIR}/gnu/lib/libiberty && \
		${SETENV} ${MAKE_ENV} ${MAKE_PROGRAM} -f Makefile.bsd-wrapper

.include <bsd.port.mk>
