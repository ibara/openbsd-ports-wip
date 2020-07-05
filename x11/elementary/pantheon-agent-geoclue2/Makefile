# $OpenBSD$

COMMENT =	location services agent for Pantheon

#SHARED_LIBS +=	wingpanel-2.0             0.0 # 0.2.0

GH_PROJECT =	pantheon-agent-geoclue2
GH_TAGNAME =	1.0.4

# GPLv3+
PERMIT_PACKAGE =	Yes

WANTLIB += c gdk-3 gio-2.0 glib-2.0 gobject-2.0 gtk-3

BUILD_DEPENDS =	devel/gettext,-tools \
		devel/gobject-introspection \
		geo/geoclue2 \
		lang/vala

LIB_DEPENDS =	x11/gtk+3

RUN_DEPENDS =	devel/desktop-file-utils \
		geo/geoclue2

# XXX: FAKE_FLAGS does not work with meson?
post-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/examples/pantheon-agent-geoclue2
	mv ${DESTDIR}/etc/xdg/autostart/io.elementary.desktop.agent-geoclue2-daemon.desktop \
		${PREFIX}/share/examples/pantheon-agent-geoclue2
	@rm -rf ${DESTDIR}/etc/xdg

.include <bsd.port.mk>
