# $OpenBSD$

V =		20.01.2
COMMENT =	Mercury is a pure logic programming language
DISTNAME =	mercury-srcdist-$V
PKGNAME =	mercury-$V
CATEGORIES =	lang

HOMEPAGE =	https://mercurylang.org
MAINTAINER =	Mathieu Kerjouan <niamkik@protonmail.com>

#
PERMIT_PACKAGE =	Yes

#WANTLIB

MASTER_SITES =	http://dl.mercurylang.org/release/

BUILD_DEPENDS =	devel/bison \
		devel/xdg-utils \
		textproc/libxslt

RUN_DEPENDS =	devel/xdg-open

CONFIGURE_STYLE =	gnu
CONFIGURE_ENV =		YACC="${LOCALBASE}/bin/bison"

USE_GMAKE =	Yes

WRKDIST =	${WRKDIR}/${DISTNAME}

.include <bsd.port.mk>
