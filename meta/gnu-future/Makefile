# $OpenBSD$

COMMENT =	GNU tools in development
DISTFILES =	# empty
PKGNAME =	gnu-future-20191017
#REVISION =	0
CATEGORIES =	meta

HOMEPAGE =	https://www.gnu.org/
MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# GPLv3+
PERMIT_PACKAGE =	Yes

# gcc-future pulls in binutils-future
RUN_DEPENDS =	editors/emacs-future \
		lang/gcc-future \
		sysutils/coreutils-future

NO_BUILD =	Yes

NO_TEST =	Yes

PKG_ARCH =	*

do-install:

.include <bsd.port.mk>
