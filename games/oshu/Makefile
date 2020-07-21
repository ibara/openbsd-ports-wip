# $OpenBSD$

COMMENT =	minimal reimplementation of osu! rhythm game
CATEGORIES =	games x11

GH_ACCOUNT =	fmang
GH_PROJECT =	oshu
GH_TAGNAME =	2.0.1

MAINTAINER =	Paul Valencia <reivyr@enmadechi.com>

# GPLv3 only
PERMIT_PACKAGE =	Yes

WANTLIB += ${COMPILER_LIBCXX} SDL2 SDL2_image avcodec avformat
WANTLIB += avutil c cairo glib-2.0 gobject-2.0 harfbuzz intl m
WANTLIB += pango-1.0 pangocairo-1.0 swresample

# C++14
COMPILER =	base-clang ports-gcc

MODULES =	devel/cmake

LIB_DEPENDS =	devel/pango \
		devel/sdl2-image \
		graphics/ffmpeg

RUN_DEPENDS =	devel/desktop-file-utils \
		misc/shared-mime-info

CONFIGURE_ARGS =	-DCMAKE_EXE_LINKER_FLAGS="${LDFLAGS} -L${LOCALBASE}/lib"

.include <bsd.port.mk>
