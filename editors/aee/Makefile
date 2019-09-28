# $OpenBSD$

COMMENT =	graphical easy editor for X11
DISTNAME =	aee-2.2.21
CATEGORIES =	editors x11

MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# Artistic 2.0
PERMIT_PACKAGE =	Yes

WANTLIB += X11 c curses

MASTER_SITES =	${MASTER_SITE_FREEBSD}

MAKE_FLAGS =	CC="${CC}"

NO_TEST =	Yes

# install-sh has all hardcoded paths; would be more work to fix
do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/{aee,xae} \
		${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/aee.1 ${PREFIX}/man/man1
	${INSTALL_DATA} ${WRKSRC}/help.ae \
		${PREFIX}/lib/help.ae

.include <bsd.port.mk>
