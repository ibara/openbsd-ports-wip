# $OpenBSD$

COMMENT =	GNU Compiler Collection, tip of tree
DISTFILES =	# empty
PKGNAME =	gcc-future-10.0.0pl20191014
#REVISION =	0
CATEGORIES =	lang

SHARED_LIBS +=  atomic                    3.0 # 3.0
SHARED_LIBS +=  cc1plugin                 0.0 # 0.0
SHARED_LIBS +=  cp1plugin                 0.0 # 0.0
SHARED_LIBS +=  cc1                       0.0 # 0.0
SHARED_LIBS +=  gfortran                  5.0 # 5.0
SHARED_LIBS +=	gomp                      1.0 # 1.0
SHARED_LIBS +=  itm                       1.0 # 1.0
SHARED_LIBS +=  objc                      4.0 # 4.0
SHARED_LIBS +=  quadmath                  0.0 # 0.0
SHARED_LIBS +=  ssp                       0.0 # 0.0
SHARED_LIBS +=  xstdc++                   6.28 # 6.28
SHARED_LIBS +=  lto_plugin                0.0 # 0.0

HOMEPAGE =	https://gcc.gnu.org/
MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# GPLv3+
PERMIT_PACKAGE =	Yes

WANTLIB += c gmp m mpc mpfr z

BUILD_DEPENDS =	${RUN_DEPENDS}

LIB_DEPENDS =	devel/gmp,no_cxx,bootstrap \
		devel/libmpc \
		devel/mpfr

RUN_DEPENDS =	devel/binutils-future

USE_GMAKE =	Yes

NO_BUILD =	Yes

NO_TEST =	Yes

WRKBUILD =	/home/brian/gcc/gcc-build

post-install:
.for i in c++ cpp g++ gcc gcc-ar gcc-nm gcc-ranlib gcov gcov-dump gcov-tool gfortran lto-dump
	@strip ${PREFIX}/gnu/bin/$i
.endfor
.for i in c++ g++ gcc gcc-10.0.0 gcc-ar gcc-nm gcc-ranlib gfortran
	@strip ${PREFIX}/gnu/bin/x86_64-unknown-openbsd6.6-$i
.endfor
.for i in atomic cc1 gfortran itm objc quadmath ssp
	@strip ${PREFIX}/gnu/lib/lib${i}.so.*
.endfor
	@strip ${PREFIX}/gnu/lib/libxstdc++.so.6.28
.for i in cc1 cp1
	@strip ${PREFIX}/gnu/lib/gcc/x86_64-unknown-openbsd6.6/10.0.0/plugin/lib${i}plugin.so.*
.endfor
.for i in cc1 cc1obj cc1objplus cc1plus collect2 f951 lto-wrapper lto1
	@strip ${PREFIX}/gnu/libexec/gcc/x86_64-unknown-openbsd6.6/10.0.0/$i
.endfor
	@strip ${PREFIX}/gnu/libexec/gcc/x86_64-unknown-openbsd6.6/10.0.0/install-tools/fixincl
	@strip ${PREFIX}/gnu/libexec/gcc/x86_64-unknown-openbsd6.6/10.0.0/liblto_plugin.so.*
	@strip ${PREFIX}/gnu/libexec/gcc/x86_64-unknown-openbsd6.6/10.0.0/plugin/gengtype

.include <bsd.port.mk>
