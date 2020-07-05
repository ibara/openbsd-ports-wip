# $OpenBSD$

COMMENT =	mathematical modeling software
DISTNAME =	mathmod-10.0-source
PKGNAME =	${DISTNAME:S/-source//}
EXTRACT_SUFX =	.zip
CATEGORIES =	math

HOMEPAGE =	https://sourceforge.net/projects/mathmod/
MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# GPLv2+
PERMIT_PACKAGE =	Yes

WANTLIB += ${COMPILER_LIBCXX} GL Qt5Core Qt5Gui Qt5OpenGL Qt5Widgets
WANTLIB += c m

MASTER_SITES =	${MASTER_SITE_SOURCEFORGE:=mathmod/}

MODULES =	devel/qmake \
		x11/qt5

NO_TEST =	Yes

WRKDIST =	${WRKDIR}/${PKGNAME}

# install target is broken
do-install:
	${INSTALL_PROGRAM} ${WRKBUILD}/MathMod ${PREFIX}/bin

.include <bsd.port.mk>
