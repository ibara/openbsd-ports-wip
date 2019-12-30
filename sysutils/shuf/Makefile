# $OpenBSD$

V =		2.9
COMMENT =	utility that outputs a random permutation of its input lines
DISTNAME =	shuf-${V}
CATEGORIES =	sysutils textproc

HOMEPAGE =	https://github.com/ibara/shuf
MAINTAINER =	Your Name <you@example.com>

# ISC
PERMIT_PACKAGE =	Yes

# uses pledge()
WANTLIB += c

MASTER_SITES =	https://github.com/ibara/shuf/releases/download/shuf-${V}/

CONFIGURE_STYLE =	simple

.include <bsd.port.mk>
