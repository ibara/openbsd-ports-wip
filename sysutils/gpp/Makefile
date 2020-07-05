# $OpenBSD$

V =		2.26
COMMENT =	generic preprocessor
DISTNAME =	gpp-${V}
EXTRACT_SUFX =	.tar.bz2
CATEGORIES =	sysutils

HOMEPAGE =	https://logological.org/gpp
MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# LGPLv3+
PERMIT_PACKAGE =	Yes

WANTLIB += c

MASTER_SITES =	https://github.com/logological/gpp/releases/download/${V}/

DEBUG_PACKAGES =	${BUILD_PACKAGES}

CONFIGURE_STYLE =	gnu

.include <bsd.port.mk>
