# $OpenBSD$

# XXX: Segfault on load!

COMMENT =	sound setter for elementary OS

GH_PROJECT =	switchboard-plug-sound
GH_TAGNAME =	2.2.4

# LGPLv2.1+
PERMIT_PACKAGE =	Yes

WANTLIB += canberra canberra-gtk3 gee-0.8 gio-2.0 glib-2.0 gobject-2.0
WANTLIB += granite gtk-3 pulse pulse-mainloop-glib switchboard-2.0

BUILD_DEPENDS =	devel/gettext,-tools \
		devel/gobject-introspection \
		lang/vala

LIB_DEPENDS =	audio/libcanberra,-gtk3 \
		audio/pulseaudio \
		x11/elementary/switchboard

CONFIGURE_ENV =	CPPFLAGS="${CPPFLAGS} -I${X11BASE}/include" \
		LDFLAGS="${LDFLAGS} -L${X11BASE}/lib"

.include <bsd.port.mk>
