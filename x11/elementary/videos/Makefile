# $OpenBSD$

COMMENT =	video player from elementary OS
PKGNAME =	${DISTNAME:S/^/elementary-/}

GH_PROJECT =	videos
GH_TAGNAME =	2.7.1

# GPLv3+
PERMIT_PACKAGE =	Yes

WANTLIB += X11 c cairo clutter-1.0 clutter-gst-3.0 clutter-gtk-1.0
WANTLIB += gdk-3 gdk_pixbuf-2.0 gee-0.8 gio-2.0 glib-2.0 gobject-2.0
WANTLIB += granite gstpbutils-1.0 gstreamer-1.0 gsttag-1.0 gstvideo-1.0
WANTLIB += gtk-3

MODULES =	devel/dconf

BUILD_DEPENDS =	devel/gettext,-tools \
		devel/gobject-introspection \
		lang/vala

LIB_DEPENDS =	devel/libgee \
		graphics/clutter/clutter-gst \
		graphics/clutter/clutter-gtk \
		multimedia/gstreamer1/plugins-base \
		x11/elementary/granite

RUN_DEPENDS =	devel/desktop-file-utils \
		x11/gtk+3,-guic

CONFIGURE_ENV =	CPPFLAGS="${CPPFLAGS} -I${LOCALBASE}/include" \
		LDFLAGS="${LDFLAGS} -L${LOCALBASE}/lib"

.include <bsd.port.mk>
