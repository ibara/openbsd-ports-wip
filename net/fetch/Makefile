# $OpenBSD$

COMMENT =	portable fetch utility from FreeBSD
DISTNAME =	fetch-12.0
CATEGORIES =	net

HOMEPAGE =	https://www.freebsd.org/
MAINTAINER =	Your Name <you@example.com>

# BSD
PERMIT_PACKAGE =	Yes

WANTLIB += c fetch

MASTER_SITES =	https://mirrors.nycbug.org/pub/distfiles/

LIB_DEPENDS =	net/libfetch

FAKE_FLAGS =	BINDIR="${PREFIX}/bin" MANDIR="${PREFIX}/man/man"

NO_TEST =	Yes

.include <bsd.port.mk>
