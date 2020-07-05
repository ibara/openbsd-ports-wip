# $OpenBSD$

COMMENT =	daemon for Jami video chat
DISTNAME =	jami-daemon-20200423
CATEGORIES =	telephony

HOMEPAGE =	https://jami.net/
MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# GPLv3+
PERMIT_PACKAGE =	Yes

#WANTLIB += c

MASTER_SITES =	https://mirrors.nycbug.org/pub/distfiles/

BUILD_DEPENDS =	${MODGNU_AUTOCONF_DEPENDS} \
		${MODGNU_AUTOMAKE_DEPENDS}

LIB_DEPENDS =	telephony/pjsip

CONFIGURE_STYLE =	gnu

USE_LIBTOOL =	gnu

AUTOCONF_VERSION =	2.69
AUTOMAKE_VERSION =	1.16

do-gen:
	cd ${WRKSRC} && env AUTOCONF_VERSION=${AUTOCONF_VERSION} \
		AUTOMAKE_VERSION=${AUTOMAKE_VERSION} ./autogen.sh

.include <bsd.port.mk>
