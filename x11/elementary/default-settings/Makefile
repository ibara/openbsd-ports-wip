# $OpenBSD$

COMMENT =	default settings from elementary OS
DISTNAME =	${GH_PROJECT}-5.1.2pl20200624
PKGNAME =	${DISTNAME:S/^/elementary-/}

# Latest release too old...
GH_PROJECT =	default-settings
GH_COMMIT =	4a1fc685c25aceec0754d7bfc70b4ba2c79c1094

# GPLv3+
PERMIT_PACKAGE =	Yes

MODULES =	devel/dconf

BUILD_DEPENDS =	devel/gettext,-tools \
		devel/gobject-introspection \
		lang/vala \
		sysutils/coreutils

RUN_DEPENDS =	devel/desktop-file-utils

# XXX: Lots of post-install moving to do.
post-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/examples/elementary-default-settings
	mv ${DESTDIR}/etc/gtk-3.0/settings.ini \
		${PREFIX}/share/examples/elementary-default-settings
	mv ${DESTDIR}/etc/io.elementary.appcenter/appcenter.hiddenapps \
		${PREFIX}/share/examples/elementary-default-settings
	mv ${DESTDIR}/etc/profile.d/* \
		${PREFIX}/share/examples/elementary-default-settings
	mv ${DESTDIR}/etc/skel/.config/* \
		${PREFIX}/share/examples/elementary-default-settings
	mv ${DESTDIR}/etc/skel/.inputrc \
		${PREFIX}/share/examples/elementary-default-settings
	mv ${DESTDIR}/etc/sudoers.d/pwfeedback \
		${PREFIX}/share/examples/elementary-default-settings
	rm -rf ${DESTDIR}/etc/gtk-3.0 ${DESTDIR}/etc/io.elementary.appcenter \
		${DESTDIR}/etc/profile.d ${DESTDIR}/etc/skel/.config \
		${DESTDIR}/etc/sudoers.d

.include <bsd.port.mk>
