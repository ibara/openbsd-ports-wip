# $OpenBSD$

COMMENT =	lightweight login manager from elementary OS
PKGNAME =	${DISTNAME:S/^/elementary-/}

#SHARED_LIBS +=	pantheon-files-core       0.0 # 0.0
#SHARED_LIBS +=	pantheon-files-widgets    0.0 # 0.0

GH_PROJECT =	greeter
GH_TAGNAME =	5.0.4

# GPLv3+
PERMIT_PACKAGE =	Yes

WANTLIB += accountsservice c cairo gdk-3 gdk_pixbuf-2.0 gee-0.8
WANTLIB += gio-2.0 glib-2.0 gobject-2.0 granite gtk-3 intl lightdm-gobject-1
WANTLIB += mutter-6 lib/mutter-6/mutter-clutter-6

MODULES =	devel/dconf

BUILD_DEPENDS =	devel/gettext,-tools \
		devel/gobject-introspection \
		lang/vala

LIB_DEPENDS =	devel/libgee \
		sysutils/accountsservice \
		x11/elementary/granite \
		x11/lightdm \
		x11/gnome/mutter

RUN_DEPENDS =	devel/desktop-file-utils

# XXX: FAKE_FLAGS does not work with meson?
post-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/examples/elementary-greeter
	mv ${DESTDIR}/etc/lightdm/io.elementary.greeter.conf \
		${PREFIX}/share/examples/elementary-greeter
	@rm -rf ${DESTDIR}/etc/lightdm

.include <bsd.port.mk>
