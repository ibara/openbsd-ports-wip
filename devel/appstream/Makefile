# $OpenBSD$

COMMENT =	tools and libraries for appstream metadata
REVISION =	0
CATEGORIES =	devel

SHARED_LIBS +=	appstream                 0.0 # 0.12.11

GH_ACCOUNT =	ximion
GH_PROJECT =	appstream
GH_TAGNAME =	v0.12.11

HOMEPAGE =	https://www.freedesktop.org/wiki/Distributions/AppStream/
MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# Library: LGPLv2.1+
# Tools: GPLv2+
PERMIT_PACKAGE =	Yes

WANTLIB += c gio-2.0 glib-2.0 gobject-2.0 intl lmdb soup-2.4 xml2
WANTLIB += yaml-0

# C11
COMPILER =	base-clang ports-gcc

MODULES =	devel/meson

BUILD_DEPENDS =	devel/gettext,-tools \
		devel/gobject-introspection \
		devel/gperf \
		devel/libstemmer-c \
		lang/vala \
		textproc/gtk-doc \
		textproc/libxslt

LIB_DEPENDS =	databases/lmdb \
		devel/libsoup \
		devel/libyaml

CONFIGURE_ARGS =	-Dvapi=true
CONFIGURE_ENV =		CPPFLAGS="${CPPFLAGS} -I${LOCALBASE}/include" \
			LDFLAGS="${LDFLAGS} -L${LOCALBASE}/lib"

do-gen:
	cd ${WRKSRC} && sed -i "s,/usr/share,${LOCALBASE}/share,g" \
		src/as-pool.c \
		src/as-validator-issue-tag.h \
		tools/ascli-actions-mdata.c \
		tools/ascli-actions-misc.c

# XXX: FAKE_FLAGS does not work with meson?
post-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/examples/appstream
	mv ${DESTDIR}/etc/appstream.conf ${PREFIX}/share/examples/appstream

.include <bsd.port.mk>
