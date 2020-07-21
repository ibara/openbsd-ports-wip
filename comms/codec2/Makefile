# $OpenBSD$

COMMENT =	open source speech codec for SSB
CATEGORIES =	comms

SHARED_LIBS +=	codec2                    0.0 # 0.9

GH_ACCOUNT =	drowe67
GH_PROJECT =	codec2
GH_TAGNAME =	v0.9.2

HOMEPAGE =	https://www.rowetel.com/codec2.html
MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# LGPLv2.1+
PERMIT_PACKAGE =	Yes

WANTLIB += c m

# C11
COMPILER =	base-clang ports-gcc

MODULES =	devel/cmake

NO_TEST =	Yes

.include <bsd.port.mk>
