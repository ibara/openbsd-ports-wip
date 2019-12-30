# $OpenBSD$

COMMENT =	open extensible standard for audio plugins
DISTNAME =	lv2-1.16.0
EXTRACT_SUFX =	.tar.bz2
CATEGORIES =	audio

HOMEPAGE =	http://lv2plug.in/
MAINTAINER =	Your Name <you@example.com>

# GPLv2+
PERMIT_PACKAGE =	Yes

WANTLIB += X11 Xau Xcomposite Xcursor Xdamage Xdmcp Xext Xfixes
WANTLIB += Xi Xinerama Xrandr Xrender atk-1.0 cairo expat ffi
WANTLIB += fontconfig freetype fribidi gdk-x11-2.0 gdk_pixbuf-2.0
WANTLIB += gio-2.0 glib-2.0 gmodule-2.0 gobject-2.0 graphite2
WANTLIB += gtk-x11-2.0 harfbuzz intl m pango-1.0 pangocairo-1.0
WANTLIB += pangoft2-1.0 pcre pixman-1 png pthread sndfile xcb
WANTLIB += xcb-render xcb-shm z

MASTER_SITES =	http://lv2plug.in/spec/

MODULES =	lang/python

LIB_DEPENDS =	audio/libsndfile \
		x11/gtk+2

NO_TEST =	Yes

do-configure:
	cd ${WRKSRC} && ./waf configure

do-build:
	cd ${WRKSRC} && ./waf

do-install:
	cd ${WRKSRC} && ./waf install

.include <bsd.port.mk>
