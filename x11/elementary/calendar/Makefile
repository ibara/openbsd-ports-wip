# $OpenBSD$

# XXX: Bus error on startup!

COMMENT =	calendar application from elementary OS
PKGNAME =	${DISTNAME:S/^/elementary-/}

SHARED_LIBS +=	elementary-calendar       0.0 # 0.1

GH_PROJECT =	calendar
GH_TAGNAME =	5.0.6

# GPLv3+
PERMIT_PACKAGE =	Yes

WANTLIB += c champlain-0.12 champlain-gtk-0.12 clutter-1.0 clutter-gtk-1.0
WANTLIB += ecal-2.0 edataserver-1.2 edataserverui-1.2 folks gdk-3
WANTLIB += gdk_pixbuf-2.0 gee-0.8 geoclue-2 geocode-glib gio-2.0
WANTLIB += glib-2.0 gmodule-2.0 gobject-2.0 granite gtk-3 ical-glib
WANTLIB += intl m soup-2.4

MODULES =	devel/dconf

BUILD_DEPENDS =	devel/gettext,-tools \
		devel/gobject-introspection \
		lang/vala

LIB_DEPENDS =	databases/evolution-data-server \
		devel/libgee \
		geo/libchamplain \
		graphics/clutter/clutter-gtk \
		net/telepathy/folks \
		x11/elementary/granite

RUN_DEPENDS =	devel/desktop-file-utils

# XXX: FAKE_FLAGS does not work with meson?
post-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/examples/elementary-calendar
	mv ${DESTDIR}/etc/xdg/autostart/io.elementary.calendar-daemon.desktop \
		${PREFIX}/share/examples/elementary-calendar
	@rm -rf ${DESTDIR}/etc/xdg

.include <bsd.port.mk>
