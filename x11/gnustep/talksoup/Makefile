# $OpenBSD$

V =		1.1
COMMENT =	GNUstep IRC client
DISTNAME =	TalkSoup-${V}
PKGNAME =	talksoup-${V}
CATEGORIES =	net

HOMEPAGE =	http://gap.nongnu.org/talksoup/
MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# GPLv2+
PERMIT_PACKAGE =	Yes

WANTLIB += ${COMPILER_LIBCXX}

MASTER_SITES =	${MASTER_SITE_SAVANNAH:=gap/}

MODULES =	x11/gnustep

LIB_DEPENDS =	x11/gnustep/netclasses

NO_TEST =	Yes

.include <bsd.port.mk>
