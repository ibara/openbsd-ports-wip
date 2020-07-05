# $OpenBSD$

COMMENT = VA-API implementation library

GH_ACCOUNT = intel
GH_PROJECT = libva
GH_TAGNAME = 2.6.0.pre1

PORT_LIB_MAJOR = 0
PORT_LIB_MINOR = 0
SHARED_LIB_VERSION = ${PORT_LIB_MAJOR}.${PORT_LIB_MINOR}

#The Official Version of the libva
LIBVA_LIB_MAJOR = 2
LIBVA_LIB_MINOR = 600
LIBVA_LIB_REVISION = 0
LIBVA_LIB_SUFFIX = ${LIBVA_LIB_MAJOR}.${LIBVA_LIB_MINOR}.${LIBVA_LIB_REVISION}

SHARED_LIBS =  va ${SHARED_LIB_VERSION} \
SHARED_LIBS += va-drm ${SHARED_LIB_VERSION} \
SHARED_LIBS += va-x11 ${SHARED_LIB_VERSION} \
SHARED_LIBS += va-glx ${SHARED_LIB_VERSION}
CATEGORIES = graphics multimedia
HOMEPAGE = https://github.com/intel/libva

#MIT
PERMIT_PACKAGE = Yes

WANTLIB = GL X11 Xext Xfixes drm

MODULES = devel/meson

post-install:
.for f in va va-drm va-x11 va-glx
	cd ${PREFIX}/lib \
	&& ln -s lib${f}.so.${SHARED_LIB_VERSION} \
					 lib${f}.so.${LIBVA_LIB_SUFFIX} \
  && ln -s lib${f}.so.${SHARED_LIB_VERSION} \
					 lib${f}.so.${LIBVA_LIB_MAJOR} \
  && ln -s lib${f}.so.${SHARED_LIB_VERSION} lib${f}.so
.endfor

.include <bsd.port.mk>
