# $OpenBSD$

COMMENT =	open source implementation of Scheme programming langauge
PKGNAME =	mit-scheme-${V}

WANTLIB += X11 c curses m xcb

MAKE_FLAGS =	MIT_SCHEME_EXE="/usr/bin/true"

# Test says to export this.
# XXX: How to increase memory to mit-scheme?
TEST_ENV =	FAST=y

WRKSRC =	${WRKDIST}/src

.include <bsd.port.mk>
