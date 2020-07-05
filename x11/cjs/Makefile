# $OpenBSD$

COMMENT =	Cinnamon Javascript interpreter
CATEGORIES =	x11

SHARED_LIBS +=	cjs                       0.0 # 0.0

GH_ACCOUNT =	linuxmint
GH_PROJECT =	cjs
GH_TAGNAME =	4.2.0

MAINTAINER =	Your Name <you@example.com>

# GPLv2+
PERMIT_PACKAGE =	Yes

WANTLIB += ${COMPILER_LIBCXX} X11 Xcomposite Xcursor Xdamage Xext
WANTLIB += Xfixes Xi Xinerama Xrandr Xrender atk-1.0 atk-bridge-2.0
WANTLIB += c cairo cairo-gobject curses epoxy expat ffi fontconfig
WANTLIB += freetype fribidi gdk-3 gdk_pixbuf-2.0 gio-2.0 girepository-1.0
WANTLIB += glib-2.0 gmodule-2.0 gobject-2.0 graphite2 gthread-2.0
WANTLIB += gtk-3 harfbuzz iconv icudata icui18n icuuc intl m mozjs-52
WANTLIB += nspr4 pango-1.0 pangocairo-1.0 pangoft2-1.0 pcre pixman-1
WANTLIB += plc4 plds4 png readline xcb xcb-render xcb-shm z

BUILD_DEPENDS =	${MODGNU_AUTOCONF_DEPENDS} \
		${MODGNU_AUTOMAKE_DEPENDS} \
		devel/gettext,-tools

LIB_DEPENDS =	devel/gobject-introspection \
		devel/spidermonkey52 \
		x11/gtk+3

CONFIGURE_STYLE =	gnu
CONFIGURE_ARGS =	--disable-dependency-tracking \
			--disable-profiler

USE_GMAKE =	Yes

AUTOCONF_VERSION =	2.69
AUTOMAKE_VERSION =	1.16

do-gen:
	cd ${WRKSRC} && \
		${SETENV} AUTOCONF_VERSION=${AUTOCONF_VERSION} \
			AUTOMAKE_VERSION=${AUTOMAKE_VERSION} \
				autoreconf -fi

.include <bsd.port.mk>
