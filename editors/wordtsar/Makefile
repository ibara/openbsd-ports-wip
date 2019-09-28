# $OpenBSD$

V =		0.1.1572
COMMENT =	graphical WordStar 7.0D clone
DISTFILES =	${PKGNAME}{WordTsar-src}.zip
PKGNAME =	wordtsar-${V}
CATEGORIES =	editors x11

HOMEPAGE =	http://wordtsar.ca/
MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# AGPLv3+
PERMIT_PACKAGE =	Yes

WANTLIB += ${COMPILER_LIBCXX} c hunspell-1.6 m wx_baseu-3.0 wx_baseu_net-3.0
WANTLIB += wx_baseu_xml-3.0 wx_gtk3u_adv-3.0 wx_gtk3u_core-3.0
WANTLIB += wx_gtk3u_html-3.0 wx_gtk3u_qa-3.0 wx_gtk3u_xrc-3.0

MASTER_SITES =	${MASTER_SITE_SOURCEFORGE:=wordtsar/}

# C++11
COMPILER =	base-clang ports-gcc

LIB_DEPENDS =	textproc/hunspell \
		x11/wxWidgets,-main

NO_TEST =	Yes

WRKDIST =	${WRKDIR}/WordTsar-src

# No install routine
do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/wordtsar ${PREFIX}/bin

.include <bsd.port.mk>
