# $OpenBSD$

COMMENT =	GNU Binutils, tip of tree
DISTFILES =	# empty
PKGNAME =	binutils-future-2.33.50pl20191116
#REVISION =	0
CATEGORIES =	devel

HOMEPAGE =	https://www.gnu.org/software/binutils/
MAINTAINER =	Your Name <you@example.com>

# GPLv3+
PERMIT_PACKAGE =	Yes

WANTLIB += ${COMPILER_LIBCXX} c curses expat kvm m z

# We take gold as our linker instead of building it.
# Too many patches to maintain if we built it.
# Plus, gold rarely changes.
BUILD_DEPENDS =	devel/gold

USE_GMAKE =	Yes

NO_BUILD =	Yes

NO_TEST =	Yes

WRKBUILD =	/home/brian/binutils/binutils-build

post-install:
	@cp ${LOCALBASE}/bin/ld.gold ${PREFIX}/gnu/bin/ld
	@ln ${PREFIX}/gnu/bin/ld ${PREFIX}/gnu/x86_64-unknown-openbsd6.6/bin/ld
.for i in addr2line ar as c++filt elfedit gdb gprof ld nm objcopy objdump ranlib readelf size strings strip
	@strip ${PREFIX}/gnu/bin/$i
.endfor
.for i in ar as ld nm objcopy objdump ranlib readelf strip
	@strip ${PREFIX}/gnu/x86_64-unknown-openbsd6.6/bin/$i
.endfor

.include <bsd.port.mk>
