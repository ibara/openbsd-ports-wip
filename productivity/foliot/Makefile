# $OpenBSD$

COMMENT =	small and easy to use time keeping application
DISTNAME =	foliot-0.9.8
CATEGORIES =	productivity

HOMEPAGE =	https://www.gnu.org/software/foliot/
MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# GPLv3+
PERMIT_PACKAGE =	Yes

#WANTLIB += c

MASTER_SITES =	${MASTER_SITE_GNU:=foliot/}

DEBUG_PACKAGES =	${BUILD_PACKAGES}

CONFIGURE_STYLE =	gnu
CONFIGURE_ENV =		GUILE="${LOCALBASE}/bin/guile2.2"

.include <bsd.port.mk>
