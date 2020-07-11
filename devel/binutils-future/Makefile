# $OpenBSD$

COMMENT =	GNU Binutils, tip of tree
DISTFILES =	# empty
PKGNAME =	binutils-future-2.35.50.20200710
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
#BUILD_DEPENDS =	devel/gold

USE_GMAKE =	Yes

NO_BUILD =	Yes

NO_TEST =	Yes

WRKBUILD =	/home/brian/binutils/binutils-build

#post-install:
#	@cp ${LOCALBASE}/bin/ld.gold ${PREFIX}/gnu/bin/ld
#	@ln ${PREFIX}/gnu/bin/ld ${PREFIX}/gnu/x86_64-unknown-openbsd6.7/bin/ld
#.for i in addr2line ar as c++filt elfedit gdb gprof ld nm objcopy objdump ranlib readelf size strings strip
#	@/usr/local/gnu/bin/strip ${PREFIX}/gnu/bin/$i
#.endfor
#.for i in ar as ld nm objcopy objdump ranlib readelf strip
#	@/usr/local/gnu/bin/strip ${PREFIX}/gnu/x86_64-unknown-openbsd6.7/bin/$i
#.endfor

.include <bsd.port.mk>
