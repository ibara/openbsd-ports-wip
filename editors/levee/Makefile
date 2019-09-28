# $OpenBSD$

COMMENT =	tiny, fast, and somewhat erratic vi clone
DISTNAME =	levee-4.0
EXTRACT_SUFX =	.tar.bz2
CATEGORIES =	editors

HOMEPAGE =	https://www.pell.portland.or.us/~orc/Code/levee/
MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# BSD
PERMIT_PACKAGE =	Yes

WANTLIB += c curses

# ftp: SSL write error:
# certificate verification failed: unable to get local issuer certificate
MASTER_SITES =	http://www.pell.portland.or.us/~orc/Code/levee/

CONFIGURE_STYLE =	simple
CONFIGURE_SCRIPT =	configure.sh

ALL_TARGET =	lev

FAKE_FLAGS =	PREFIX="${DESTDIR}"

NO_TEST =	Yes

.include <bsd.port.mk>
