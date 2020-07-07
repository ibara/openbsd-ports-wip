# $OpenBSD$

COMMENT =	music player from elementary OS
PKGNAME =	${DISTNAME:S/^/elementary-/}

SHARED_LIBS +=	io.elementary.music-core  0.0 # 0.1

GH_PROJECT =	music
GH_TAGNAME =	5.0.5

# GPLv3+
PERMIT_PACKAGE =	Yes

WANTLIB += c cairo gda-5.0 gdk-3 gdk_pixbuf-2.0 gee-0.8 gio-2.0
WANTLIB += glib-2.0 gobject-2.0 gpod granite gstpbutils-1.0 gstreamer-1.0
WANTLIB += gsttag-1.0 gtk-3 intl pango-1.0 peas-1.0 peas-gtk-1.0
WANTLIB += tag_c zeitgeist-2.0

MODULES =	devel/dconf

BUILD_DEPENDS =	devel/gettext,-tools \
		lang/vala

LIB_DEPENDS =	audio/libgpod \
		audio/taglib \
		devel/libgee \
		devel/libpeas \
		devel/zeitgeist \
		multimedia/gstreamer1/plugins-base \
		x11/elementary/granite \
		x11/gnome/libgda

RUN_DEPENDS =	devel/desktop-file-utils \
		x11/gtk+3,-guic

.include <bsd.port.mk>
