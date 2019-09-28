# $OpenBSD$

COMMENT =	simple software MIDI player
DISTNAME =	wildmidi-0.4.2
CATEGORIES =	audio

SHARED_LIBS +=	WildMidi                  0.0 # 2.0

HOMEPAGE =	https://www.mindwerks.net/projects/wildmidi/
MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# Player: GPLv3+
# Library: LGPLv3+
PERMIT_PACKAGE =	Yes

WANTLIB += c m openal

MASTER_SITES =	https://github.com/Mindwerks/wildmidi/archive/

MODULES =	devel/cmake

LIB_DEPENDS =	audio/openal

# Needs the timgm6mb patches
RUN_DEPENDS =	audio/timidity

CONFIGURE_ARGS =	-DWANT_OPENAL=ON \
			-DWILDMIDI_CFG="${SYSCONFDIR}/wildmidi/wildmidi.cfg"

NO_TEST =	Yes

# GitHub tarball naming weirdness
WRKDIST =	${WRKDIR}/wildmidi-${DISTNAME}

post-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/examples/wildmidi
	${INSTALL_DATA} ${FILESDIR}/wildmidi.cfg \
		${PREFIX}/share/examples/wildmidi

.include <bsd.port.mk>
