# $OpenBSD$

COMMENT =	sound indicator for wingpanel

GH_PROJECT =	wingpanel-indicator-sound
GH_TAGNAME =	2.1.5

# GPLv3+
PERMIT_PACKAGE =	Yes

#WANTLIB += accountsservice gdk-3 gdk_pixbuf-2.0 gee-0.8 gio-2.0
#WANTLIB += glib-2.0 gobject-2.0 granite gtk-3 wingpanel-2.0

MODULES =	devel/dconf

BUILD_DEPENDS =	devel/gettext,-tools \
		devel/gobject-introspection \
		lang/vala

LIB_DEPENDS =	audio/libcanberra,-gtk \
		audio/pulseaudio \
		devel/libnotify \
		x11/elementary/granite \
		x11/elementary/wingpanel

CONFIGURE_ENV =	CPPFLAGS="${CPPFLAGS} -I${X11BASE}/include" \
		LDFLAGS="${LDFLAGS} -L${X11BASE}/lib"

.include <bsd.port.mk>
