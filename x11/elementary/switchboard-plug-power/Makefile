# $OpenBSD$

# XXX: Segfaults when selecting.

COMMENT =	power setter for elementary OS

GH_PROJECT =	switchboard-plug-power
GH_TAGNAME =	2.4.2

# GPLv2+
PERMIT_PACKAGE =	Yes

WANTLIB += c gee-0.8 gio-2.0 glib-2.0 gobject-2.0 gtk-3 polkit-gobject-1
WANTLIB += switchboard-2.0

BUILD_DEPENDS =	devel/gettext,-tools \
		devel/gobject-introspection \
		lang/vala

LIB_DEPENDS =	sysutils/polkit \
		x11/elementary/switchboard

RUN_DEPENDS =	x11/dbus,-suid

.include <bsd.port.mk>
