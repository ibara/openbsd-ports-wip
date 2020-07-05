# $OpenBSD$

COMMENT =	keyboard setter for elementary OS

GH_PROJECT =	switchboard-plug-keyboard
GH_TAGNAME =	2.3.6

# GPLv2+
PERMIT_PACKAGE =	Yes

WANTLIB += gdk-3 gee-0.8 gio-2.0 glib-2.0 gnomekbdui gobject-2.0
WANTLIB += granite gtk-3 switchboard-2.0 xklavier xml2

BUILD_DEPENDS =	devel/gettext,-tools \
		devel/gobject-introspection \
		lang/vala

LIB_DEPENDS =	x11/elementary/switchboard \
		x11/gnome/libgnomekbd

CONFIGURE_ENV =	CPPFLAGS="${CPPFLAGS} -I${LOCALBASE}/include" \
		LDFLAGS="${LDFLAGS} -L${LOCALBASE}/lib"

.include <bsd.port.mk>
