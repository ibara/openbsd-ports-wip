# $OpenBSD$

V =		0.11.4
COMMENT =	simple graphical dock utility
DISTNAME =	plank-${V}
EXTRACT_SUFX =	.tar.xz
CATEGORIES =	x11

SHARED_LIBS +=	plank                     0.0 # 1.0

HOMEPAGE =	https://launchpad.net/plank
MAINTAINER =	Your Name <you@example.com>

# GPLv3+
PERMIT_PACKAGE =	Yes

WANTLIB += X11 X11-xcb XRes Xcomposite Xcursor Xdamage Xext Xfixes
WANTLIB += Xi Xinerama Xrandr Xrender atk-1.0 atk-bridge-2.0 bamf3
WANTLIB += c cairo cairo-gobject epoxy expat ffi fontconfig freetype
WANTLIB += fribidi gdk-3 gdk_pixbuf-2.0 gee-0.8 gio-2.0 glib-2.0
WANTLIB += gmodule-2.0 gobject-2.0 graphite2 gthread-2.0 gtk-3
WANTLIB += harfbuzz iconv intl m pango-1.0 pangocairo-1.0 pangoft2-1.0
WANTLIB += pcre pixman-1 png16 pthread startup-notification-1
WANTLIB += wnck-3 xcb xcb-render xcb-shm xcb-util z

MASTER_SITES =	https://launchpad.net/plank/1.0/${V}/+download/

MODULES =	devel/dconf \
		textproc/intltool

BUILD_DEPENDS =	devel/gettext-tools \
		lang/vala

LIB_DEPENDS =	devel/bamf \
		devel/libgee

RUN_DEPENDS =	devel/desktop-file-utils \
		x11/gtk+3,-guic

CONFIGURE_STYLE =	gnu
CONFIGURE_ARGS =	--disable-apport

USE_GMAKE =	Yes

.include <bsd.port.mk>
