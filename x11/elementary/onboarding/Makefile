# $OpenBSD$

COMMENT =	onboarding app from elementary OS
PKGNAME =	${DISTNAME:S/^/elementary-/}

GH_PROJECT =	onboarding
GH_TAGNAME =	1.2.1

# GPLv3+
PERMIT_PACKAGE =	Yes

WANTLIB += c gdk-3 gee-0.8 gio-2.0 glib-2.0 gobject-2.0 granite
WANTLIB += gtk-3 handy-0.0 m

MODULES =	devel/dconf

BUILD_DEPENDS =	devel/gettext,-tools \
		devel/gobject-introspection \
		lang/vala

LIB_DEPENDS =	x11/elementary/granite \
		x11/libhandy

RUN_DEPENDS =	devel/desktop-file-utils \
		x11/gtk+3,-guic

# XXX: FAKE_FLAGS does not work with meson?
post-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/examples/onboarding
	mv ${DESTDIR}/etc/xdg/autostart/io.elementary.onboarding.desktop \
		${PREFIX}/share/examples/onboarding
	@rm -rf ${DESTDIR}/etc/xdg

.include <bsd.port.mk>
