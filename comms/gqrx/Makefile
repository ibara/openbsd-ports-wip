# $OpenBSD$

COMMENT =	Qt-based SDR receiver
CATEGORIES =	comms

GH_ACCOUNT =	csete
GH_PROJECT =	gqrx
GH_TAGNAME =	v2.12.1

# GPLv3+
PERMIT_PACKAGE =	Yes

WANTLIB += ${COMPILER_LIBCXX} Qt5Core Qt5Gui Qt5Network Qt5Svg
WANTLIB += Qt5Widgets boost_program_options-mt boost_system-mt
WANTLIB += c gnuradio-analog gnuradio-audio gnuradio-blocks gnuradio-digital
WANTLIB += gnuradio-fft gnuradio-filter gnuradio-osmosdr gnuradio-pmt
WANTLIB += gnuradio-runtime log4cpp m portaudio volk

MODULES =	devel/cmake \
		x11/qt5

LIB_DEPENDS =	audio/portaudio-svn \
		comms/gr-osmosdr \
		x11/qt5/qtsvg

CONFIGURE_ARGS =	-DLINUX_AUDIO_BACKEND="Portaudio"

NO_TEST =	Yes

.include <bsd.port.mk>
