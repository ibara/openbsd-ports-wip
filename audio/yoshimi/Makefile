# $OpenBSD$

COMMENT =	software audio synthesizer
DISTNAME =	yoshimi-1.6.0
EXTRACT_SUFX =	.tar.bz2
CATEGORIES =	audio x11

HOMEPAGE =	https://yoshimi.github.io/
MAINTAINER =	Your Name <you@example.com>

# GPLv2+
PERMIT_PACKAGE =	Yes

WANTLIB += ${COMPILER_LIBCXX} GL ICE SM X11 Xext c cairo curses
WANTLIB += fftw3f fltk fltk_forms fltk_gl fltk_images fontconfig
WANTLIB += form freetype jack m mxml readline z

MASTER_SITES =	${MASTER_SITE_SOURCEFORGE:=yoshimi/}

MODULES =	devel/cmake

BUILD_DEPENDS =	audio/lv2 \
		devel/argp-standalone

LIB_DEPENDS =	audio/jack \
		math/fftw3,float \
		textproc/mxml \
		x11/fltk

RUN_DEPENDS =	audio/lv2 \
		devel/desktop-file-utils \
		x11/gtk+3,-guic

NO_TEST =	Yes

WRKSRC =	${WRKDIST}/src

.include <bsd.port.mk>
