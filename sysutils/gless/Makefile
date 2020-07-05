# $OpenBSD$

COMMENT =	free, open source file pager
DISTNAME =	less-551
PKGNAME =	g${DISTNAME}
CATEGORIES =	sysutils

HOMEPAGE =	http://www.greenwoodsoftware.com/less/
MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# GPLv3+ or BSD
PERMIT_PACKAGE =	Yes

WANTLIB += c curses

MASTER_SITES =	http://www.greenwoodsoftware.com/less/

DEBUG_PACKAGES =	${BUILD_PACKAGES}

CONFIGURE_STYLE =	gnu

# No way to prefix with g
do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/less ${PREFIX}/bin/gless
	${INSTALL_PROGRAM} ${WRKSRC}/lessecho ${PREFIX}/bin/glessecho
	${INSTALL_PROGRAM} ${WRKSRC}/lesskey ${PREFIX}/bin/glesskey
	${INSTALL_MAN} ${WRKSRC}/less.nro ${PREFIX}/man/man1/gless.1
	${INSTALL_MAN} ${WRKSRC}/lessecho.nro ${PREFIX}/man/man1/glessecho.1
	${INSTALL_MAN} ${WRKSRC}/lesskey.nro ${PREFIX}/man/man1/glesskey.1

.include <bsd.port.mk>
