# $OpenBSD$

V =		1.7
COMMENT =	embedded Kermit File Transfer Protocol
DISTNAME =	ek${V:S/.//}
PKGNAME =	ek-${V}
EXTRACT_SUFX =	.tar
CATEGORIES =	comms

HOMEPAGE =	http://www.columbia.edu/kermit/ek.html
MAINTAINER =	Your Name <you@example.com>

# BSD
PERMIT_PACKAGE =	Yes

WANTLIB += c

MASTER_SITES =	http://www.columbia.edu/kermit/ftp/ek/tar/

ALL_TARGET =	cc
MAKE_FILE =	makefile
MAKE_FLAGS =	CC="${CC}" CFLAGS="${CFLAGS} -DNODEBUG"

NO_TEST =	Yes

WRKDIST =	${WRKDIR}

# No install routine
do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/ek ${PREFIX}/bin

.include <bsd.port.mk>
