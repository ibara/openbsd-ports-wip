# $OpenBSD$

V =		1.4
P =		1
COMMENT =	onscreen keyboard from Ubuntu
DISTNAME =	onboard-${V}.${P}
CATEGORIES =	x11

HOMEPAGE =	https://launchpad.net/onboard
MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# GPLv3+
PERMIT_PACKAGE =	Yes

#WANTLIB += wnck-3 xcb xcb-render xcb-shm xcb-util z

MASTER_SITES =	https://launchpad.net/onboard/${V}/${V}.${P}/+download/

MODULES =	lang/python
MODPY_VERSION =	${MODPY_DEFAULT_VERSION_3}

BUILD_DEPENDS =	devel/py-distutils-extra,${MODPY_FLAVOR}

.include <bsd.port.mk>
