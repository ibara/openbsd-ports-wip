# $OpenBSD$

COMMENT =	open source drum synthesizer
DISTNAME =	drumgizmo-0.9.17
CATEGORIES =	audio x11

HOMEPAGE =	https://www.drumgizmo.org/
MAINTAINER =	Your Name <you@example.com>

# GPLv2+
PERMIT_PACKAGE =	Yes

#WANTLIB += ${COMPILER_LIBCXX} GL ICE SM X11 Xext c cairo curses
#WANTLIB += fftw3f fltk fltk_forms fltk_gl fltk_images fontconfig
#WANTLIB += form freetype jack m mxml readline z

MASTER_SITES =	https://www.drumgizmo.org/releases/${DISTNAME}/

CONFIGURE_STYLE =	gnu
CONFIGURE_ARGS =	--enable-lv2

.include <bsd.port.mk>
