# $OpenBSD$

COMMENT =	free multithreaded file transfer client
DISTNAME =	gftp-2.0.19
EXTRACT_SUFX =	.tar.bz2
CATEGORIES =	net

HOMEPAGE =	https://www.gftp.org/
MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# GPLv2+
PERMIT_PACKAGE =	Yes

WANTLIB += X11 Xcomposite Xcursor Xdamage Xext Xfixes Xi Xinerama
WANTLIB += Xrandr Xrender atk-1.0 c cairo crypto curses fontconfig
WANTLIB += freetype gdk-x11-2.0 gdk_pixbuf-2.0 gio-2.0 glib-2.0
WANTLIB += gobject-2.0 gthread-2.0 gtk-x11-2.0 iconv intl m pango-1.0
WANTLIB += pangocairo-1.0 pangoft2-1.0 pthread readline ssl util
WANTLIB += z

MASTER_SITES =	https://www.gftp.org/

CONFIGURE_STYLE =	gnu

LIB_DEPENDS =	devel/gettext,-runtime \
		x11/gtk+2

RUN_DEPENDS =	devel/desktop-file-utils

.include <bsd.port.mk>
