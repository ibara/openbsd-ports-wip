# $OpenBSD$

V =		0.7.04
COMMENT =	safe-remove command line utility
DISTNAME =	rmw-${V}
CATEGORIES =	sysutils

HOMEPAGE =	https://remove-to-waste.info/
MAINTAINER =	Your Name <you@example.com>

# GPLv3+
PERMIT_PACKAGE =	Yes

WANTLIB += c curses iconv intl menu

MASTER_SITES =	https://github.com/theimpossibleastronaut/rmw/releases/download/v${V}/

CONFIGURE_STYLE =	gnu

LIB_DEPENDS =	devel/gettext,-runtime

TEST_ENV =	USE_VALGRIND=0

.include <bsd.port.mk>
