# $OpenBSD: Makefile.template,v 1.78 2018/07/09 15:00:06 jca Exp $

V =		1.0.3
COMMENT =	open h.265 video codec implementation
DISTNAME =	libde265-${V}
CATEGORIES =	graphics

SHARED_LIBS +=	de265                     0.0 # 0.10

HOMEPAGE =	https://github.com/strukturag/libde265

# LGPLv3+
PERMIT_PACKAGE =	Yes

WANTLIB += ${COMPILER_LIBCXX} m

MASTER_SITES =	https://github.com/strukturag/libde265/releases/download/v${V}/

COMPILER =	base-clang ports-gcc

SEPARATE_BUIILD =	Yes

CONFIGURE_STYLE =	gnu
CONFIGURE_ARGS =	--disable-dec265 \
			--disable-sherlock265

# Remove all these (test?) programs.
post-install:
	@rm -f ${PREFIX}/bin/*

.include <bsd.port.mk>
