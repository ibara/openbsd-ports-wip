# $OpenBSD$

COMMENT =	GNU which utility
DISTNAME =	which-2.21
PKGNAME =	g${DISTNAME}
CATEGORIES =	sysutils

HOMEPAGE =	https://carlowood.github.io/which/index.html
MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# GPLv3+
PERMIT_PACKAGE =	Yes

WANTLIB += c

MASTER_SITES =	https://carlowood.github.io/which/

CONFIGURE_STYLE =	gnu
CONFIGURE_ARGS =	--program-prefix=g

.include <bsd.port.mk>
