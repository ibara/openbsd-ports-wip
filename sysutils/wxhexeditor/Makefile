# $OpenBSD$

V =		0.24
COMMENT =	graphical hex editor and disk editor
DISTNAME =	wxHexEditor-v${V}-src
PKGNAME =	wxhexeditor-${V}
EXTRACT_SUFX =	.tar.xz
CATEGORIES =	sysutils x11

HOMEPAGE =	https://www.wxhexeditor.org/
MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# GPLv2 only
PERMIT_PACKAGE =	Yes

MASTER_SITES =	${MASTER_SITE_SOURCEFORGE:=wxhexeditor/}

# C++14
COMPILER =	base-clang ports-gcc

LIB_DEPENDS =	devel/udis86 \
		security/mhash

USE_GMAKE =	Yes
MAKE_FLAGS =	CC="${CC}" CXX="${CXX}"

WRKDIST =	${WRKDIR}/wxHexEditor

.include <bsd.port.mk>
