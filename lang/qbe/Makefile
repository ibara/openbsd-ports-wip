# $OpenBSD$

ONLY_FOR_ARCHS =	aarch64 amd64

COMMENT =	quick backend for compilers
DISTNAME =	qbe-0.0.0.20190812
CATEGORIES =	lang

GH_ACCOUNT =	michaelforney
GH_PROJECT =	qbe
GH_COMMIT =	74ed7dfd09b30a03e9e0063e6efbe5c8d408b707

HOMEPAGE =	https://c9x.me/compile/
MAINTAINER =	Your Name <you@example.com>

# MIT
PERMIT_PACKAGE =	Yes

WANTLIB += c

USE_GMAKE =	Yes
MAKE_FLAGS =	V=

FAKE_FLAGS =	DESTDIR=

TEST_TARGET =	check

.include <bsd.port.mk>
