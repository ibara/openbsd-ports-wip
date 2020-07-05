# $OpenBSD$

COMMENT =	MirBSD Korn Shell
DISTNAME =	mksh-R59
PKGNAME =	${DISTNAME:S/R//}
EXTRACT_SUFX =	.tgz
CATEGORIES =	shells

HOMEPAGE =	https://www.mirbsd.org/mksh.htm
MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# MirOS license
PERMIT_PACKAGE =	Yes

WANTLIB += c

MASTER_SITES =	https://www.mirbsd.org/MirOS/dist/mir/mksh/

DEBUG_PACKAGES =	${BUILD_PACKAGES}

WRKDIST =	${WRKDIR}/mksh

do-build:
	cd ${WRKSRC} && ${SETENV} ${MAKE_ENV} /bin/sh Build.sh -r

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/mksh ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/mksh.1 ${PREFIX}/man/man1
	${INSTALL_DATA_DIR} ${PREFIX}/share/examples/mksh
	${INSTALL_DATA} ${WRKSRC}/dot.mkshrc ${PREFIX}/share/examples/mksh

do-test:
	cd ${WRKSRC} && ${SETENV} ${TEST_ENV} ./test.sh

.include <bsd.port.mk>
