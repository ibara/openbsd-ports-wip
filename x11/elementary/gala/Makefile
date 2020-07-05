# $OpenBSD$

COMMENT =	window manager from elementary OS

SHARED_LIBS +=	gala                      0.0 # 0.0

GH_PROJECT =	gala
GH_TAGNAME =	3.3.2

# GPLv3+
PERMIT_PACKAGE =	Yes

WANTLIB += Xfixes bamf3 c cairo canberra canberra-gtk3 gdk-3 gdk_pixbuf-2.0
WANTLIB += gee-0.8 gio-2.0 glib-2.0 gmodule-2.0 gnome-desktop-3
WANTLIB += gobject-2.0 granite graphene-1.0 gtk-3 m mutter-6 plank

MODULES =	devel/dconf

BUILD_DEPENDS =	devel/gettext,-tools \
		devel/gobject-introspection \
		lang/vala

LIB_DEPENDS =	audio/libcanberra,-gtk3 \
		devel/bamf \
		devel/libgee \
		graphics/graphene \
		x11/elementary/dock \
		x11/elementary/granite \
		x11/gnome/mutter

RUN_DEPENDS =	devel/desktop-file-utils \
		x11/gtk+3,-guic

CONFIGURE_ENV =	CPPFLAGS="${CPPFLAGS} -I${X11BASE}/include" \
		LDFLAGS="${LDFLAGS} -L${X11BASE}/lib"

# XXX: FAKE_FLAGS does not work with meson?
post-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/examples/gala
	mv ${DESTDIR}/etc/xdg/autostart/gala-daemon.desktop \
		${PREFIX}/share/examples/gala
	@rm -rf ${DESTDIR}/etc/xdg

.include <bsd.port.mk>
