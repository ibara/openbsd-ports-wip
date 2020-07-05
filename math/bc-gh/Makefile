# $OpenBSD: Makefile,v 1.17 2020/03/11 15:17:12 bcallah Exp $

V =		2.7.2
COMMENT =	implementation of POSIX bc with GNU and BSD extensions
DISTNAME =	bc-${V}
PKGNAME =	bc-gh-${V}
EXTRACT_SUFX =	.tar.xz
CATEGORIES =	math

HOMEPAGE =	https://github.com/gavinhoward/bc
MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# BSD
PERMIT_PACKAGE =	Yes

WANTLIB += c

MASTER_SITES =	https://github.com/gavinhoward/bc/releases/download/${V}/

COMPILER =	base-clang ports-gcc

# CONFIGURE_ARGS makes it so we don't run tests that need GNU bc to generate.
CONFIGURE_STYLE =	simple
CONFIGURE_SCRIPT =	configure.sh
CONFIGURE_ARGS =	-G
CONFIGURE_ENV =		CC="${CC}" \
			CFLAGS="${CFLAGS}" \
			EXECSUFFIX="-gh" \
			MANDIR="${PREFIX}/man" \
			NLSPATH="${PREFIX}/share/locale/%L/%N"

# Use 64-bit math on 64-bit archs
.if ${MACHINE_ARCH} == "aarch64" || ${MACHINE_ARCH} == "alpha" || \
    ${MACHINE_ARCH} == "amd64" || ${MACHINE_ARCH} == "sparc64" || \
    ${MACHINE_ARCH} == "mips64" || ${MACHINE_ARCH} == "mips64el"
CONFIGURE_ENV +=	LONG_BIT=64
.else
CONFIGURE_ENV +=	LONG_BIT=32
.endif

FAKE_FLAGS =	DESTDIR="${DESTDIR}"

.include <bsd.port.mk>