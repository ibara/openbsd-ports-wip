# $OpenBSD$

COMMENT =	disk information utility
DISTNAME =	di-4.47.3
CATEGORIES =	sysutils

HOMEPAGE =	https://gentoo.com/di/
MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# GPLv3+
PERMIT_PACKAGE =	Yes

WANTLIB += c intl

MASTER_SITES =	${MASTER_SITE_SOURCEFORGE:=diskinfo-di/}

LIB_DEPENDS =	devel/gettext,-runtime

MAKE_FLAGS =	CC="${CC}" CFLAGS="${CFLAGS}" \
		CPPFLAGS="${CPPFLAGS} -I${LOCALBASE}/include" \
		LDFLAGS="${LDFLAGS} -L${LOCALBASE}/lib"

FAKE_FLAGS =	prefix="${DESTDIR}${PREFIX}"

.include <bsd.port.mk>
