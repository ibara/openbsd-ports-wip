# $OpenBSD$

COMMENT =	high-quality visual cross-platform gemini browser
CATEGORIES =	net

GH_ACCOUNT =	MasterQ32
GH_PROJECT =	kristall
GH_TAGNAME =	V0.3

MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# GPLv3+
PERMIT_PACKAGE =	Yes

WANTLIB += ${COMPILER_LIBCXX} GL Qt5Core Qt5Gui Qt5Multimedia
WANTLIB += Qt5MultimediaWidgets Qt5Network Qt5Svg Qt5Widgets c
WANTLIB += crypto glib-2.0 iconv intl m pulse pulse-mainloop-glib

MODULES =	devel/qmake \
		x11/qt5

MODQMAKE_PROJECTS =	src/kristall.pro

LIB_DEPENDS =	audio/pulseaudio \
		x11/qt5/qtmultimedia \
		x11/qt5/qtsvg

NO_TEST =	Yes

# Bad install directory
do-install:
	${INSTALL_PROGRAM} ${WRKBUILD}/src/kristall ${PREFIX}/bin

.include <bsd.port.mk>
