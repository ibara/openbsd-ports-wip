# $OpenBSD: Makefile,v 1.10 2017/08/24 09:45:23 sthen Exp $

COMMENT=		library for Model-View-Controller type across DBus

DISTNAME=		dee-1.2.7

SHARED_LIBS +=  dee-1.0                   1.0 # 5.1

CATEGORIES=		devel

HOMEPAGE=		https://launchpad.net/dee

# GPLv3 - LGPLv3
PERMIT_PACKAGE=	Yes

WANTLIB += ${COMPILER_LIBCXX} c ffi gio-2.0 glib-2.0 gmodule-2.0
WANTLIB += gobject-2.0 gthread-2.0 iconv icudata icui18n icuuc
WANTLIB += intl m pcre z

MASTER_SITES=	https://launchpad.net/dee/1.0/1.0.14/+download/

MODULES=	lang/python \
		x11/gnome
MODPY_VERSION=	${MODPY_DEFAULT_VERSION_3}

MODGNOME_TOOLS += gobject-introspection vala

CONFIGURE_STYLE=	gnu

USE_GMAKE=	Yes

LIB_DEPENDS=	devel/gettext,-runtime \
		devel/glib2 \
		textproc/icu4c

# MODPY_LIBDIR/gi/overrides/
RUN_DEPENDS=	devel/py-gobject3,${MODPY_FLAVOR}

.include <bsd.port.mk>
