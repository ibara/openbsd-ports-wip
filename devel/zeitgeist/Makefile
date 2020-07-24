# $OpenBSD$

V =		1.0.2
COMMENT =	user activity log service
DISTNAME =	zeitgeist-v${V}
PKGNAME =	zeitgeist-${V}
CATEGORIES =	devel

SHARED_LIBS +=	zeitgeist-2.0             0.0 # 0.0

HOMEPAGE =	https://zeitgeist.freedesktop.org/
MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# LGPLv2.1+
PERMIT_PACKAGE =	Yes

WANTLIB += X11 Xcomposite Xcursor Xdamage Xext Xfixes Xi Xinerama
WANTLIB += Xrandr Xrender atk-1.0 atk-bridge-2.0 c cairo cairo-gobject
WANTLIB += dbus-1 dbus-glib-1 epoxy expat fontconfig freetype
WANTLIB += fribidi gdk-3 gdk_pixbuf-2.0 gio-2.0 glib-2.0 gmodule-2.0
WANTLIB += gobject-2.0 graphite2 gtk-3 harfbuzz iconv intl json-glib-1.0
WANTLIB += m pango-1.0 pangocairo-1.0 pangoft2-1.0 pixman-1 png
WANTLIB += pthread sqlite3 telepathy-glib xcb xcb-render xcb-shm
WANTLIB += z

MASTER_SITES =	https://gitlab.freedesktop.org/zeitgeist/zeitgeist/-/archive/v${V}/

MODULES =	lang/python
MODPY_VERSION =	${MODPY_DEFAULT_VERSION_3}

BUILD_DEPENDS =	devel/gettext,-tools \
		lang/vala \
		textproc/py-rdflib${MODPY_FLAVOR}

LIB_DEPENDS =	devel/gettext \
		devel/json-glib \
		net/telepathy/telepathy-glib \
		x11/gtk+3

CONFIGURE_STYLE =	autoreconf

USE_GMAKE =	Yes

USE_LIBTOOL =	gnu

FAKE_FLAGS =	sysconfdir="${PREFIX}/share/examples/zeitgeist"

AUTOCONF_VERSION =	2.69
AUTOMAKE_VERSION =	1.16

.include <bsd.port.mk>
