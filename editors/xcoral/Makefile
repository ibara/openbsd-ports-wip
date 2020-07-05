# $OpenBSD$

V =		3.48
P =		8
COMMENT =	multiwindow mouse-based text editor for X
DISTNAME =	xcoral-${V}-${P}
PKGNAME =	xcoral-${V}.${P}
CATEGORIES =	editors x11

HOMEPAGE =	http://xcoral.free.fr/
MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# GPLv2+
PERMIT_PACKAGE =	Yes

WANTLIB += X11 c

MASTER_SITES =	http://xcoral.free.fr/

CONFIGURE_STYLE =	gnu

USE_GMAKE =	Yes

FAKE_FLAGS =	prefix="${DESTDIR}${PREFIX}"

NO_TEST =	Yes

# XXX: Why was this left behind?
post-extract:
	rm -f ${WRKSRC}/config.{cache,log,status}

.include <bsd.port.mk>
