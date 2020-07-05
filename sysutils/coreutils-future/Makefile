# $OpenBSD$

COMMENT =	GNU core utilities, tip of tree
DISTFILES =	# empty
PKGNAME =	coreutils-future-8.32.9pl20200501
#REVISION =	0
CATEGORIES =	sysutils

HOMEPAGE =	https://www.gnu.org/software/coreutils/
MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# GPLv3+
PERMIT_PACKAGE =	Yes

WANTLIB += c gmp iconv pthread

LIB_DEPENDS =	converters/libiconv \
		devel/gmp,no_cxx,bootstrap

USE_GMAKE =	Yes

#FAKE_TARGET =	install-strip

NO_BUILD =	Yes

NO_TEST =	Yes

WRKBUILD =	/home/brian/coreutils/coreutils-build

.include <bsd.port.mk>
