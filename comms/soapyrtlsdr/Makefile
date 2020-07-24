# $OpenBSD$

V =		0.3.1
COMMENT =	SoapySDR RTL-SDR support module
PKGNAME =	soapyrtlsdr-${V}
CATEGORIES =	comms

GH_ACCOUNT =	pothosware
GH_PROJECT =	SoapyRTLSDR
GH_TAGNAME =	soapy-rtl-sdr-${V}

HOMEPAGE =	https://github.com/pothosware/SoapyRTLSDR/wiki
MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# MIT
PERMIT_PACKAGE =	Yes

WANTLIB += ${COMPILER_LIBCXX} SoapySDR m rtlsdr

# C++11
COMPILER =	base-clang ports-gcc

MODULES =	devel/cmake

LIB_DEPENDS =	comms/rtl-sdr \
		comms/soapysdr

NO_TEST =	Yes

.include <bsd.port.mk>
