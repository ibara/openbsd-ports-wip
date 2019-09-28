# $OpenBSD$

V =		0.10
COMMENT =	ncurses file manager with vi keybindings
DISTNAME =	vifm-${V}
EXTRACT_SUFX =	.tar.bz2
CATEGORIES =	sysutils

HOMEPAGE =	https://vifm.info/
MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# GPLv2+
PERMIT_PACKAGE =	Yes

WANTLIB += X11 Xcomposite Xcursor Xdamage Xext Xfixes Xi Xinerama
WANTLIB += Xrandr Xrender atk-1.0 c cairo curses fontconfig freetype
WANTLIB += gdk-x11-2.0 gdk_pixbuf-2.0 gio-2.0 glib-2.0 gobject-2.0
WANTLIB += gtk-x11-2.0 intl m magic pango-1.0 pangocairo-1.0 pangoft2-1.0
WANTLIB += pthread z

MASTER_SITES =	https://github.com/vifm/vifm/releases/download/v${V}/

# Looks for vim at configure time. Needed at runtime to be useful.
BUILD_DEPENDS =	editors/vim

LIB_DEPENDS =	devel/libmagic \
		x11/gtk+2

RUN_DEPENDS =	${BUILD_DEPENDS} \
		devel/desktop-file-utils

CONFIGURE_STYLE =	gnu

# Test is crazy broken, not even worth the attempt.
NO_TEST =	Yes

.include <bsd.port.mk>
