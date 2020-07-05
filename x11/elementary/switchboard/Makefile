# $OpenBSD$

COMMENT =	extensible system settings app designed for elementary OS

SHARED_LIBS +=	switchboard-2.0           0.0 # 2.0

GH_PROJECT =	switchboard
GH_TAGNAME =	2.4.0

# LGPLv2.1+
PERMIT_PACKAGE =	Yes

WANTLIB += c clutter-gtk-1.0 gee-0.8 gio-2.0 glib-2.0 gmodule-2.0
WANTLIB += gobject-2.0 granite gtk-3

MODULES =	devel/dconf

BUILD_DEPENDS =	devel/gettext,-tools \
		devel/gobject-introspection \
		lang/vala

LIB_DEPENDS =	graphics/clutter/clutter-gtk \
		x11/elementary/granite

RUN_DEPENDS =	devel/desktop-file-utils

.include <bsd.port.mk>
