# $OpenBSD$

COMMENT =	plot aircraft positions on a map
PKGNAME =	virtualradar-2.4.4
DISTFILES =	${PKGNAME}{VirtualRadar}.tar.gz \
		${PKGNAME}-config.tar{VirtualRadar.exe.config.tar.gz}
CATEGORIES =	comms

HOMEPAGE =	https://www.virtualradarserver.co.uk/
MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# BSD
PERMIT_PACKAGE =	Yes

MASTER_SITES =	https://www.virtualradarserver.co.uk/Files/

MODULES =	lang/mono

RUN_DEPENDS =	comms/dump1090

NO_BUILD =	Yes

NO_TEST =	Yes

# No install routine
do-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/virtualradar
	cp -R ${WRKSRC}/*.{dll,exe*} ${PREFIX}/share/virtualradar
	cp -R ${WRKSRC}/{Web,de-DE,fr-FR,pt-BR,ru-RU,zh-CN} \
		${PREFIX}/share/virtualradar
	${SUBST_CMD} -c -m 555 ${FILESDIR}/virtualradar \
		${PREFIX}/bin/virtualradar

.include <bsd.port.mk>
