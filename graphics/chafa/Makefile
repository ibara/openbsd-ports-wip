# $OpenBSD$

COMMENT =	commandline utility that converts images for terminal output
DISTNAME =	chafa-1.4.1
EXTRACT_SUFX =	.tar.xz
CATEGORIES =	graphics

SHARED_LIBS +=	chafa                     0.0 # 4.0

HOMEPAGE =	https://hpjansson.org/chafa/
MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# LGPLv3+
PERMIT_PACKAGE =	Yes

WANTLIB += ICE MagickCore-6.Q16 MagickWand-6.Q16 SM X11 Xext Xt
WANTLIB += bz2 c djvulibre expat fftw3 fontconfig freetype glib-2.0
WANTLIB += iconv intl jasper jbig jpeg lcms2 lzma m openjp2 pcre
WANTLIB += png pthread raw_r tiff webp webpdemux webpmux xcb xml2
WANTLIB += z zstd

MASTER_SITES =	https://hpjansson.org/chafa/releases/

# Needs builtins from post gcc-4.2.1
COMPILER =	base-clang ports-gcc
COMPILER_LANGS =	c

LIB_DEPENDS =	devel/glib2 \
		graphics/ImageMagick

CONFIGURE_STYLE =	gnu
CONFIGURE_ARGS =	--disable-man

# Manual page exists but won't install unless explicitly rebuilding it
post-install:
	${INSTALL_MAN} ${WRKSRC}/docs/chafa.1 ${PREFIX}/man/man1

.include <bsd.port.mk>
