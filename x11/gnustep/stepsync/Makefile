# $OpenBSD$

V =		1.0
COMMENT =	file and folder synchronization tool
DISTNAME =	StepSync-${V}
PKGNAME =	stepsync-${V}
CATEGORIES =	sysutils

HOMEPAGE =	http://gap.nongnu.org/stepsync/
MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# GPLv2+
PERMIT_PACKAGE =	Yes

WANTLIB += c++abi

MASTER_SITES =	${MASTER_SITE_SAVANNAH:=gap/}

# egcc: error: unrecognized command line option '-fobjc-runtime=gnustep-1.8'
# egcc: error: unrecognized command line option '-fblocks'
COMPILER =	base-clang ports-clang

MODULES =	x11/gnustep

NO_TEST =	Yes

.include <bsd.port.mk>
