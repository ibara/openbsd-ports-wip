# $OpenBSD$

COMMENT =	integer set library
DISTNAME =	isl-0.22.1
EXTRACT_SUFX =	.tar.xz
CATEGORIES =	devel

SHARED_LIBS +=	isl                       0.0 # 22.0

HOMEPAGE =	http://isl.gforge.inria.fr/
MAINTAINER =	Your Name <you@example.com>

# MIT
PERMIT_PACKAGE =	Yes

WANTLIB += gmp

MASTER_SITES =	http://isl.gforge.inria.fr/

LIB_DEPENDS =	devel/gmp

CONFIGURE_STYLE =	gnu
CONFIGURE_ARGS =	--with-gmp-prefix="${LOCALBASE}"

.include <bsd.port.mk>
