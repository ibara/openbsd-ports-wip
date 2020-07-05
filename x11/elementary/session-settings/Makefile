# $OpenBSD$

COMMENT =	session settings from elementary OS
DISTNAME =	session-settings-5.0.4pl20200611
PKGNAME =	${DISTNAME:S/^/elementary-/}

# Latest release is too old...
GH_PROJECT =	session-settings
GH_COMMIT =	130c9ae221913032ed18bcf6d21e3dcdba3c4209

# GPLv3+
PERMIT_PACKAGE =	Yes

BUILD_DEPENDS =	devel/gettext,-tools \
		x11/elementary/onboarding

.include <bsd.port.mk>
