# $OpenBSD$

COMMENT =	cross-platform, terminal-based audio engine
CATEGORIES =	audio

GH_ACCOUNT =	clangen
GH_PROJECT =	musikcube
GH_TAGNAME =	0.60.1

HOMEPAGE =	https://musikcube.com/
MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# BSD
PERMIT_PACKAGE =	Yes

WANTLIB += ${COMPILER_LIBCXX} avcodec avformat avutil boost_atomic-mt
WANTLIB += boost_chrono-mt boost_date_time-mt boost_filesystem-mt
WANTLIB += boost_system-mt boost_thread-mt c crypto curl curses
WANTLIB += ev m microhttpd mp3lame ogg panel sndio swresample
WANTLIB += tag vorbis vorbisenc vorbisfile z

MODULES =	devel/cmake

LIB_DEPENDS =	audio/taglib \
		devel/boost \
		devel/libev \
		graphics/ffmpeg \
		net/curl \
		www/libmicrohttpd

NO_TEST =	Yes

.include <bsd.port.mk>
