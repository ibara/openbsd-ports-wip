# $OpenBSD$

COMMENT =	applications menu for Pantheon

#SHARED_LIBS +=	wingpanel-2.0             0.0 # 0.2.0

GH_PROJECT =	applications-menu
GH_TAGNAME =	2.7.1

# GPLv3+
PERMIT_PACKAGE =	Yes

WANTLIB += c gdk-3 gdk_pixbuf-2.0 gee-0.8 gio-2.0 glib-2.0 gnome-menu-3
WANTLIB += gobject-2.0 granite gtk-3 handy-0.0 intl json-glib-1.0
WANTLIB += plank switchboard-2.0 wingpanel-2.0 zeitgeist-2.0

MODULES =	devel/dconf

BUILD_DEPENDS =	devel/appstream \
		devel/gettext,-tools \
		devel/gobject-introspection \
		devel/libunity \
		lang/vala

LIB_DEPENDS =	devel/zeitgeist \
		x11/elementary/dock \
		x11/elementary/switchboard \
		x11/elementary/wingpanel \
		x11/libhandy

RUN_DEPENDS =	devel/desktop-file-utils

# XXX: FAKE_FLAGS does not work with meson?
post-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/examples/pantheon
	mv ${DESTDIR}/etc/xdg/menus/pantheon-applications.menu \
		${PREFIX}/share/examples/pantheon
	@rm -rf ${DESTDIR}/etc/xdg/

.include <bsd.port.mk>
