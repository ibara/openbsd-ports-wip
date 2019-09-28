# $OpenBSD$

ONLY_FOR_ARCHS =	${APM_ARCHS}

COMMENT =	Window Maker power/battery monitor
DISTNAME =	wmapmload-0.3.4
CATEGORIES =	x11 x11/windowmaker

HOMEPAGE =	http://tnemeth.free.fr/projets/dockapps.html
MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# GPLv2+
PERMIT_PACKAGE =	Yes

WANTLIB += X11 Xext Xpm c

MASTER_SITES =	https://mirrors.nycbug.org/pub/distfiles/

CONFIGURE_STYLE =	gnu

MAKE_FLAGS =	CFLAGS="${CFLAGS} -Dfreebsd"

.include <bsd.port.mk>
