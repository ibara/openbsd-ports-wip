# $OpenBSD$

COMMENT =	virtual file system for accessing archives
DISTNAME =	avfs-1.0.6
EXTRACT_SUFX =	.tar.bz2
CATEGORIES =	devel

SHARED_LIBS +=	avfs                      0.0 # 0.2

HOMEPAGE =	http://www.boomerangsworld.de/cms/tools/mmu2html.html
MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# GPLv2+/LGPLv2+
PERMIT_PACKAGE =	Yes

WANTLIB += c fuse lzma pthread zstd

MASTER_SITES =	http://www.boomerangsworld.de/cms/avfs/downloads/

LIB_DEPENDS =	archivers/zstd

CONFIGURE_STYLE =	gnu
CONFIGURE_ARGS =	--enable-fuse

.include <bsd.port.mk>
