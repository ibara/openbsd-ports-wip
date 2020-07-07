# $OpenBSD$

V =		1.30.0
COMMENT =	cross-desktop display manager
DISTNAME =	lightdm-${V}
EXTRACT_SUFX =	.tar.xz
CATEGORIES =	x11

SHARED_LIBS +=	lightdm-gobject-1         0.0 # 0.0
SHARED_LIBS +=	lightdm-qt5-3             0.0 # 0.0

HOMEPAGE =	https://github.com/canonical/lightdm/
MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# GPLv3+
PERMIT_PACKAGE =	Yes

WANTLIB += ${COMPILER_LIBCXX} GL Qt5Core Qt5DBus Qt5Gui X11 X11-xcb
WANTLIB += Xau Xdamage Xdmcp Xext Xfixes Xi Xxf86vm c dbus-1 double-conversion
WANTLIB += drm execinfo expat ffi freetype gcrypt gio-2.0 glapi
WANTLIB += glib-2.0 gmodule-2.0 gobject-2.0 gpg-error graphite2
WANTLIB += gthread-2.0 harfbuzz iconv icudata icui18n icuio icuuc
WANTLIB += intl lzma m pam pcre pcre2-16 png xcb xcb-dri2 xcb-dri3
WANTLIB += xcb-glx xcb-present xcb-sync xcb-xfixes xkbfile xklavier
WANTLIB += xml2 xshmfence z zstd

MASTER_SITES =	https://github.com/canonical/lightdm/releases/download/${V}/

COMPILER =	base-clang ports-gcc

BUILD_DEPENDS =	devel/gettext,-tools

LIB_DEPENDS =	security/libgcrypt \
		security/openpam \
		x11/gnome/libxklavier \
		x11/qt5/qtbase

CONFIGURE_STYLE =	gnu
CONFIGURE_ARGS =	--disable-tests \
			--with-greeter-user="_lightdm"
CONFIGURE_ENV =		CPPFLAGS="${CPPFLAGS} -I${LOCALBASE}/include" \
			LDFLAGS="${LDFLAGS} -L${LOCALBASE}/lib"

USE_GMAKE =	Yes

FAKE_FLAGS =	sysconfdir="${PREFIX}/share/examples/lightdm"

.include <bsd.port.mk>
