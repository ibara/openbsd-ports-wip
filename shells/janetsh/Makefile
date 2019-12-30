# $OpenBSD$

COMMENT =	shell using Janet language for repl
DISTNAME =	janetsh-0.0.0.20190604
CATEGORIES =	shells

GH_ACCOUNT =	andrewchambers
GH_PROJECT =	janetsh
GH_COMMIT =	60bd806125fe3c9d54935ad8bf91716b2a9c1987

HOMEPAGE =	https://janet-shell.org/
MAINTAINER =	Your Name <you@example.com>

# MIT
PERMIT_PACKAGE =	Yes

BUILD_DEPENDS =	${RUN_DEPENDS}

RUN_DEPENDS =	lang/janet

CONFIGURE_STYLE =	simple
CONFIGURE_ARGS =	--prefix="${LOCALBASE}" \
			--with-readnoise

FAKE_FLAGS =	PREFIX="${PREFIX}"

.include <bsd.port.mk>
