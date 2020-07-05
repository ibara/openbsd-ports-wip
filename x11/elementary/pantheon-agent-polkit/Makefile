# $OpenBSD$

COMMENT =	policy kit agent for Pantheon

#SHARED_LIBS +=	wingpanel-2.0             0.0 # 0.2.0

GH_PROJECT =	pantheon-agent-polkit
GH_TAGNAME =	1.0.3

# LGPLv2.1+
PERMIT_PACKAGE =	Yes

WANTLIB += c gdk-3 gio-2.0 glib-2.0 gobject-2.0 granite gtk-3
WANTLIB += polkit-agent-1 polkit-gobject-1

BUILD_DEPENDS =	devel/gettext,-tools \
		devel/gobject-introspection \
		lang/vala

LIB_DEPENDS =	sysutils/polkit \
		x11/elementary/granite

RUN_DEPENDS =	devel/desktop-file-utils

# XXX: FAKE_FLAGS does not work with meson?
post-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/examples/pantheon-agent-polkit
	mv ${DESTDIR}/etc/xdg/autostart/io.elementary.desktop.agent-polkit.desktop \
		${PREFIX}/share/examples/pantheon-agent-polkit
	@rm -rf ${DESTDIR}/etc/xdg

.include <bsd.port.mk>
