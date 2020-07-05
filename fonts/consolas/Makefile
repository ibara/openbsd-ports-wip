# $OpenBSD$

COMMENT =	Microsoft monospace font
DISTNAME =	consolas-1.00
EXTRACT_SUFX =	.tar.gz
CATEGORIES =	fonts x11

# Proprietary
PERMIT_PACKAGE =	Proprietary
PERMIT_DISTFILES =	Proprietary

MASTER_SITES =	https://briancallahan.net/

MODULES =	font
FONTTYPES =	ttf

PKG_ARCH =	*

NO_BUILD =	Yes

NO_TEST =	Yes

do-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/fonts/Consolas
	${INSTALL_DATA} ${WRKSRC}/consola.ttf ${PREFIX}/share/fonts/Consolas

.include <bsd.port.mk>
