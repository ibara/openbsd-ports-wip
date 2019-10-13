# $OpenBSD$

V ?=		10.1.10
DISTNAME ?=	mit-scheme-${V}-svm1
CATEGORIES ?=	lang

HOMEPAGE ?=	https://www.gnu.org/software/mit-scheme/
MAINTAINER ?=	Brian Callahan <bcallah@openbsd.org>

# GPLv2+
PERMIT_PACKAGE ?=	Yes

MASTER_SITES ?=	${MASTER_SITE_GNU:=mit-scheme/stable.pkg/${V}/}

CONFIGURE_STYLE ?=	gnu

WRKDIST ?=	${WRKDIR}/mit-scheme-${V}
