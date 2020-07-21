# $OpenBSD$

COMMENT =	Mode S decoder for RTLSDR devices
DISTNAME =	${GH_PROJECT}-0.0.0.20200203
CATEGORIES =	comms

# No releases...
GH_ACCOUNT =	antirez
GH_PROJECT =	dump1090
GH_COMMIT =	de61bd564f1aa929bae414a70e421acd0b81789a

# BSD
PERMIT_PACKAGE =	Yes

WANTLIB += c m pthread rtlsdr usb-1.0

LIB_DEPENDS =	comms/rtl-sdr

USE_GMAKE =	Yes
MAKE_FLAGS =	CC="${CC}" \
		CFLAGS="${CFLAGS} `pkg-config --cflags librtlsdr`" \
		LDFLAGS="${LDFLAGS} `pkg-config --libs librtlsdr -pthread -lm`"

NO_TEST =	Yes

# No install routine
do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/dump1090 ${PREFIX}/bin

.include <bsd.port.mk>
