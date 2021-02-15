# $OpenBSD$

ONLY_FOR_ARCHS =	amd64

COMMENT =	simple, self-hosting C compiler
DISTNAME =	lacc-0.0.1pl20210131
CATEGORIES =	lang

GH_ACCOUNT =	larmel
GH_PROJECT =	lacc
GH_COMMIT =	70436fe2e7ba21ce3a8c43decc99f2b4e8cf1c9f

MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# MIT
PERMIT_PACKAGE =	Yes

WANTLIB += c

BUILD_DEPENDS =	sysutils/coreutils

ALL_TARGET =	bin/selfhost/lacc
MAKE_FLAGS =	CFLAGS="${CFLAGS} -DNDEBUG"

.include <bsd.port.mk>
