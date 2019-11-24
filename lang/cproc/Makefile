# $OpenBSD$

ONLY_FOR_ARCHS =	aarch64 amd64

COMMENT =	small, fast C11 compiler
DISTNAME =	cproc-0.0.0.20191120
CATEGORIES =	lang

GH_ACCOUNT =	michaelforney
GH_PROJECT =	cproc
GH_COMMIT =	f12ae432305a0cdef1bf46ce1617637eaaf72cbc

HOMEPAGE =	https://git.sr.ht/~mcf/cproc
MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# ISC
PERMIT_PACKAGE =	Yes

WANTLIB += c

CONFIGURE_STYLE =	simple
CONFIGURE_ENV =		CFLAGS="${CFLAGS} -std=c11"

ALL_TARGET =	bootstrap

RUN_DEPENDS =	lang/qbe

TEST_TARGET =	check

# No install routine
do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/stage3/cproc{,-qbe} ${PREFIX}/bin

.include <bsd.port.mk>
