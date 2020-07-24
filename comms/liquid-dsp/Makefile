# $OpenBSD$

# XXX: Do not update unless updating comms/cubicsdr

COMMENT =	digital signal processing library for SDRs
CATEGORIES =	comms

SHARED_LIBS +=	liquid                    0.0 # 1.3

GH_ACCOUNT =	jgaeddert
GH_PROJECT =	liquid-dsp
GH_TAGNAME =	v1.3.1

HOMEPAGE =	https://liquidsdr.org/
MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# MIT
PERMIT_PACKAGE =	Yes

WANTLIB += c m

CONFIGURE_STYLE =	autoreconf
CONFIGURE_ARGS =	--enable-fftoverride \
			--enable-simdoverride

USE_GMAKE =	Yes
MAKE_FILE =	makefile
MAKE_FLAGS =	LIBliquid_VERSION="${LIBliquid_VERSION}"

AUTOCONF_VERSION =	2.69
AUTOMAKE_VERSION =	1.16

.include <bsd.port.mk>
