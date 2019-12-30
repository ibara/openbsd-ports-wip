# $OpenBSD$

# a in DISTNAME stands for alpha! (Upstream naming)
COMMENT =	small but powerful Emacs-like
DISTNAME =	qemacs-5.2a
CATEGORIES =	editors x11

HOMEPAGE =	https://bellard.org/qemacs/
MAINTAINER =	Your Name <you@example.com>

# LGPLv2.1+
PERMIT_PACKAGE =	Yes

WANTLIB += c m

MASTER_SITES =	https://mirrors.nycbug.org/pub/distfiles/

FLAVORS =	no_x11
FLAVOR ?=

CONFIGURE_STYLE =	simple
CONFIGURE_ARGS =	--cc="${CC}" \
			--extra-cflags="-I${LOCALBASE}/include" \
			--extra-ldflags="-L${LOCALBASE}/lib -lm" \
			--make="${MAKE_PROGRAM}" \
			--prefix="${PREFIX}"

.if ${FLAVOR:Mno_x11}
CONFIGURE_ARGS +=	--disable-x11
.else
WANTLIB += X11 Xext Xv png
LIB_DEPENDS =	graphics/png
.endif

USE_GMAKE =	Yes
MAKE_FLAGS =	V=1 HOST_CC="${CC}"

NO_TEST =	Yes

# Install the tiny qemacs
# Replace bin/qe symlink with real qe
post-install:
	${INSTALL_PROGRAM} ${WRKSRC}/tqe ${PREFIX}/bin
	@rm -f ${PREFIX}/bin/qe
	@${INSTALL_PROGRAM} ${WRKSRC}/qe ${PREFIX}/bin

.include <bsd.port.mk>
