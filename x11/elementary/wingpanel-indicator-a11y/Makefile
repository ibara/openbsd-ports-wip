# $OpenBSD$

COMMENT =	universal access indicator for wingpanel
DISTNAME =	${GH_PROJECT}-0.0.1pl20200607

# No releases...
GH_PROJECT =	wingpanel-indicator-a11y
GH_COMMIT =	8a1f4b0ad4243dd181073d1d76b5cf98065115e7

# GPLv2+
PERMIT_PACKAGE =	Yes

WANTLIB += gdk-3 gio-2.0 glib-2.0 gobject-2.0 gtk-3 wingpanel-2.0

MODULES =	devel/dconf

BUILD_DEPENDS =	devel/gettext,-tools \
		devel/gobject-introspection \
		lang/vala \
		x11/elementary/granite

LIB_DEPENDS =	x11/elementary/wingpanel \
		x11/gtk+3

RUN_DEPENDS =	x11/elementary/granite

.include <bsd.port.mk>
