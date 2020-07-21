# $OpenBSD$

V =		0.180
COMMENT =	utilities to manipulate ELF files
DISTNAME =	elfutils-${V}
EXTRACT_SUFX =	.tar.bz2
CATEGORIES =	devel

#SHARED_LIBS +=	isl                       0.0 # 22.0

HOMEPAGE =	https://sourceware.org/elfutils/
MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# GPLv3+
PERMIT_PACKAGE =	Yes

#WANTLIB += gmp

MASTER_SITES =	https://sourceware.org/elfutils/ftp/${V}/

LIB_DEPENDS =	devel/gettext,-runtime

CONFIGURE_STYLE =	gnu
CONFIGURE_ARGS =	--enable-debuginfod

CC =	/usr/local/gnu/bin/gcc
CXX =	/usr/bin/c++

.include <bsd.port.mk>
