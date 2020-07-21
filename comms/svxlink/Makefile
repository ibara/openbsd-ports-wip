# $OpenBSD$

COMMENT =	advanced repeater software with EchoLink support
CATEGORIES =	comms

SHARED_LIBS +=	asyncaudio                0.0 # 1.6
SHARED_LIBS +=	asynccore                 0.0 # 1.6
SHARED_LIBS +=	asynccpp                  0.0 # 1.6
SHARED_LIBS +=	asyncqt                   0.0 # 1.6
SHARED_LIBS +=	echolib                   0.0 # 1.3

GH_ACCOUNT =	sm0svx
GH_PROJECT =	svxlink
GH_TAGNAME =	19.09.1

HOMEPAGE =	https://www.svxlink.org/
MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# GPLv2+
PERMIT_PACKAGE =	Yes

#WANTLIB += c m

MODULES =	devel/cmake \
		x11/qt5

LIB_DEPENDS =	devel/libsigc++-2 \
		net/curl

RUN_DEPENDS =	devel/desktop-file-utils

CONFIGURE_ARGS =	-DCMAKE_CXX_FLAGS="${CXXFLAGS} -I${LOCALBASE}/include" \
			-DUSE_ALSA=OFF

# ninja: error: build.ninja:3785: multiple rules generate include/version/SVXLINK.h [-w dupbuild=err]
USE_NINJA =	No

WRKSRC =	${WRKDIST}/src

.include <bsd.port.mk>
