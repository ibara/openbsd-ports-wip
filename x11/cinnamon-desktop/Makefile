# $OpenBSD$

COMMENT =	cinnamon-desktop library
CATEGORIES =	x11

SHARED_LIBS +=	cinnamon-desktop          0.0 # 0.0
SHARED_LIBS +=	cvc                       0.0 # 0.0

GH_ACCOUNT =	linuxmint
GH_PROJECT =	cinnamon-desktop
GH_TAGNAME =	4.2.0

MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# GPLv2+
PERMIT_PACKAGE =	Yes

WANTLIB += X11 Xext Xrandr cairo gdk-3 gdk_pixbuf-2.0 gio-2.0
WANTLIB += glib-2.0 gobject-2.0 gtk-3 intl m pulse pulse-mainloop-glib
WANTLIB += xkbfile

MODULES =	devel/meson \
		x11/gnome

BUILD_DEPENDS =	devel/gettext,-tools

LIB_DEPENDS =	audio/pulseaudio \
		x11/gtk+3

RUN_DEPENDS =	devel/desktop-file-utils \
		devel/gsettings-desktop-schemas

.include <bsd.port.mk>
