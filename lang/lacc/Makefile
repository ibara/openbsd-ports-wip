# $OpenBSD$

ONLY_FOR_ARCHS =	amd64

COMMENT =	simple, self-hosting C compiler
DISTNAME =	lacc-0.0.1pl20200105
CATEGORIES =	lang

GH_ACCOUNT =	larmel
GH_PROJECT =	lacc
GH_COMMIT =	59d77424ee268344e5e79dc198f7ca3963296dfc

MAINTAINER =	Your Name <you@example.com>

# MIT
PERMIT_PACKAGE =	Yes

WANTLIB += c

BUILD_DEPENDS =	sysutils/coreutils

ALL_TARGET =	bin/selfhost/lacc
MAKE_FLAGS =	CFLAGS="${CFLAGS} -DNDEBUG"

.include <bsd.port.mk>
