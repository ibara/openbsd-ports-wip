# $OpenBSD$

COMMENT =	GNU batch utilities
DISTNAME =	gnubatch-1.11
CATEGORIES =	sysutils

HOMEPAGE =	https://www.gnu.org/software/gnubatch/
MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# GPLv3+
PERMIT_PACKAGE =	Yes

#WANTLIB += c m

MASTER_SITES =	${MASTER_SITE_GNU:=gnubatch/}

DEBUG_PACKAGES =	${BUILD_PACKAGES}

CONFIGURE_STYLE =	autoconf
CONFIGURE_ARGS =	--program-prefix=g

MAKE_FLAGS =	PORT_CFLAGS="${CFLAGS}"

AUTOCONF_VERSION =	2.68

.include <bsd.port.mk>
