# $OpenBSD$

COMMENT =	C++ wrapper library for DBus
CATEGORIES =	devel

GH_ACCOUNT =	dbus-cxx
GH_PROJECT =	dbus-cxx
GH_TAGNAME =	0.11.0

HOMEPAGE =	https://dbus-cxx.github.io/
MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# GPLv3 only
PERMIT_PACKAGE =	Yes

#WANTLIB += c fuse lzma pthread zstd

MODULES =	devel/cmake

LIB_DEPENDS =	x11/dbus

CONFIGURE_ARGS =	-DENABLE_TOOLS=ON \
			-DCMAKE_CXX_FLAGS="${CXXFLAGS} -I${LOCALBASE}/include -I${WRKSRC}/tools/libcppgenerate" \
			-DCMAKE_EXE_LINKER_FLAGS="${LDFLAGS} -static"

USE_NINJA =	No

NO_TEST =	Yes

.include <bsd.port.mk>
