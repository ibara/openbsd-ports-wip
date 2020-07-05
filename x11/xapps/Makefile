# $OpenBSD$

COMMENT =	cross-desktop libraries and common resources
CATEGORIES =	x11

SHARED_LIBS +=	xapp                      0.0 # 0.0

GH_ACCOUNT =	linuxmint
GH_PROJECT =	xapps
GH_TAGNAME =	1.4.9

MAINTAINER =	Your Name <you@example.com>

# LGPLv3+
PERMIT_PACKAGE =	Yes

WANTLIB += X11 cairo gdk-3 gdk_pixbuf-2.0 gio-2.0 glib-2.0 gnomekbdui
WANTLIB += gobject-2.0 gtk-3 m

MODULES =	devel/meson \
		x11/gnome

BUILD_DEPENDS =	devel/gettext,-tools

LIB_DEPENDS =	x11/gnome/libgnomekbd

RUN_DEPENDS =	devel/gsettings-desktop-schemas

post-install:
	@rm -f ${PREFIX}/lib/libxapp.so{,.1}

.include <bsd.port.mk>
