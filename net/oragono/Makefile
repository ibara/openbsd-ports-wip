# $OpenBSD$

COMMENT =	modern IRC server written in Go
DISTNAME =	oragono-1.1.1
CATEGORIES =	net

HOMEPAGE =	https://oragono.io/
MAINTAINER =	Your Name <you@example.com>

# MIT
PERMIT_PACKAGE =	Yes

WANTLIB += c pthread

MASTER_SITES =	https://mirrors.nycbug.org/pub/distfiles/

MODULES =	lang/go

ALL_TARGET =	github.com/oragono/oragono

post-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/examples/oragono
	${INSTALL_DATA} ${WRKSRC}/oragono.yaml \
		${PREFIX}/share/examples/oragono/ircd.yaml

.include <bsd.port.mk>
