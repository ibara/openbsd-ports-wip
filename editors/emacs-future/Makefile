# $OpenBSD$

COMMENT =	GNU Emacs, tip of tree
DISTFILES =	# empty
PKGNAME =	emacs-future-27.0.50pl20191014
#REVISION =	0
CATEGORIES =	editors

HOMEPAGE =	https://www.gnu.org/software/emacs/
MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# GPLv3+
PERMIT_PACKAGE =	Yes

WANTLIB += ICE SM X11 X11-xcb Xext Xfixes Xft Xinerama Xpm Xrandr
WANTLIB += Xrender atk-1.0 c cairo cairo-gobject curses dbus-1
WANTLIB += fontconfig freetype gdk-3 gdk_pixbuf-2.0 gif gio-2.0
WANTLIB += glib-2.0 gmp gnutls gobject-2.0 gtk-3 harfbuzz intl
WANTLIB += jansson jpeg lcms2 m m17n-core m17n-flt ossaudio otf
WANTLIB += pango-1.0 pangocairo-1.0 png pthread rsvg-2 tiff xcb
WANTLIB += xml2 z

LIB_DEPENDS =	devel/jansson \
		graphics/lcms2 \
		misc/m17n/lib \
		security/gnutls \
		x11/gtk+3

USE_GMAKE =	Yes

NO_BUILD =	Yes

FAKE_TARGET =	install-strip

NO_TEST =	Yes

WRKBUILD =	/home/brian/emacs/emacs-build

.include <bsd.port.mk>
