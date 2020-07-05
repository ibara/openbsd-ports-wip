# $OpenBSD$

ONLY_FOR_ARCHS =	amd64

COMMENT =	tiny C compiler
DISTNAME =	tinycc-0.9.27.20200208
CATEGORIES =	lang

HOMEPAGE =	https://repo.or.cz/tinycc.git
MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# LGPLv2.1+
PERMIT_PACKAGE =	Yes

#WANTLIB += c

MASTER_SITES =	https://mirrors.nycbug.org/pub/distfiles/

CONFIGURE_STYLE =	simple
CONFIGURE_ARGS =	--cc="${CC}" \
			--crtprefix="/usr/lib" \
			--elfinterp="/usr/libexec/ld.so" \
			--infodir="${LOCALBASE}/info" \
			--mandir="${LOCALBASE}/man"

USE_GMAKE =	Yes

.include <bsd.port.mk>
