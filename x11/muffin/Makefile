# $OpenBSD$

COMMENT =	window management library for the Cinnamon desktop
CATEGORIES =	x11

SHARED_LIBS +=	muffin                    0.0 # 0.0

GH_ACCOUNT =	linuxmint
GH_PROJECT =	muffin
GH_TAGNAME =	4.2.2

MAINTAINER =	Your Name <you@example.com>

# GPLv2+
PERMIT_PACKAGE =	Yes

WANTLIB += EGL GL ICE SM X11 X11-xcb Xau Xcomposite Xcursor Xdamage
WANTLIB += Xdmcp Xext Xfixes Xi Xinerama Xrandr Xrender Xtst Xxf86vm
WANTLIB += atk-1.0 atk-bridge-2.0 c cairo cairo-gobject canberra
WANTLIB += canberra-gtk3 cinnamon-desktop drm epoxy expat ffi
WANTLIB += fontconfig freetype fribidi gbm gdk-3 gdk_pixbuf-2.0
WANTLIB += gio-2.0 girepository-1.0 glapi glib-2.0 gmodule-2.0
WANTLIB += gobject-2.0 graphite2 gthread-2.0 gtk-3 harfbuzz iconv
WANTLIB += intl json-glib-1.0 ltdl m ogg pango-1.0 pangocairo-1.0
WANTLIB += pangoft2-1.0 pcre pixman-1 png pthread startup-notification-1
WANTLIB += vorbis vorbisfile xcb xcb-dri2 xcb-dri3 xcb-glx xcb-present
WANTLIB += xcb-randr xcb-render xcb-res xcb-shm xcb-sync xcb-util
WANTLIB += xcb-xfixes xcb-xkb xkbcommon xkbcommon-x11 xkbfile
WANTLIB += xshmfence z

BUILD_DEPENDS =	${MODGNU_AUTOCONF_DEPENDS} \
		${MODGNU_AUTOMAKE_DEPENDS} \
		devel/gettext,-tools

LIB_DEPENDS =	audio/libcanberra,-gtk3 \
		devel/gobject-introspection \
		devel/json-glib \
		devel/startup-notification \
		x11/cinnamon-desktop \
		x11/xkbcommon

RUN_DEPENDS =	devel/desktop-file-utils \
		devel/gsettings-desktop-schemas

CONFIGURE_STYLE =	gnu
CONFIGURE_ARGS =	--enable-wayland-egl-server=no \
			--disable-Werror

USE_GMAKE =	Yes

AUTOCONF_VERSION =	2.69
AUTOMAKE_VERSION =	1.16

do-gen:
	cd ${WRKSRC} && \
		mkdir -p m4 && \
		glib-gettextize --force --copy && \
		gtkdocize --copy && \
		intltoolize --force --copy --automake && \
		${SETENV} AUTOCONF_VERSION=${AUTOCONF_VERSION} \
		AUTOMAKE_VERSION=${AUTOMAKE_VERSION} \
		autoreconf --verbose --force --install

.include <bsd.port.mk>
