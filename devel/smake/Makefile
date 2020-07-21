# $OpenBSD$

V =		2020.07.18
COMMENT =	Sun-derived make utility
DISTNAME =	schily-${V:S/./-/g}
PKGNAME =	smake-${V}
EXTRACT_SUFX =	.tar.bz2
CATEGORIES =	devel

HOMEPAGE =	http://schilytools.sourceforge.net/
MAINTAINER =	Your Name <you@example.com>

# CDDL
PERMIT_PACKAGE =	Yes

WANTLIB += c

MASTER_SITES =	${MASTER_SITE_SOURCEFORGE:=schilytools/}

MAKE_ENV =	CC="${CC}" \
		CXX="${CXX}" \
		COPTOPT="${CFLAGS}" \
		CC_COM_DEF="${CC}" \
		CXX_COM_DEF="${CXX}" \
		ENV_CC="${CC}" \
		ac_cv_func_vfork_works=yes

NO_TEST =	Yes

do-build:
	cd ${WRKSRC}/psmake && ${SETENV} ${MAKE_ENV} sh MAKE-all

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/psmake/smake ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/smake/smake.1 ${PREFIX}/man/man1

.include <bsd.port.mk>
