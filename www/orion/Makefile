# $OpenBSD$

COMMENT =	QML/C++ desktop client for Twitch.tv
DISTNAME =	${GH_PROJECT}-1.6.6.1
CATEGORIES =	www multimedia x11

# Switch to GH_TAGNAME next release
GH_ACCOUNT =	alamminsalo
GH_PROJECT =	orion
#GH_TAGNAME =	1.6.6
GH_COMMIT =	c2390ade0354af56c563266d4892a3e2f1d9eaee

HOMEPAGE =	https://alamminsalo.github.io/orion/
MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# GPLv3+
PERMIT_PACKAGE =	Yes

WANTLIB += ${COMPILER_LIBCXX} GL Qt5Core Qt5DBus Qt5Gui Qt5Network
WANTLIB += Qt5Qml Qt5Quick Qt5QuickControls2 Qt5Widgets c m mpv

MODULES =	devel/qmake \
		x11/qt5

LIB_DEPENDS =	multimedia/mpv \
		x11/qt5/qtquickcontrols2

NO_TEST =	Yes

# No install routine
do-install:
	${INSTALL_PROGRAM} ${WRKBUILD}/orion ${PREFIX}/bin

.include <bsd.port.mk>
