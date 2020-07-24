# $OpenBSD$

COMMENT =	cross-platform SDR application
PKGNAME =	${DISTNAME:L}
CATEGORIES =	comms

GH_ACCOUNT =	cjcliffe
GH_PROJECT =	CubicSDR
GH_TAGNAME =	0.2.3

# GPLv2+
PERMIT_PACKAGE =	Yes

WANTLIB += ${COMPILER_LIBCXX} GL GLU SoapySDR c hamlib liquid
WANTLIB += m pulse pulse-simple wx_baseu-3.0 wx_gtk3u_adv-3.0
WANTLIB += wx_gtk3u_core-3.0 wx_gtk3u_gl-3.0 wx_gtk3u_propgrid-3.0

# C++11
COMPILER =	base-clang ports-gcc

MODULES =	devel/cmake

# Must update wxWidgets to >= 3.1 for newer versions
LIB_DEPENDS =	audio/pulseaudio \
		comms/hamlib \
		comms/liquid-dsp \
		comms/soapysdr \
		x11/wxWidgets

RUN_DEPENDS =	comms/soapyrtlsdr \
		devel/desktop-file-utils

CONFIGURE_ARGS =	-DUSE_HAMLIB=1

NO_TEST =	Yes

.include <bsd.port.mk>
