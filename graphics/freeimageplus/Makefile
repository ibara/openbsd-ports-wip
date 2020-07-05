# $OpenBSD: Makefile,v 1.15 2019/07/12 20:46:58 sthen Exp $

COMMENT=		wrapper for freeimage library

DISTNAME=		FreeImage3152
PKGNAME=		freeimageplus-3.15.2
CATEGORIES=		graphics

SHARED_LIBS+=		freeimageplus	0.0

HOMEPAGE=		http://freeimage.sourceforge.net/

# GPL / "FreeImage Public Nons^WLicense"
PERMIT_PACKAGE=	Yes

WANTLIB=		${COMPILER_LIBCXX} m

COMPILER =		base-clang ports-gcc base-gcc

MASTER_SITES=		${MASTER_SITE_SOURCEFORGE:=freeimage/}
EXTRACT_SUFX=		.zip

# They share headers...
RUN_DEPENDS=		graphics/freeimage

WRKDIST=		${WRKDIR}/FreeImage

USE_GMAKE=		Yes

MAKE_ENV=		LIBfreeimageplus_VERSION=${LIBfreeimageplus_VERSION} \
			CC="${CC}" CXX="${CXX}" CFLAGS="${CFLAGS}" \
			CXXFLAGS="${CXXFLAGS}"
MAKE_TARGET=		Makefile.fip

post-extract:
	perl -pi -e 's/\015//g' ${WRKSRC}/Makefile.fip \
				${WRKSRC}/TestAPI/Makefile \
				${WRKSRC}/Makefile

# To not conflict with graphics/freeimage...
post-install:
	@rm -f ${PREFIX}/include/FreeImage.h

do-test:
	cd ${WRKSRC}/TestAPI && ${MAKE_PROGRAM} ${MAKE_ENV}

.include <bsd.port.mk>
