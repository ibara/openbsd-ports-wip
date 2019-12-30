# $OpenBSD$

COMMENT =	hide the mouse pointer in X
CATEGORIES =	x11

GH_ACCOUNT =	aktau
GH_PROJECT =	hhpc
GH_TAGNAME =	v0.3.1

MAINTAINER =	Your Name <you@example.com>

# BSD
PERMIT_PACKAGE =	Yes

WANTLIB += X11 c

NO_TEST =	Yes

# No install routine
do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/hhpc ${PREFIX}/bin

.include <bsd.port.mk>
