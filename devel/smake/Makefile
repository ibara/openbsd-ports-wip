# $OpenBSD$

V =		2019.08.13
COMMENT =	Sun-derived make utility
DISTNAME =	schily-${V:S/./-/g}
PKGNAME =	smake-${V}
EXTRACT_SUFX =	.tar.bz2
CATEGORIES =	devel

HOMEPAGE =	http://schilytools.sourceforge.net/
MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# CDDL
PERMIT_PACKAGE =	Yes

WANTLIB += c

MASTER_SITES =	${MASTER_SITE_SOURCEFORGE:=schilytools/}

# gcc only!
COMPILER =		ports-gcc
COMPILER_LANGS =	c

# Use gcc-10 because I like using it.
MAKE_ENV =	CC="${LOCALBASE}/gnu/bin/gcc" \
		CXX="${LOCALBASE}/gnu/bin/g++" \
		COPTOPT="${CFLAGS}" \
		CC_COM_DEF="${LOCALBASE}/gnu/bin/gcc" \
		CXX_COM_DEF="${LOCALBASE}/gnu/bin/g++" \
		ENV_CC="${LOCALBASE}/gnu/bin/gcc" \
		ac_cv_func_vfork_works=yes

NO_TEST =	Yes

do-build:
	cd ${WRKSRC}/psmake && ${SETENV} ${MAKE_ENV} sh MAKE-all

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/psmake/smake ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/smake/smake.1 ${PREFIX}/man/man1

.include <bsd.port.mk>
