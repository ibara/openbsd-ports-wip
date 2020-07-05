# $OpenBSD$

COMMENT =	DBus interfaces to implement portals
DISTNAME =	${GH_PROJECT}-0.0.1pl20191023

#SHARED_LIBS +=	wingpanel-2.0             0.0 # 0.2.0

# No releases...
GH_PROJECT =	xdg-desktop-portal-pantheon
GH_COMMIT =	1d03aae5f58becafb0db4c722456ab43aa36e22d

# GPLv3+
PERMIT_PACKAGE =	Yes

#WANTLIB += polkit-agent-1 polkit-gobject-1

BUILD_DEPENDS =	devel/gettext,-tools \
		devel/gobject-introspection \
		lang/vala

CONFIGURE_ARGS =	-Dsystemduserunitdir="${PREFIX}"

.include <bsd.port.mk>
