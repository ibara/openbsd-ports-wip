# $OpenBSD$

V =		2019.09.18
COMMENT =	small, embeddable Javascript engine in C
DISTNAME =	quickjs-${V:S/./-/g}
PKGNAME =	quickjs-${V}
EXTRACT_SUFX =	.tar.xz
CATEGORIES =	lang

HOMEPAGE =	https://bellard.org/quickjs/
MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# MIT
PERMIT_PACKAGE =	Yes

WANTLIB += c m

MASTER_SITES =	https://bellard.org/quickjs/

# Requires stdatomic
COMPILER =	base-clang ports-gcc

USE_GMAKE =	Yes
MAKE_FLAGS =	CC="${CC}"

.include <bsd.port.mk>
