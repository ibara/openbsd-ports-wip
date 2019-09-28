# $OpenBSD$

COMMENT =	freely redistributable SoundFont and GUS patchset for MIDI
DISTNAME =	timgm6mb-20190515
CATEGORIES =	audio

HOMEPAGE =	https://musescore.org/en/handbook/soundfonts
MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# TimGM6mb: https://musescore.org/en/handbook/soundfonts#list
# "License: GNU GPL, version 2; Courtesy of Tim Brechbill"
PERMIT_PACKAGE =	Yes

MASTER_SITES =	http://mirrors.nycbug.org/pub/distfiles/

NO_BUILD =	Yes

NO_TEST =	Yes

PKG_ARCH =	*

do-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/TimGM6mb
	${INSTALL_DATA} ${WRKSRC}/TimGM6mb.{cfg,sf2} ${WRKSRC}/*.pat \
		${PREFIX}/share/TimGM6mb
	${INSTALL_DATA_DIR} ${PREFIX}/share/examples/TimGM6mb
	${SUBST_CMD} -c -m 644 ${WRKSRC}/timidity.cfg \
		${PREFIX}/share/examples/TimGM6mb/timidity.cfg

.include <bsd.port.mk>
