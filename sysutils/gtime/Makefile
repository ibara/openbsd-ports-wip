# $OpenBSD$

COMMENT =	GNU time utility
DISTNAME =	time-1.9
PKGNAME =	g${DISTNAME}
CATEGORIES =	sysutils

HOMEPAGE =	https://www.gnu.org/software/time/
MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# GPLv3+
PERMIT_PACKAGE =	Yes

WANTLIB += c

MASTER_SITES =	${MASTER_SITE_GNU:=time/}

DEBUG_PACKAGES =	${BUILD_PACKAGES}

CONFIGURE_STYLE =	gnu
CONFIGURE_ARGS =	--program-prefix=g

.include <bsd.port.mk>
