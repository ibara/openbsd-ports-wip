# $OpenBSD$

V =		0.2
COMMENT =	experimental neural net speech coding
PKGNAME =	lpcnet-${V}
CATEGORIES =	comms

SHARED_LIBS +=	lpcnetfreedv              0.0 # 0.0

# BSD
PERMIT_PACKAGE =	Yes

WANTLIB += c codec2 m

# XXX: Cannot use MASTER_SITES and GH_* together.
MASTER_SITES0 =	https://github.com/drowe67/LPCNet/archive/
MASTER_SITES1 =	http://rowetel.com/downloads/deep/
DISTFILES =	LPCNet-v${V}{v${V}}.tar.gz:0 \
		lpcnet_191005_v1.0.tgz:1

# C11
COMPILER =	base-clang ports-gcc

MODULES =	devel/cmake

LIB_DEPENDS =	comms/codec2

CONFIGURE_ARGS =	-DDISABLE_CPU_OPTIMIZATION=ON

WRKDIST =	${WRKDIR}/LPCNet-${V}

pre-configure:
	cp ${DISTDIR}/lpcnet_191005_v1.0.tgz ${WRKBUILD}

.include <bsd.port.mk>
