# $OpenBSD$

COMMENT =	desktop appearance setter for elementary OS

GH_PROJECT =	switchboard-plug-pantheon-shell
GH_TAGNAME =	2.8.4

# GPLv3+
PERMIT_PACKAGE =	Yes

WANTLIB += c gdk-3 gdk_pixbuf-2.0 gee-0.8 gexiv2 gio-2.0 glib-2.0
WANTLIB += gnome-desktop-3 gobject-2.0 granite gtk-3 intl m plank
WANTLIB += switchboard-2.0

BUILD_DEPENDS =	devel/gettext,-tools \
		devel/gobject-introspection \
		lang/vala \
		x11/gnome/settings-daemon

LIB_DEPENDS =	graphics/libgexiv2 \
		x11/elementary/dock \
		x11/elementary/switchboard \
		x11/gnome/desktop

RUN_DEPENDS =	x11/gnome/settings-daemon

.include <bsd.port.mk>
