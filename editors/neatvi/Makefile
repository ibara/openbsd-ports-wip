# $OpenBSD$

COMMENT =	small vi/ex editor for editing bidirectional UTF-8 text
DISTNAME =	${GH_PROJECT}-0.0.0.20190402
CATEGORIES =	editors

GH_ACCOUNT =	aligrudi
GH_PROJECT =	neatvi
GH_COMMIT =	cfb5f5f6170fa3c66566a81ce2a4d17c60c563aa

HOMEPAGE =	https://litcave.rudi.ir/
MAINTAINER =	Your Name <you@example.com>

# ISC
PERMIT_PACKAGE =	Yes

WANTLIB += c

NO_TEST =	Yes

# No install routine.
do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/vi ${PREFIX}/bin/neatvi

.include <bsd.port.mk>
