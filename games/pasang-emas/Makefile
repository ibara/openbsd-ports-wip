# $OpenBSD$

COMMENT =	traditional board game of Brunei
DISTNAME =	pasang-emas-6.2.0
EXTRACT_SUFX =	.tar.xz
CATEGORIES =	games x11

HOMEPAGE =	http://pasang-emas.sourceforge.net/
MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# GPLv3+
PERMIT_PACKAGE =	Yes

WANTLIB += atk-1.0 c cairo cairo-gobject gdk-3 gdk_pixbuf-2.0
WANTLIB += gio-2.0 glib-2.0 gobject-2.0 gthread-2.0 gtk-3 harfbuzz
WANTLIB += intl m pango-1.0 pangocairo-1.0 pthread

MASTER_SITES =	${MASTER_SITE_SOURCEFORGE:=pasang-emas/}

BUILD_DEPENDS =	devel/gettext,-tools

LIB_DEPENDS =	x11/gtk+3

RUN_DEPENDS =	devel/desktop-file-utils

CONFIGURE_STYLE =	gnu

USE_GMAKE =	Yes

do-gen:
	${SUBST_CMD} ${WRKSRC}/src/reloc.c

.include <bsd.port.mk>
