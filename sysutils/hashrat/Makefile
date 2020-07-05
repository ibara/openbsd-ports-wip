# $OpenBSD$

COMMENT =	hash generation program
PKGNAME =	${DISTNAME:L}
CATEGORIES =	sysutils

GH_ACCOUNT =	ColumPaget
GH_PROJECT =	Hashrat
GH_TAGNAME =	v1.11

HOMEPAGE =	http://www.cjpaget.co.uk/Code/Hashrat/
MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# GPLv3+
PERMIT_PACKAGE =	Yes

#WANTLIB += c m

CONFIGURE_STYLE =	gnu
CONFIGURE_ARGS =	--enable-ip6 \
			--enable-ssl
CONFIGURE_ENV =		ac_cv_sys_file_offset_bits=64

.include <bsd.port.mk>
