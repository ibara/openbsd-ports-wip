# $OpenBSD$

COMMENT =	serial and network communications package
DISTNAME =	gku100
PKGNAME =	gkermit-1.0.0
CATEGORIES =	comms

HOMEPAGE =	http://kermitproject.org/gkermit.html

# GPLv2+
PERMIT_PACKAGE =	Yes

WANTLIB += c

MASTER_SITES =	http://cdn.netbsd.org/pub/pkgsrc/distfiles/

MAKE_FILE =	makefile
MAKE_FLAGS =	CC="${CC}" CFLAGS="${CFLAGS} -DPOSIX -Wno-unused"

FAKE_FLAGS =	BINDIR="${DESTDIR}${PREFIX}/bin" \
		INFODIR="${DESTDIR}${PREFIX}/info" \
		MANDIR="${DESTDIR}${PREFIX}/man/man1" \
		MANEXT="1" \
		TEXTDIR="${DESTDIR}${PREFIX}/share/doc/gkermit"

NO_TEST =	Yes

WRKDIST =	${WRKDIR}

.include <bsd.port.mk>
