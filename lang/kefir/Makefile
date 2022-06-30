ONLY_FOR_ARCHS =	amd64

COMMENT =	small C17 compiler
DISTNAME =	kefir-0.0.0pl20220615
CATEGORIES =	lang

SHARED_LIBS +=	kefir                     0.0 # 0.0

GH_ACCOUNT =	ibara
GH_PROJECT =	kefir
GH_COMMIT =	9589547455f1eb974acdfb5719779e517218311d

MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# Compiler: GPLv3 only
# Runtime library: BSD
PERMIT_PACKAGE =	Yes

WANTLIB += c

BUILD_DEPENDS =	${RUN_DEPENDS}

RUN_DEPENDS =	devel/gas

USE_GMAKE =	Yes
MAKE_FLAGS =	CC="${CC}"

# Build runtime library
post-build:
	cd ${WRKSRC}/source/runtime && \
		gas -o amd64_sysv.o amd64_sysv.s && \
			${AR} cru libkefirrt.a amd64_sysv.o && \
				ranlib libkefirrt.a

# Simple install routine
do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/bin/kefir ${PREFIX}/bin
	${INSTALL_DATA} ${WRKSRC}/bin/libs/libkefir.so.0.0 ${PREFIX}/lib
	${INSTALL_DATA_DIR} ${PREFIX}/libexec/kefir/include/{amd64,machine}
	${INSTALL_DATA} ${WRKSRC}/source/runtime/libkefirrt.a \
		${PREFIX}/libexec/kefir
	sed 34,57d /usr/include/machine/endian.h > \
		${PREFIX}/libexec/kefir/include/machine/endian.h
	chmod 444 ${PREFIX}/libexec/kefir/include/machine/endian.h
	${INSTALL_DATA} \
		${PREFIX}/libexec/kefir/include/machine/endian.h \
			${PREFIX}/libexec/kefir/include/amd64/endian.h
	sed -e 's, __aligned(__alignof__(long long)),,g' \
		-e 's, __aligned(__alignof__(long double)),,g' \
			/usr/include/stddef.h > \
				${PREFIX}/libexec/kefir/include/stddef.h

.include <bsd.port.mk>
