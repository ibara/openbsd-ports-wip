# $OpenBSD$

V =		7.1.4
COMMENT =	instrumenting library for the Unity shell
DISTNAME =	libunity_${V}+19.04.20190319.orig
PKGNAME =	libunity-${V}
CATEGORIES =	devel

SHARED_LIBS +=	unity-extras              0.0 # 9.2
SHARED_LIBS +=	unity                     0.0 # 9.2
SHARED_LIBS +=	unity-protocol-private    0.0 # 0.0

HOMEPAGE =	https://launchpad.net/libunity
MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# LGPLv3 only
PERMIT_PACKAGE =	Yes

WANTLIB += X11 Xcomposite Xcursor Xdamage Xext Xfixes Xi Xinerama
WANTLIB += Xrandr Xrender atk-1.0 atk-bridge-2.0 c cairo cairo-gobject
WANTLIB += dbusmenu-glib dee-1.0 epoxy expat ffi fontconfig freetype
WANTLIB += fribidi gdk-3 gdk_pixbuf-2.0 gio-2.0 glib-2.0 gmodule-2.0
WANTLIB += gobject-2.0 graphite2 gthread-2.0 gtk-3 harfbuzz iconv
WANTLIB += icudata icui18n icuuc intl m pango-1.0 pangocairo-1.0
WANTLIB += pangoft2-1.0 pcre pixman-1 png pthread xcb xcb-render
WANTLIB += xcb-shm z

MASTER_SITES =	https://launchpad.net/ubuntu/+archive/primary/+files/

MODULES =	devel/dconf \
		lang/python
MODPY_VERSION =	${MODPY_DEFAULT_VERSION_3}

BUILD_DEPENDS =	devel/gettext,-tools \
		textproc/gsed \
		textproc/intltool

LIB_DEPENDS =	devel/dee \
		x11/libdbusmenu

CONFIGURE_STYLE =	autoreconf
CONFIGURE_ARGS =	--disable-headless-tests

USE_GMAKE =	Yes

AUTOCONF_VERSION =	2.69
AUTOMAKE_VERSION =	1.16

WRKDIST =	${WRKDIR}

# XXX: How to make intltoolize run with CONFIGURE_STYLE=autoreconf?
do-gen:
	cd ${WRKDIST} && ${LOCALBASE}/bin/intltoolize

.include <bsd.port.mk>
