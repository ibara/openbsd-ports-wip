# $OpenBSD$

ONLY_FOR_ARCHS =	amd64

COMMENT =	simple, self-hosting C compiler
DISTNAME =	lacc-0.0.0.20190815
CATEGORIES =	lang

GH_ACCOUNT =	larmel
GH_PROJECT =	lacc
GH_COMMIT =	03a9b6aeed187924bcb1febed7b6f87152cc2a5f

MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# MIT
PERMIT_PACKAGE =	Yes

WANTLIB += c

BUILD_DEPENDS =	sysutils/coreutils

ALL_TARGET =	bin/selfhost/lacc
MAKE_FLAGS =	CFLAGS="${CFLAGS} -DNDEBUG"

.include <bsd.port.mk>
