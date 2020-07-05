# $OpenBSD$

# rt/cgen/cowgol.h:14:
# "Sorry, cowgol cgen doesn't work on big endian machines yet."
ONLY_FOR_ARCHS =	${LE_ARCHS}

COMMENT =	self-hosted Ada-inspired language for small systems
DISTNAME =	${GH_PROJECT}-0.6.1pl20200701
CATEGORIES =	lang

# No recent releases... or relases with proper tarballs...
GH_ACCOUNT =	davidgiven
GH_PROJECT =	cowgol
GH_COMMIT =	1b8770e5fffc6548c97a872fd6a9856f18cc26e1

HOMEPAGE =	https://cowlark.com/cowgol/
MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# BSD
# tubeemu contains lib6502: MIT
PERMIT_PACKAGE =	Yes

WANTLIB += c readline z80ex z80ex_dasm

MODULES =	lang/lua

BUILD_DEPENDS =	devel/64tass \
		devel/ninja \
		devel/zmac \
		sysutils/coreutils \
		sysutils/gpp

LIB_DEPENDS =	devel/z80ex

RUN_DEPENDS =	devel/64tass \
		devel/zmac

# -Wno-parentheses kills a slew of warnings that made porting difficult.
USE_GMAKE =	Yes
MAKE_FLAGS =	CFLAGS="${CFLAGS} -I${LOCALBASE}/include -Wno-parentheses" \
		LDFLAGS="${LDFLAGS} -L${LOCALBASE}/lib" \
		MODLUA_BIN="${MODLUA_BIN}"

# Tests are run at the end of the build.
# Too much to decouple...
NO_TEST =	Yes

# No installation routine.
# NAMING CONVENTION:
#   utility-target.hostplatform.hostcpu
#   For example, cowfe-cgen.ncpmz.z80.com means:
#     Frontend, target = C backend, host platform = CP/M, host CPU = Z80.
#     .nncgen.exe = stage 3 C backend created native compiler.
#     We don't want .bootstrap.exe (stage 1) or .ncgen.exe (stage 2).
# Install the native executables to ${LOCALBASE}/bin.
# Install wrappers for the *-cgen.nncgen.exe executables (aka native compilers).
# Install the executables for other platforms to ${LOCALBASE}/share/cowgol/bin.
# Install the headers to ${LOCALBASE}/share/cowgol/rt.
# Install standard library (cowgol.coo) to ${LOCALBASE}/share/cowgol/rt.
# Install the CP/M and BBC Micro emulators.
# Install example programs.
do-install:
	for i in ${WRKSRC}/bin/*.nncgen.exe ; do \
		${INSTALL_PROGRAM} $$i ${PREFIX}/bin/`basename $$i` ; \
	done ;
	${SUBST_CMD} -c -m 555 ${FILESDIR}/cowbe.sh ${PREFIX}/bin/cowbe
	${SUBST_CMD} -c -m 555 ${FILESDIR}/cowfe.sh ${PREFIX}/bin/cowfe
	${SUBST_CMD} -c -m 555 ${FILESDIR}/cowlink.sh ${PREFIX}/bin/cowlink
	${INSTALL_DATA_DIR} ${PREFIX}/share/cowgol/bin
	${INSTALL_DATA} ${WRKSRC}/bin/*.bbct{,6502,i,iny}.* \
		${PREFIX}/share/cowgol/bin
	${INSTALL_DATA} ${WRKSRC}/bin/*.ncpmz.* ${PREFIX}/share/cowgol/bin
	${INSTALL_DATA_DIR} ${PREFIX}/share/cowgol/rt
	cp ${WRKSRC}/rt/*.coh ${PREFIX}/share/cowgol/rt
	cp -R ${WRKSRC}/rt/agc ${PREFIX}/share/cowgol/rt
	cp -R ${WRKSRC}/rt/bbct ${PREFIX}/share/cowgol/rt
	cp -R ${WRKSRC}/rt/bbcti ${PREFIX}/share/cowgol/rt
	cp -R ${WRKSRC}/rt/cgen ${PREFIX}/share/cowgol/rt
	cp -R ${WRKSRC}/rt/cpm ${PREFIX}/share/cowgol/rt
	cp -R ${WRKSRC}/rt/cpmz ${PREFIX}/share/cowgol/rt
	cp -R ${WRKSRC}/rt/lx386 ${PREFIX}/share/cowgol/rt
	rm -f ${PREFIX}/share/cowgol/rt/bbct/build.lua
	rm -f ${PREFIX}/share/cowgol/rt/bbcti/build.lua
	rm -f ${PREFIX}/share/cowgol/rt/cgen/build.lua
	rm -f ${PREFIX}/share/cowgol/rt/cpm/build.lua
	rm -f ${PREFIX}/share/cowgol/rt/cpmz/build.lua
	rm -f ${PREFIX}/share/cowgol/rt/lx386/build.lua
	${INSTALL_DATA} ${WRKSRC}/.obj/rt/bbct/cowgol.coo \
		${PREFIX}/share/cowgol/rt/bbct
	${INSTALL_DATA} ${WRKSRC}/.obj/rt/bbcti/cowgol.coo \
		${PREFIX}/share/cowgol/rt/bbcti
	${INSTALL_DATA} ${WRKSRC}/.obj/rt/cgen/cowgol.coo \
		${PREFIX}/share/cowgol/rt/cgen
	${INSTALL_DATA} ${WRKSRC}/.obj/rt/cpm/cowgol.coo \
		${PREFIX}/share/cowgol/rt/cpm
	${INSTALL_DATA} ${WRKSRC}/.obj/rt/cpmz/cowgol.coo \
		${PREFIX}/share/cowgol/rt/cpmz
	${INSTALL_PROGRAM} ${WRKSRC}/bin/{cpm,tube}emu ${PREFIX}/bin
	${INSTALL_DATA_DIR} ${PREFIX}/share/examples/cowgol
	${INSTALL_DATA} ${WRKSRC}/examples/*.cow \
		${PREFIX}/share/examples/cowgol

.include <bsd.port.mk>
