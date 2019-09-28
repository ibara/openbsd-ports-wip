# $OpenBSD$

V =		0.5
P =		4
COMMENT =	application matching library
DISTNAME =	bamf-${V}.${P}
CATEGORIES =	devel

SHARED_LIBS +=	bamf3                     0.0 # 2.0

HOMEPAGE =	https://launchpad.net/bamf
MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# LGPLv3+
PERMIT_PACKAGE =	Yes

WANTLIB += X11 X11-xcb XRes Xau Xcomposite Xcursor Xdamage Xext
WANTLIB += Xfixes Xi Xinerama Xrandr Xrender atk-1.0 atk-bridge-2.0
WANTLIB += c cairo cairo-gobject epoxy expat fontconfig freetype
WANTLIB += fribidi gdk-3 gdk_pixbuf-2.0 gio-2.0 glib-2.0 gmodule-2.0
WANTLIB += gobject-2.0 graphite2 gthread-2.0 gtk-3 gtop-2.0 harfbuzz
WANTLIB += iconv intl kvm m pango-1.0 pangocairo-1.0 pangoft2-1.0
WANTLIB += pixman-1 png16 pthread startup-notification-1 wnck-3
WANTLIB += xcb xcb-render xcb-shm xcb-util z

MASTER_SITES =	https://launchpad.net/bamf/${V}/${V}.${P}/+download/

# Will search for it but doesn't use it.
MODULES =	lang/python

LIB_DEPENDS =	devel/libgtop2 \
		devel/libwnck3

CONFIGURE_STYLE =	gnu
CONFIGURE_ARGS =	--disable-dependency-tracking \
			--disable-introspection

USE_GMAKE =	Yes

# Does not work with base libtool.
USE_LIBTOOL =	gnu

# We don't need these things.
post-install:
	@rm -rf ${DESTDIR}/usr/lib
	@rm -rf ${PREFIX}/share/upstart

.include <bsd.port.mk>
