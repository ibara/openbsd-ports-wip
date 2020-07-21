# $OpenBSD$

COMMENT =	frequency scanner for Gqrx SDR
CATEGORIES =	comms

GH_ACCOUNT =	neural75
GH_PROJECT =	gqrx-scanner
GH_TAGNAME =	v1.0.2

# MIT
PERMIT_PACKAGE =	Yes

WANTLIB += c m

MODULES =	devel/cmake

RUN_DEPENDS =	comms/gqrx

# -DOSX is their way of saying any non-Linu
CONFIGURE_ARGS =	-DCMAKE_C_FLAGS="${CFLAGS} -DOSX"

NO_TEST =	Yes

.include <bsd.port.mk>
