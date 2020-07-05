# $OpenBSD$

COMMENT = VA-API user mode driver for Intel GEN Graphics family

GH_ACCOUNT = intel
GH_PROJECT = intel-vaapi-driver
GH_TAGNAME = 2.4.0

CATEGORIES = graphics multimedia
HOMEPAGE = https://github.com/intel/intel-vaapi-driver

#MIT
PERMIT_PACKAGE = Yes

WANTLIB = drm drm_intel m

RUN_DEPENDS = graphics/libva

MODULES = devel/meson

.include <bsd.port.mk>
