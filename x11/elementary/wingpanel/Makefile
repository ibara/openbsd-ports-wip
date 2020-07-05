# $OpenBSD$

COMMENT =	stylish top panel fom elementary OS

SHARED_LIBS +=	wingpanel-2.0             0.0 # 0.2.0

GH_PROJECT =	wingpanel
GH_TAGNAME =	2.3.2

# GPLv3+
PERMIT_PACKAGE =	Yes

#WANTLIB += c cairo canberra gdk-3 gdk_pixbuf-2.0 gee-0.8 gio-2.0
#WANTLIB += git2-glib-1.0 glib-2.0 gmodule-2.0 gobject-2.0 granite
#WANTLIB += gtk-3 intl m pango-1.0 pangocairo-1.0 sqlite3

MODULES =	devel/dconf

BUILD_DEPENDS =	devel/gettext,-tools \
		devel/gobject-introspection \
		lang/vala

LIB_DEPENDS =	x11/elementary/gala \
		x11/gnome/mutter

RUN_DEPENDS =	devel/desktop-file-utils \
		x11/gtk+3,-guic

# XXX: FAKE_FLAGS does not work with meson?
post-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/examples/wingpanel
	mv ${DESTDIR}/etc/xdg/autostart/io.elementary.wingpanel.desktop \
		${PREFIX}/share/examples/wingpanel
	@rm -rf ${DESTDIR}/etc/xdg

.include <bsd.port.mk>
