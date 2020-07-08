# $OpenBSD$

# Upstream says any arch can work, but my experience says otherwise.
ONLY_FOR_ARCHS =	amd64

V =		10.1.11
COMMENT =	open source implementation of Scheme programming language
DISTNAME =	mit-scheme-${V}-svm1
PKGNAME =	${DISTNAME:S/-svm1//}
CATEGORIES =	lang

HOMEPAGE =	https://www.gnu.org/software/mit-scheme/
MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# GPLv2+
PERMIT_PACKAGE =	Yes

WANTLIB += X11 c curses m xcb

MASTER_SITES =	${MASTER_SITE_GNU:=mit-scheme/stable.pkg/${V}/}

CONFIGURE_STYLE =	gnu

# svm backend doesn't need a pre-existing mit-scheme binary
MAKE_FLAGS =	MIT_SCHEME_EXE="/usr/bin/true"

# Test says to export this.
# XXX: How to increase memory to mit-scheme?
TEST_ENV =	FAST=y

WRKDIST =	${WRKDIR}/${PKGNAME}
WRKSRC =	${WRKDIST}/src

.include <bsd.port.mk>
