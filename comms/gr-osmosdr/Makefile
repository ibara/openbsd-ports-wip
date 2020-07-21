# $OpenBSD$

COMMENT =	Gnuradio blocks from the OsmoSDR project
CATEGORIES =	comms

SHARED_LIBS +=	gnuradio-osmosdr          0.0 # 0.1.5

# v0.2.0 needs gnuradio-3.8
GH_ACCOUNT =	osmocom
GH_PROJECT =	gr-osmosdr
GH_TAGNAME =	v0.1.5

# GPLv3+
PERMIT_PACKAGE =	Yes

WANTLIB += ${COMPILER_LIBCXX} boost_atomic-mt boost_chrono-mt
WANTLIB += boost_date_time-mt boost_system-mt boost_thread-mt
WANTLIB += gnuradio-blocks gnuradio-fcd gnuradio-pmt gnuradio-runtime
WANTLIB += log4cpp m rtlsdr

COMPILER =	base-clang ports-gcc

MODULES =	devel/cmake

LIB_DEPENDS =	comms/gnuradio \
		comms/rtl-sdr

# Python is broken in this release?
CONFIGURE_ARGS =	-DENABLE_PYTHON=OFF

.include <bsd.port.mk>
