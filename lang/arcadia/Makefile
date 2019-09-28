# $OpenBSD$

COMMENT =	implementation of the Arc programming language in C
CATEGORIES =	lang

GH_ACCOUNT =	kimtg
GH_PROJECT =	arcadia
GH_TAGNAME =	v0.18.3

# Apache 2.0
PERMIT_PACKAGE =	Yes

WANTLIB += c curses edit m

ALL_TARGET =	arcadia
MAKE_FLAGS =	CFLAGS="${CFLAGS} -DREADLINE -c" \
		LDFLAGS="${LDFLAGS} -lcurses -ledit -lm"

NO_TEST =	Yes

# no install target
do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/arcadia ${PREFIX}/bin

.include <bsd.port.mk>
