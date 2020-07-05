# $OpenBSD$

COMMENT =	privacy indicator for wingpanel
DISTNAME =	${GH_PROJECT}-0.0.1pl20200528

# No releases...
GH_PROJECT =	wingpanel-indicator-privacy
GH_COMMIT =	d3c1f818d8bf5580bc9de396ef202fcd22699e05

# GPLv2+
PERMIT_PACKAGE =	Yes

WANTLIB += bamf3 gee-0.8 gio-2.0 glib-2.0 gobject-2.0 gtk-3 gtop-2.0
WANTLIB += wingpanel-2.0

BUILD_DEPENDS =	devel/gettext,-tools \
		devel/gobject-introspection \
		lang/vala

LIB_DEPENDS =	devel/bamf \
		devel/libgee \
		devel/libgtop2 \
		x11/elementary/wingpanel \
		x11/gtk+3

RUN_DEPENDS =	x11/elementary/granite

.include <bsd.port.mk>
