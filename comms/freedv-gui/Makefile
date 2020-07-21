# $OpenBSD$

COMMENT =	open source digital voice for HF radio
PKGNAME =	freedv-${GH_TAGNAME:S/^v//}
CATEGORIES =	comms

GH_ACCOUNT =	drowe67
GH_PROJECT =	freedv-gui
GH_TAGNAME =	v1.4

# LGPLv2.1+
PERMIT_PACKAGE =	Yes

WANTLIB += ${COMPILER_LIBCXX} c codec2 hamlib lpcnetfreedv m portaudio
WANTLIB += samplerate sndfile speexdsp wx_baseu-3.0 wx_baseu_net-3.0
WANTLIB += wx_gtk3u_adv-3.0 wx_gtk3u_aui-3.0 wx_gtk3u_core-3.0
WANTLIB += wx_gtk3u_html-3.0

# C11
COMPILER =	base-clang ports-gcc

MODULES =	devel/cmake

LIB_DEPENDS =	audio/portaudio-svn \
		audio/speexdsp \
		comms/hamlib \
		comms/lpcnet \
		x11/wxWidgets

RUN_DEPENDS =	devel/desktop-file-utils \
		x11/gtk+3,-guic

NO_TEST =	Yes

.include <bsd.port.mk>
