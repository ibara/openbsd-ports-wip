# $OpenBSD$

COMMENT =	graphical music editor and tracker
CATEGORIES =	audio x11

GH_ACCOUNT =	kmatheussen
GH_PROJECT =	radium
GH_TAGNAME =	5.9.72

HOMEPAGE =	https://users.notam02.no/~kjetism/radium/
MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# GPLv2+
PERMIT_PACKAGE =	Yes

#WANTLIB += SDL2

MAKE_FLAGS =	BUILDTYPE=RELEASE RADIUM_QT_VERSION=5

# Very non-standard build system
do-build:
	cd ${WRKSRC} && ${SETENV} ${MAKE_ENV} ${MAKE_FLAGS} ${LOCALBASE}/bin/bash build_linux.sh

.include <bsd.port.mk>
