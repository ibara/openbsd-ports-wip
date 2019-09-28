# $OpenBSD$

COMMENT =	multi-platform, console-mode gopher client
DISTNAME =	gopherus-1.1
EXTRACT_SUFX =	.tar.xz
CATEGORIES =	net

HOMEPAGE =	http://gopherus.sourceforge.net/
MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# BSD
PERMIT_PACKAGE =	Yes

WANTLIB += SDL2 c curses

MASTER_SITES =	${MASTER_SITE_SOURCEFORGE:=gopherus/}

LIB_DEPENDS =	devel/sdl2

MAKE_FILE =	Makefile.lin
MAKE_FLAGS =	CC="${CC}" \
		CFLAGS="${CFLAGS} -std=gnu89 -I${LOCALBASE}/include" \
		LDFLAGS="${LDFLAGS} -L${LOCALBASE}/lib"

NO_TEST =	Yes

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/gopherus ${PREFIX}/bin
	${INSTALL_PROGRAM} ${WRKSRC}/gopherus-sdl ${PREFIX}/bin

.include <bsd.port.mk>
