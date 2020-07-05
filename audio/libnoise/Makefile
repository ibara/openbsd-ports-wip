# $OpenBSD$

V =		1.0.0
COMMENT =	portable, open-source, coherent noise-generating library
DISTNAME =	libnoisesrc-${V}
PKGNAME =	libnoise-${V}
EXTRACT_SUFX =	.zip
CATEGORIES =	audio

SHARED_LIBS +=	noise                     0.0 # 0.3

HOMEPAGE =	http://libnoise.sourceforge.net/
MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# LGPLv2.1+
PERMIT_PACKAGE =	Yes

#WANTLIB += xcb-render xcb-shm z

MASTER_SITES =	${MASTER_SITE_SOURCEFORGE:=libnoise/}

USE_GMAKE =	Yes
MAKE_FLAGS =	CXX="${CXX}" CXXFLAGS="${CXXFLAGS} -fPIC -DPIC"

WRKDIST =	${WRKDIR}/noise

post-extract:
	perl -i -pe 's/\r$$//' ${WRKSRC}/src/Makefile

do-gen:
	${SUBST_CMD} ${WRKSRC}/src/Makefile

do-install:
	${INSTALL_DATA_DIR} ${PREFIX}/lib
	${INSTALL_DATA} ${WRKSRC}/src/libnoise.{a,la} ${PREFIX}/lib
	${INSTALL_DATA} ${WRKSRC}/src/libnoise.so.${LIBnoise_VERSION} ${PREFIX}/lib
	(cd ${WRKSRC}/include && \
		cp -R . ${PREFIX}/include/noise)
	@rm -f ${PREFIX}/include/noise/Makefile

.include <bsd.port.mk>
