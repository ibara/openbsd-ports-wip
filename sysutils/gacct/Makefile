# $OpenBSD$

COMMENT =	GNU accounting utilities
DISTNAME =	acct-6.6.4
PKGNAME =	g${DISTNAME}
CATEGORIES =	sysutils

HOMEPAGE =	https://www.gnu.org/software/acct/
MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# GPLv3+
PERMIT_PACKAGE =	Yes

WANTLIB += c m

MASTER_SITES =	${MASTER_SITE_GNU:=acct/}

DEBUG_PACKAGES =	${BUILD_PACKAGES}

CONFIGURE_STYLE =	autoconf gnu
CONFIGURE_ARGS =	--program-prefix=g

AUTOCONF_VERSION =	2.69

.include <bsd.port.mk>
