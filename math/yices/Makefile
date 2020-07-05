# $OpenBSD$

V =		2.6.2
COMMENT =	solver for Satisfiability Modulo Theories (SMT) problems
DISTNAME =	yices-${V}
EXTRACT_SUFX =	-src.tar.gz
CATEGORIES =	math

HOMEPAGE =	https://yices.csl.sri.com/
MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# GPLv3+
PERMIT_PACKAGE =	Yes

#WANTLIB += c curses edit

MASTER_SITES =	https://yices.csl.sri.com/releases/${V}/

CONFIGURE_STYLE =	gnu
CONFIGURE_ENV =		CPPFLAGS="${CPPFLAGS} -I${LOCALBASE}/include" \
			LDFLAGS="${LDFLAGS} -L${LOCALBASE}/lib"

USE_GMAKE =	Yes

.include <bsd.port.mk>
