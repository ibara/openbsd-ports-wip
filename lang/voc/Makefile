# $OpenBSD$

# Error: C compiler does not store multibyte numeric values in little-endian order.
NOT_FOR_ARCHS =	${BE_ARCHS}

COMMENT =	Vishap's Oberon compiler
CATEGORIES =	lang

GH_ACCOUNT =	vishaps
GH_PROJECT =	voc
GH_TAGNAME =	2.1.0

MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# GPLv3+
PERMIT_PACKAGE =	Yes

WANTLIB += c

ALL_TARGET =	full
MAKE_ENV =	CC="${CC}" \
		INSTALLDIR="${DESTDIR}${PREFIX}/share/voc"
MAKE_FILE =	makefile

NO_TEST =	Yes

pre-configure:
	sed -i 's,CFLAGS,${CFLAGS},g' ${WRKSRC}/src/tools/make/configure.c

post-install:
	@echo "#!/bin/sh" > ${WRKSRC}/voc.sh
	@echo "${TRUEPREFIX}/share/voc/bin/voc \"\$$@\"" >> ${WRKSRC}/voc.sh
	@${SUBST_CMD} -c -m ${BINMODE} ${WRKSRC}/voc.sh ${PREFIX}/bin/voc

.include <bsd.port.mk>
