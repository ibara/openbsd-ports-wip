# $OpenBSD$

COMMENT =	file browser from elementary OS
PKGNAME =	${DISTNAME:S/^/elementary-/}

SHARED_LIBS +=	pantheon-files-core       0.0 # 0.0
SHARED_LIBS +=	pantheon-files-widgets    0.0 # 0.0

GH_PROJECT =	files
GH_TAGNAME =	4.4.3

# GPLv3+
PERMIT_PACKAGE =	Yes

WANTLIB += c cairo canberra dbusmenu-glib gdk-3 gdk_pixbuf-2.0
WANTLIB += gee-0.8 gio-2.0 git2-glib-1.0 glib-2.0 gmodule-2.0
WANTLIB += gobject-2.0 granite gtk-3 intl m pango-1.0 pangocairo-1.0
WANTLIB += plank sqlite3 unity zeitgeist-2.0

MODULES =	devel/dconf

BUILD_DEPENDS =	devel/gettext,-tools \
		devel/gobject-introspection \
		lang/vala

LIB_DEPENDS =	audio/libcanberra \
		databases/sqlite3 \
		devel/libgee \
		devel/libgit2/libgit2-glib \
		devel/libunity \
		devel/zeitgeist \
		x11/elementary/dock \
		x11/elementary/granite

RUN_DEPENDS =	devel/desktop-file-utils

# Needs GNU cp
TEST_DEPENDS =	sysutils/coreutils

# XXX: glib/vala problem?
# plugins/pantheon-files-ctags/5bddcf7@@pantheon-files-ctags@sha/plugin.c:2156:2: error: non-void function 'marlin_plugins_ctags_rreal_update_file_info_for_recent_co' should return a value [-Wreturn-type]
#         g_return_if_fail (_data_->file != NULL);
#         ^
# ${LOCALBASE}/include/glib-2.0/glib/gmessages.h:631:9: note: expanded from macro 'g_return_if_fail'
#         return; \
#         ^
CFLAGS +=	-Wno-return-type

.include <bsd.port.mk>
