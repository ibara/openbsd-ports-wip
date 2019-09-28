# $OpenBSD$

ONLY_FOR_ARCHS =	aarch64 amd64

COMMENT =	small, fast C11 compiler
DISTNAME =	cproc-0.0.0.20190814
CATEGORIES =	lang

GH_ACCOUNT =	michaelforney
GH_PROJECT =	cproc
GH_COMMIT =	fe7815a6e0ef7f4a90798febaa877e8247fe991c

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
