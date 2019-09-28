# $OpenBSD: Makefile.template,v 1.78 2018/07/09 15:00:06 jca Exp $

V = 		1.3.2
COMMENT =	ISO/IEC 23008-12:2017 HEIF file format decoder and encoder
DISTNAME =	libheif-${V}
CATEGORIES =	graphics

SHARED_LIBS +=	heif                      0.0 # 4.2

HOMEPAGE =	https://github.com/strukturag/libheif

# LGPLv3+
PERMIT_PACKAGE =	Yes

WANTLIB += ${COMPILER_LIBCXX} c de265 jpeg m png x265 z

MASTER_SITES =	https://github.com/strukturag/libheif/releases/download/v${V}/

COMPILER =	base-clang ports-gcc

LIB_DEPENDS =	graphics/jpeg \
		graphics/libde265 \
		graphics/png \
		multimedia/x265

RUN_DEPENDS =	misc/shared-mime-info

SEPARATE_BUILD =	Yes

CONFIGURE_STYLE =	gnu
CONFIGURE_ENV =		CPPFLAGS="${CPPFLAGS} -I${LOCALBASE}/include" \
			LDFLAGS="${LDFLAGS} -L${LOCALBASE}/lib"

.include <bsd.port.mk>
