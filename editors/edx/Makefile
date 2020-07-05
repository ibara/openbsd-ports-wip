# $OpenBSD$

COMMENT =	small Wordstar clone for X11
DISTNAME =	edx-1.06
CATEGORIES =	editors x11

MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# Public Domain
PERMIT_PACKAGE =	Yes

WANTLIB += X11 Xau Xdmcp c xcb

MASTER_SITES =	https://github.com/ibara/edx/releases/download/${DISTNAME}/

DEBUG_PACKAGES =	${BUILD_PACKAGES}

MAKE_FLAGS =	CC="${CC}" CFLAGS="${CFLAGS} -std=c99 -I${X11BASE}/include" \
		LIBS="-L${X11BASE}/lib -lX11 -lXau -lXdmcp -lxcb"

NO_TEST =	Yes

# No install routine
do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/edx ${PREFIX}/bin
	${INSTALL_DATA_DIR} ${PREFIX}/share/doc/edx
	${INSTALL_DATA} ${WRKSRC}/MANUAL.ws ${PREFIX}/share/doc/edx
	${INSTALL_DATA_DIR} ${PREFIX}/share/examples/edx
	${INSTALL_DATA} ${WRKSRC}/edxrc.example ${PREFIX}/share/examples/edx

.include <bsd.port.mk>
