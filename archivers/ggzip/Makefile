# $OpenBSD$

COMMENT =	GNU Gzip utility
DISTNAME =	gzip-1.10
PKGNAME =	g${DISTNAME}
CATEGORIES =	archivers sysutils

HOMEPAGE =	https://www.gnu.org/software/gzip/
MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# GPLv3+
PERMIT_PACKAGE =	Yes

WANTLIB += c

MASTER_SITES =	${MASTER_SITE_GNU:=gzip/}

DEBUG_PACKAGES =	${BUILD_PACKAGES}

CONFIGURE_STYLE =	gnu
CONFIGURE_ARGS =	--program-prefix=g

.include <bsd.port.mk>
