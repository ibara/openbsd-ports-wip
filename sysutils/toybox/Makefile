# $OpenBSD$

COMMENT =	all-in-one commandline utility
DISTNAME =	toybox-0.8.2
CATEGORIES =	sysutils

HOMEPAGE =	https://landley.net/toybox/
MAINTAINER =	Your Name <you@example.com>

# BSD
PERMIT_PACKAGE =	Yes

#WANTLIB += pthread z

MASTER_SITES =	https://landley.net/toybox/downloads/

BUILD_DEPENDS =	shells/bash \
		textproc/gsed

USE_GMAKE =	Yes

# Lots of #!/bin/bash stuff
do-gen:
	grep -rl '#!/bin/bash' ${WRKSRC} | xargs \
		sed -i 's,#!/bin/bash,#!${LOCALBASE}/bin/bash,g'
	sed -i 's,LOCALBASE,${LOCALBASE},g' \
		${WRKSRC}/lib/portability.c

do-configure:
	cd ${WRKSRC} && ${MAKE_PROGRAM} bsd_defconfig

.include <bsd.port.mk>
