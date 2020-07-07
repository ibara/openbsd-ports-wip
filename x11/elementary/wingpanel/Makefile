# $OpenBSD$

COMMENT =	stylish top panel fom elementary OS
REVISION =	0

SHARED_LIBS +=	wingpanel-2.0             0.0 # 0.2.0

GH_PROJECT =	wingpanel
GH_TAGNAME =	2.3.2

# GPLv3+
PERMIT_PACKAGE =	Yes

WANTLIB += c gala gdk-3 gee-0.8 gio-2.0 glib-2.0 gmodule-2.0 gobject-2.0
WANTLIB += granite gtk-3 mutter-6 lib/mutter-6/mutter-clutter-6
WANTLIB += lib/mutter-6/mutter-cogl-6

MODULES =	devel/dconf

BUILD_DEPENDS =	devel/gettext,-tools \
		lang/vala

LIB_DEPENDS =	x11/elementary/gala \
		x11/gnome/mutter

RUN_DEPENDS =	devel/desktop-file-utils \
		x11/gtk+3,-guic

CONFIGURE_ENV =	LDFLAGS="${LDFLAGS} -rpath ${LOCALBASE}/lib/mutter-6"

# XXX: FAKE_FLAGS does not work with meson?
post-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/examples/wingpanel
	mv ${DESTDIR}/etc/xdg/autostart/io.elementary.wingpanel.desktop \
		${PREFIX}/share/examples/wingpanel
	@rm -rf ${DESTDIR}/etc/xdg

.include <bsd.port.mk>
