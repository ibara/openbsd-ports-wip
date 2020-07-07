# $OpenBSD$

COMMENT =	elementary OS desktop UI meta-package
PKGNAME =	pantheon-5.1.5

MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# Full install only
PERMIT_PACKAGE =	Yes

# Libraries
RUN_DEPENDS =	x11/elementary/granite

# Main components
RUN_DEPENDS +=	x11/elementary/applicatons-menu \
		x11/elementary/default-settings \
		x11/elementary/dock \
		x11/elementary/gala \
		x11/elementary/icons \
		x11/elementary/stylesheet \
		x11/elementary/switchboard \
		x11/elementary/wingpanel

# Pantheon agents
RUN_DEPENDS +=	x11/elementary/pantheon-agent-geoclue2 \
		x11/elementary/pantheon-agent-polkit

# Switchboard plugs
RUN_DEPENDS +=	x11/elementary/switchboard-plug-a11y \
		x11/elementary/switchboard-plug-about \
		x11/elementary/switchboard-plug-applications \
		x11/elementary/switchboard-plug-datetime \
		x11/elementary/switchboard-plug-display \
		x11/elementary/switchboard-plug-keyboard \
		x11/elementary/switchboard-plug-mouse-touchpad \
		x11/elementary/switchboard-plug-notifications \
		x11/elementary/switchboard-plug-pantheon-shell \
		x11/elementary/switchboard-plug-power \
		x11/elementary/switchboard-plug-sound

# Wingpanel indicators
RUN_DEPENDS +=	x11/elementary/wingpanel-indicator-a11y \
		x11/elementary/wingpanel-indicator-datetime \
		x11/elementary/wingpanel-indicator-keyboard \
		x11/elementary/wingpanel-indicator-nightlight \
		x11/elementary/wingpanel-indicator-notifications \
		x11/elementary/wingpanel-indicator-power \
		x11/elementary/wingpanel-indicator-privacy \
		x11/elementary/wingpanel-indicator-session \
		x11/elementary/wingpanel-indicator-sound

# Applications
RUN_DEPENDS +=	x11/elementary/calculator \
		x11/elementary/code \
		x11/elementary/files \
		x11/elementary/music \
		x11/elementary/screenshot \
		x11/elementary/terminal \
		x11/elementary/videos

# Extras
RUN_DEPENDS +=	x11/elementary/wallpapers \
		x11/elementary/xdg-desktop-portal-pantheon

.include <bsd.port.mk>
