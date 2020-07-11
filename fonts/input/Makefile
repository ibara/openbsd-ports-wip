# $OpenBSD$

V =		20200710
COMMENT =	proprietary coding font
DISTNAME =	input-font-20200710
CATEGORIES =	fonts x11

# Proprietary
PERMIT_PACKAGE =	proprietary

MODULES =	font

PKG_ARCH =	*

NO_BUILD =	Yes

NO_TEST =	Yes

do-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/fonts/input
	${INSTALL_DATA} ${WRKDIR}/ttf/*.ttf ${PREFIX}/share/fonts/input
	${INSTALL_DATA} ${WRKDIR}/otf/*.otf ${PREFIX}/share/fonts/input

.include <bsd.port.mk>
