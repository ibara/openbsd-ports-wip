# $OpenBSD$

COMMENT =	small and lightweight text editor
CATEGORIES =	x11

GH_ACCOUNT =	linuxmint
GH_PROJECT =	xed
GH_TAGNAME =	2.2.3

MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# GPLv2+
PERMIT_PACKAGE =	Yes

WANTLIB += X11 atk-1.0 c cairo gdk-3 gdk_pixbuf-2.0 gio-2.0 girepository-1.0
WANTLIB += glib-2.0 gobject-2.0 gspell-1 gtk-3 gtksourceview-3.0
WANTLIB += intl m pango-1.0 peas-1.0 peas-gtk-1.0 xapp xml2

MODULES =	devel/meson \
		x11/gnome

BUILD_DEPENDS =	devel/gettext,-tools

LIB_DEPENDS =	devel/libpeas \
		textproc/gspell \
		x11/gtksourceview3 \
		x11/xapps

RUN_DEPENDS =	devel/desktop-file-utils \
		devel/gsettings-desktop-schemas

.include <bsd.port.mk>
