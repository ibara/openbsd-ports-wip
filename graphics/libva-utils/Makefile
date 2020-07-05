# $OpenBSD$

COMMENT = Tests for VA-API

GH_ACCOUNT = intel
GH_PROJECT = libva-utils
GH_TAGNAME = 2.6.0.pre1

CATEGORIES = graphics multimedia
HOMEPAGE = https://github.com/intel/libva-utils

#MIT
PERMIT_PACKAGE = Yes

COMPILER = base-clang
WANTLIB = ${COMPILER_LIBCXX} X11 c va va-drm va-x11

RUN_DEPENDS = graphics/libva

#Tests are hardware-dependent.
#Will fail unless you have a supported system.
TEST_IS_INTERACTIVE = Yes

MODULES = devel/meson
MODMESON_CONFIGURE_ARGS = -Dtests=true

.include <bsd.port.mk>
