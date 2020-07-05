# $OpenBSD$

COMMENT =	open source console directory file editor
PKGNAME =	${DISTNAME:S/-beta$//}
CATEGORIES =	sysutils

GH_ACCOUNT =	roberthawdon
GH_PROJECT =	dfshow
GH_TAGNAME =	v0.8.2-beta

HOMEPAGE =	https://dfshow.op-ezy.co.uk/
MAINTAINER =	Your Name <you@example.com>

# GPLv3+
PERMIT_PACKAGE =	Yes

WANTLIB += c config curses m

BUILD_DEPENDS =	${MODGNU_AUTOCONF_DEPENDS} \
		${MODGNU_AUTOMAKE_DEPENDS}

LIB_DEPENDS =	devel/libconfig

CONFIGURE_STYLE =	gnu
CONFIGURE_ENV =		CPPFLAGS="${CPPFLAGS} -I${LOCALBASE}/include" \
			LDFLAGS="${LDFLAGS} -L${LOCALBASE}/lib"

FAKE_FLAGS =	sysconfdir="${PREFIX}/share/examples/dfshow"

AUTOCONF_VERSION =	2.69
AUTOMAKE_VERSION =	1.16

do-gen:
	cd ${WRKSRC} && \
		${SETENV} AUTOCONF_VERSION=${AUTOCONF_VERSION} \
			AUTOMAKE_VERSION=${AUTOMAKE_VERSION} autoreconf -fi

.include <bsd.port.mk>
