# $OpenBSD$

V =		0.1.6
COMMENT =	music tracker for the Yamaha YM2608 (OPNA) sound chip
PKGNAME =	${DISTNAME:L}
CATEGORIES =	audio x11

GH_ACCOUNT =	rerrahkr
GH_PROJECT =	BambooTracker
GH_TAGNAME =	v${V}

MAINTAINER =	Your Name <you@example.com>

# GPLv2+
PERMIT_PACKAGE =	Yes

WANTLIB += ${COMPILER_LIBCXX} GL Qt5Core Qt5Gui Qt5Multimedia
WANTLIB += Qt5Network Qt5Widgets c m

MODULES =	devel/qmake \
		x11/qt5

LIB_DEPENDS =	x11/qt5/qtmultimedia

RUN_DEPENDS =	devel/desktop-file-utils

NO_TEST =	Yes

WRKDIST =	${WRKDIR}/${GH_PROJECT}-${V}/${GH_PROJECT}

# `make install' doesn't work
# Taken from FreeBSD
#do-install:
#	${INSTALL_PROGRAM} ${WRKBUILD}/BambooTracker ${PREFIX}/bin
#	${INSTALL_MAN} ${WRKDIST}/BambooTracker.1 ${PREFIX}/man/man1
#	${INSTALL_DATA_DIR} ${PREFIX}/share/applications
#	${INSTALL_DATA} ${WRKDIST}/BambooTracker.desktop \
#		${PREFIX}/share/applications
#	${INSTALL_DATA_DIR} ${PREFIX}/share/pixmaps
#	${INSTALL_DATA} ${WRKSRC}/res/icon/icon_256x256.png \
#		${PREFIX}/share/pixmaps/BambooTracker.png

.include <bsd.port.mk>
