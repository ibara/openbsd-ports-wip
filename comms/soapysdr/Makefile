# $OpenBSD$

V =		0.7.2
COMMENT =	vendor and platform neutral SDR support library
PKGNAME =	soapysdr-${V}
CATEGORIES =	comms

SHARED_LIBS +=	SoapySDR                  0.0 # 0.7

GH_ACCOUNT =	pothosware
GH_PROJECT =	SoapySDR
GH_TAGNAME =	soapy-sdr-${V}

HOMEPAGE =	https://github.com/pothosware/SoapySDR/wiki
MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# Boost 1.0
PERMIT_PACKAGE =	Yes

WANTLIB += ${COMPILER_LIBCXX} c m

# C++11
COMPILER =	base-clang ports-gcc

MODULES =	devel/cmake

# Optional; broken detection
CONFIGURE_ARGS =	-DENABLE_PYTHON=OFF \
			-DENABLE_PYTHON3=OFF

.include <bsd.port.mk>
