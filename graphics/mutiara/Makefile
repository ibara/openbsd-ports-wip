# $OpenBSD$

COMMENT =	border motif creation program
DISTNAME =	mutiara-0.14.0
EXTRACT_SUFX =	.tar.xz
CATEGORIES =	graphics x11

HOMEPAGE =	http://mutiara.sourceforge.net/
MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# GPLv3+
PERMIT_PACKAGE =	Yes

WANTLIB += atk-1.0 c cairo cairo-gobject gdk-3 gdk_pixbuf-2.0
WANTLIB += gee-0.8 gio-2.0 glib-2.0 gobject-2.0 gthread-2.0 gtk-3
WANTLIB += harfbuzz intl m pango-1.0 pangocairo-1.0 pthread

MASTER_SITES =	${MASTER_SITE_SOURCEFORGE:=mutiara/}

LIB_DEPENDS =	devel/libgee \
		x11/gtk+3

RUN_DEPENDS =	devel/desktop-file-utils \
		x11/gtk+3,-guic

CONFIGURE_STYLE =	gnu

USE_GMAKE =	Yes

do-gen:
	${SUBST_CMD} ${WRKSRC}/src/reloc.c

.include <bsd.port.mk>
