# $OpenBSD$

V =		0.2.2073
COMMENT =	graphical WordStar 7.0D clone
DISTNAME =	WordTsar-src-${V}
PKGNAME =	wordtsar-${V}
EXTRACT_SUFX =	.zip
CATEGORIES =	editors x11

HOMEPAGE =	http://wordtsar.ca/
MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# AGPLv3+
PERMIT_PACKAGE =	Yes

WANTLIB += ${COMPILER_LIBCXX} GL Qt5Core Qt5Gui Qt5PrintSupport
WANTLIB += Qt5Widgets c m

MASTER_SITES =	${MASTER_SITE_SOURCEFORGE:=wordtsar/}

MODULES =	x11/qt5 \
		devel/qmake

NO_TEST =	Yes

WRKDIST =	${WRKDIR}/WordTsar-src

# Broken tarball
post-extract:
	chmod +x ${WRKSRC}/rev.sh

# No install routine
do-install:
	${INSTALL_PROGRAM} ${WRKBUILD}/WordTsar ${PREFIX}/bin

.include <bsd.port.mk>
