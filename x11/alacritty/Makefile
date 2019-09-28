# $OpenBSD$

ONLY_FOR_ARCHS =	amd64

COMMENT =	cross-platform, GPU-accelerated terminal emulator
# devel/cargo MODULES adds DISTFILES, GH_* didn't
DISTFILES +=	${DISTNAME}${EXTRACT_SUFX}
CATEGORIES =	x11

MAINTAINER =	Eric Auge <eau@unix4fun.net>

GH_ACCOUNT =	jwilm
GH_PROJECT =	alacritty
GH_TAGNAME =	v0.3.3

# Apache 2.0
PERMIT_PACKAGE =	Yes

WANTLIB += c c++abi fontconfig freetype m pthread util xcb

MODULES =	devel/cargo \
		lang/python
MODPY_VERSION =	${MODPY_DEFAULT_VERSION_3}

MODCARGO_RUSTFLAGS += -L${X11BASE}/lib

MODCARGO_CRATES +=	adler32		1.0.3	# BSD-3-Clause AND Zlib
MODCARGO_CRATES +=	aho-corasick	0.6.10	# Unlicense/MIT
MODCARGO_CRATES +=	aho-corasick	0.7.3	# Unlicense/MIT
MODCARGO_CRATES +=	andrew		0.2.1	# MIT
MODCARGO_CRATES +=	android_glue	0.2.3	# MIT
MODCARGO_CRATES +=	ansi_term	0.11.0	# MIT
MODCARGO_CRATES +=	approx		0.3.2	# Apache-2.0
MODCARGO_CRATES +=	arc-swap	0.3.11	# Apache-2.0/MIT
MODCARGO_CRATES +=	argon2rs	0.2.5	# MIT
MODCARGO_CRATES +=	arrayvec	0.4.10	# MIT/Apache-2.0
MODCARGO_CRATES +=	atty		0.2.11	# MIT
MODCARGO_CRATES +=	autocfg		0.1.4	# Apache-2.0/MIT
MODCARGO_CRATES +=	backtrace	0.3.30	# MIT/Apache-2.0
MODCARGO_CRATES +=	backtrace-sys	0.1.28	# MIT/Apache-2.0
MODCARGO_CRATES +=	base64		0.10.1	# MIT/Apache-2.0
MODCARGO_CRATES +=	bindgen		0.33.2	# BSD-3-Clause
MODCARGO_CRATES +=	bitflags	1.1.0	# MIT/Apache-2.0
MODCARGO_CRATES +=	blake2-rfc	0.2.18	# MIT OR Apache-2.0
MODCARGO_CRATES +=	block		0.1.6	# MIT
MODCARGO_CRATES +=	byteorder	1.3.2	# Unlicense OR MIT
MODCARGO_CRATES +=	bzip2		0.3.3	# MIT/Apache-2.0
MODCARGO_CRATES +=	bzip2-sys	0.1.7	# MIT/Apache-2.0
MODCARGO_CRATES +=	cc		1.0.37	# MIT/Apache-2.0
MODCARGO_CRATES +=	cexpr		0.2.3	# Apache-2.0/MIT
MODCARGO_CRATES +=	cfg-if		0.1.9	# MIT/Apache-2.0
MODCARGO_CRATES +=	cgl		0.2.3	# MIT / Apache-2.0
MODCARGO_CRATES +=	clang-sys	0.22.0	# Apache-2.0
MODCARGO_CRATES +=	clap		2.33.0	# MIT
MODCARGO_CRATES +=	clipboard-win	2.2.0	# MIT
MODCARGO_CRATES +=	cloudabi	0.0.3	# BSD-2-Clause
MODCARGO_CRATES +=	cmake		0.1.40	# MIT/Apache-2.0
MODCARGO_CRATES +=	cocoa		0.18.4	# MIT / Apache-2.0
MODCARGO_CRATES +=	color_quant	1.0.1	# MIT
MODCARGO_CRATES +=	constant_time_eq	0.1.3	# CC0-1.0
MODCARGO_CRATES +=	core-foundation	0.6.4	# MIT / Apache-2.0
MODCARGO_CRATES +=	core-foundation-sys	0.6.2	# MIT / Apache-2.0
MODCARGO_CRATES +=	core-graphics	0.17.3	# MIT / Apache-2.0
MODCARGO_CRATES +=	core-text	13.2.0	# MIT/Apache-2.0
MODCARGO_CRATES +=	crc32fast	1.2.0	# MIT OR Apache-2.0
MODCARGO_CRATES +=	crossbeam-channel	0.3.8	# MIT/Apache-2.0
MODCARGO_CRATES +=	crossbeam-deque	0.6.3	# MIT/Apache-2.0
MODCARGO_CRATES +=	crossbeam-epoch	0.7.1	# MIT/Apache-2.0
MODCARGO_CRATES +=	crossbeam-queue	0.1.2	# MIT/Apache-2.0
MODCARGO_CRATES +=	crossbeam-utils	0.6.5	# MIT/Apache-2.0
MODCARGO_CRATES +=	deflate		0.7.19	# MIT/Apache-2.0
MODCARGO_CRATES +=	derivative	1.0.2	# MIT/Apache-2.0
MODCARGO_CRATES +=	dirs		1.0.5	# MIT OR Apache-2.0
MODCARGO_CRATES +=	dlib		0.4.1	# MIT
MODCARGO_CRATES +=	downcast-rs	1.0.4	# MIT/Apache-2.0
MODCARGO_CRATES +=	dtoa		0.4.4	# MIT/Apache-2.0
MODCARGO_CRATES +=	dunce		1.0.0	# CC0-1.0
MODCARGO_CRATES +=	dwrote		0.9.0	# MPL-2.0
MODCARGO_CRATES +=	either		1.5.2	# MIT/Apache-2.0
MODCARGO_CRATES +=	embed-resource	1.2.0	# MIT
MODCARGO_CRATES +=	env_logger	0.5.13	# MIT/Apache-2.0
MODCARGO_CRATES +=	env_logger	0.6.1	# MIT/Apache-2.0
MODCARGO_CRATES +=	errno		0.2.4	# MIT/Apache-2.0
MODCARGO_CRATES +=	errno-dragonfly	0.1.1	# MIT
MODCARGO_CRATES +=	euclid		0.19.9	# MIT / Apache-2.0
MODCARGO_CRATES +=	euclid_macros	0.1.0	# MIT / Apache-2.0
MODCARGO_CRATES +=	expat-sys	2.1.6	# MIT
MODCARGO_CRATES +=	failure		0.1.5	# MIT OR Apache-2.0
MODCARGO_CRATES +=	failure_derive	0.1.5	# MIT OR Apache-2.0
MODCARGO_CRATES +=	filetime	0.2.5	# MIT/Apache-2.0
MODCARGO_CRATES +=	fnv		1.0.6	# Apache-2.0 / MIT
MODCARGO_CRATES +=	foreign-types	0.3.2	# MIT/Apache-2.0
MODCARGO_CRATES +=	foreign-types	0.4.0	# MIT/Apache-2.0
MODCARGO_CRATES +=	foreign-types-macros	0.1.0	# MIT/Apache-2.0
MODCARGO_CRATES +=	foreign-types-shared	0.1.1	# MIT/Apache-2.0
MODCARGO_CRATES +=	foreign-types-shared	0.2.0	# MIT/Apache-2.0
MODCARGO_CRATES +=	freetype-rs	0.19.1	# MIT
MODCARGO_CRATES +=	freetype-sys	0.7.1	# MIT
MODCARGO_CRATES +=	fsevent		0.4.0	# MIT
MODCARGO_CRATES +=	fsevent-sys	2.0.1	# MIT
MODCARGO_CRATES +=	fuchsia-cprng	0.1.1	# LICENSE
MODCARGO_CRATES +=	fuchsia-zircon	0.3.3	# BSD-3-Clause
MODCARGO_CRATES +=	fuchsia-zircon-sys	0.3.3	# BSD-3-Clause
MODCARGO_CRATES +=	gcc		0.3.55	# MIT/Apache-2.0
MODCARGO_CRATES +=	gif		0.10.2	# MIT/Apache-2.0
MODCARGO_CRATES +=	gl_generator	0.11.0	# Apache-2.0
MODCARGO_CRATES +=	gleam		0.6.17	# Apache-2.0/MIT
MODCARGO_CRATES +=	glob		0.2.11	# MIT/Apache-2.0
MODCARGO_CRATES +=	glutin		0.21.0	# Apache-2.0
MODCARGO_CRATES +=	glutin_egl_sys	0.1.3	# Apache-2.0
MODCARGO_CRATES +=	glutin_emscripten_sys	0.1.0	# Apache-2.0
MODCARGO_CRATES +=	glutin_gles2_sys	0.1.3	# Apache-2.0
MODCARGO_CRATES +=	glutin_glx_sys	0.1.5	# Apache-2.0
MODCARGO_CRATES +=	glutin_wgl_sys	0.1.3	# Apache-2.0
MODCARGO_CRATES +=	http_req	0.5.0	# MIT
MODCARGO_CRATES +=	humantime	1.2.0	# MIT/Apache-2.0
MODCARGO_CRATES +=	idna		0.1.5	# MIT/Apache-2.0
MODCARGO_CRATES +=	image		0.21.2	# MIT
MODCARGO_CRATES +=	inflate		0.4.5	# MIT
MODCARGO_CRATES +=	inotify		0.6.1	# ISC
MODCARGO_CRATES +=	inotify-sys	0.1.3	# ISC
MODCARGO_CRATES +=	iovec		0.1.2	# MIT/Apache-2.0
MODCARGO_CRATES +=	itoa		0.4.4	# MIT/Apache-2.0
MODCARGO_CRATES +=	jpeg-decoder	0.1.15	# MIT / Apache-2.0
MODCARGO_CRATES +=	kernel32-sys	0.2.2	# MIT
MODCARGO_CRATES +=	khronos_api	3.1.0	# Apache-2.0
MODCARGO_CRATES +=	lazy_static	1.3.0	# MIT/Apache-2.0
MODCARGO_CRATES +=	lazycell	1.2.1	# MIT/Apache-2.0
MODCARGO_CRATES +=	libc		0.2.58	# MIT OR Apache-2.0
MODCARGO_CRATES +=	libflate	0.1.23	# MIT
MODCARGO_CRATES +=	libloading	0.5.1	# ISC
MODCARGO_CRATES +=	libz-sys	1.0.25	# MIT/Apache-2.0
MODCARGO_CRATES +=	line_drawing	0.7.0	# MIT
MODCARGO_CRATES +=	linked-hash-map	0.5.2	# MIT/Apache-2.0
MODCARGO_CRATES +=	lock_api	0.1.5	# Apache-2.0/MIT
MODCARGO_CRATES +=	log		0.4.6	# MIT/Apache-2.0
MODCARGO_CRATES +=	lzw		0.10.0	# MIT/Apache-2.0
MODCARGO_CRATES +=	malloc_buf	0.0.6	# MIT
MODCARGO_CRATES +=	matches		0.1.8	# MIT
MODCARGO_CRATES +=	memchr		1.0.2	# Unlicense/MIT
MODCARGO_CRATES +=	memchr		2.2.0	# Unlicense/MIT
MODCARGO_CRATES +=	memmap		0.7.0	# MIT/Apache-2.0
MODCARGO_CRATES +=	memoffset	0.2.1	# MIT
MODCARGO_CRATES +=	mio		0.6.19	# MIT
MODCARGO_CRATES +=	mio-anonymous-pipes	0.1.0	# MIT
MODCARGO_CRATES +=	mio-extras	2.0.5	# MIT
MODCARGO_CRATES +=	mio-named-pipes	0.1.6	# MIT/Apache-2.0
MODCARGO_CRATES +=	mio-uds		0.6.7	# MIT/Apache-2.0
MODCARGO_CRATES +=	miow		0.2.1	# MIT/Apache-2.0
MODCARGO_CRATES +=	miow		0.3.3	# MIT/Apache-2.0
MODCARGO_CRATES +=	named_pipe	0.3.0	# MIT OR Apache-2.0
MODCARGO_CRATES +=	native-tls	0.2.3	# MIT/Apache-2.0
MODCARGO_CRATES +=	net2		0.2.33	# MIT/Apache-2.0
MODCARGO_CRATES +=	nix		0.14.1	# MIT
MODCARGO_CRATES +=	nodrop		0.1.13	# MIT/Apache-2.0
MODCARGO_CRATES +=	nom		3.2.1	# MIT
MODCARGO_CRATES +=	nom		4.2.3	# MIT
MODCARGO_CRATES +=	notify		4.0.12	# CC0-1.0
MODCARGO_CRATES +=	num-derive	0.2.5	# MIT/Apache-2.0
MODCARGO_CRATES +=	num-integer	0.1.41	# MIT/Apache-2.0
MODCARGO_CRATES +=	num-iter	0.1.39	# MIT/Apache-2.0
MODCARGO_CRATES +=	num-rational	0.2.2	# MIT/Apache-2.0
MODCARGO_CRATES +=	num-traits	0.2.8	# MIT/Apache-2.0
MODCARGO_CRATES +=	num_cpus	1.10.1	# MIT/Apache-2.0
MODCARGO_CRATES +=	numtoa		0.1.0	# MIT OR Apache-2.0
MODCARGO_CRATES +=	objc		0.2.6	# MIT
MODCARGO_CRATES +=	objc-foundation	0.1.1	# MIT
MODCARGO_CRATES +=	objc_id		0.1.1	# MIT
MODCARGO_CRATES +=	openssl		0.10.23	# Apache-2.0
MODCARGO_CRATES +=	openssl-probe	0.1.2	# MIT/Apache-2.0
MODCARGO_CRATES +=	openssl-sys	0.9.47	# MIT
MODCARGO_CRATES +=	ordered-float	1.0.2	# MIT
MODCARGO_CRATES +=	osmesa-sys	0.1.2	# CC0-1.0
MODCARGO_CRATES +=	owning_ref	0.4.0	# MIT
MODCARGO_CRATES +=	parking_lot	0.7.1	# Apache-2.0/MIT
MODCARGO_CRATES +=	parking_lot_core	0.4.0	# Apache-2.0/MIT
MODCARGO_CRATES +=	peeking_take_while	0.1.2	# Apache-2.0/MIT
MODCARGO_CRATES +=	percent-encoding	1.0.1	# MIT/Apache-2.0
MODCARGO_CRATES +=	phf		0.7.24	# MIT
MODCARGO_CRATES +=	phf_codegen	0.7.24	# MIT
MODCARGO_CRATES +=	phf_generator	0.7.24	# MIT
MODCARGO_CRATES +=	phf_shared	0.7.24	# MIT
MODCARGO_CRATES +=	pkg-config	0.3.14	# MIT/Apache-2.0
MODCARGO_CRATES +=	png		0.14.1	# MIT/Apache-2.0
MODCARGO_CRATES +=	podio		0.1.6	# MIT OR Apache-2.0
MODCARGO_CRATES +=	proc-macro2	0.4.30	# MIT/Apache-2.0
MODCARGO_CRATES +=	quick-error	1.2.2	# MIT/Apache-2.0
MODCARGO_CRATES +=	quote		0.3.15	# MIT/Apache-2.0
MODCARGO_CRATES +=	quote		0.6.12	# MIT/Apache-2.0
MODCARGO_CRATES +=	rand		0.6.5	# MIT/Apache-2.0
MODCARGO_CRATES +=	rand_chacha	0.1.1	# MIT/Apache-2.0
MODCARGO_CRATES +=	rand_core	0.3.1	# MIT/Apache-2.0
MODCARGO_CRATES +=	rand_core	0.4.0	# MIT/Apache-2.0
MODCARGO_CRATES +=	rand_hc		0.1.0	# MIT/Apache-2.0
MODCARGO_CRATES +=	rand_isaac	0.1.1	# MIT/Apache-2.0
MODCARGO_CRATES +=	rand_jitter	0.1.4	# MIT OR Apache-2.0
MODCARGO_CRATES +=	rand_os		0.1.3	# MIT/Apache-2.0
MODCARGO_CRATES +=	rand_pcg	0.1.2	# MIT/Apache-2.0
MODCARGO_CRATES +=	rand_xorshift	0.1.1	# MIT/Apache-2.0
MODCARGO_CRATES +=	rayon		1.1.0	# Apache-2.0/MIT
MODCARGO_CRATES +=	rayon-core	1.5.0	# Apache-2.0/MIT
MODCARGO_CRATES +=	rdrand		0.4.0	# ISC
MODCARGO_CRATES +=	redox_syscall	0.1.54	# MIT
MODCARGO_CRATES +=	redox_termios	0.1.1	# MIT
MODCARGO_CRATES +=	redox_users	0.3.0	# MIT
MODCARGO_CRATES +=	regex		0.2.11	# MIT/Apache-2.0
MODCARGO_CRATES +=	regex		1.1.7	# MIT/Apache-2.0
MODCARGO_CRATES +=	regex-syntax	0.5.6	# MIT/Apache-2.0
MODCARGO_CRATES +=	regex-syntax	0.6.7	# MIT/Apache-2.0
MODCARGO_CRATES +=	remove_dir_all	0.5.2	# MIT/Apache-2.0
MODCARGO_CRATES +=	rustc-demangle	0.1.15	# MIT/Apache-2.0
MODCARGO_CRATES +=	rustc_tools_util	0.2.0	# MIT/Apache-2.0
MODCARGO_CRATES +=	rustc_version	0.2.3	# MIT/Apache-2.0
MODCARGO_CRATES +=	rusttype	0.7.7	# MIT / Apache-2.0
MODCARGO_CRATES +=	ryu		0.2.8	# Apache-2.0 OR BSL-1.0
MODCARGO_CRATES +=	same-file	1.0.4	# Unlicense/MIT
MODCARGO_CRATES +=	schannel	0.1.15	# MIT
MODCARGO_CRATES +=	scoped_threadpool	0.1.9	# MIT
MODCARGO_CRATES +=	scopeguard	0.3.3	# MIT/Apache-2.0
MODCARGO_CRATES +=	security-framework	0.3.1	# MIT/Apache-2.0
MODCARGO_CRATES +=	security-framework-sys	0.3.1	# MIT/Apache-2.0
MODCARGO_CRATES +=	semver		0.9.0	# MIT/Apache-2.0
MODCARGO_CRATES +=	semver-parser	0.7.0	# MIT/Apache-2.0
MODCARGO_CRATES +=	serde		1.0.92	# MIT OR Apache-2.0
MODCARGO_CRATES +=	serde_derive	1.0.92	# MIT OR Apache-2.0
MODCARGO_CRATES +=	serde_json	1.0.39	# MIT/Apache-2.0
MODCARGO_CRATES +=	serde_yaml	0.8.9	# MIT/Apache-2.0
MODCARGO_CRATES +=	servo-fontconfig	0.4.0	# MIT / Apache-2.0
MODCARGO_CRATES +=	servo-fontconfig-sys	4.0.7	# MIT
MODCARGO_CRATES +=	shared_library	0.1.9	# Apache-2.0/MIT
MODCARGO_CRATES +=	signal-hook	0.1.9	# Apache-2.0/MIT
MODCARGO_CRATES +=	signal-hook-registry	1.0.1	# Apache-2.0/MIT
MODCARGO_CRATES +=	siphasher	0.2.3	# MIT/Apache-2.0
MODCARGO_CRATES +=	slab		0.4.2	# MIT
MODCARGO_CRATES +=	smallvec	0.6.10	# MIT/Apache-2.0
MODCARGO_CRATES +=	smithay-client-toolkit	0.4.6	# MIT
MODCARGO_CRATES +=	smithay-client-toolkit	0.6.2	# MIT
MODCARGO_CRATES +=	smithay-clipboard	0.3.3	# MIT
MODCARGO_CRATES +=	socket2		0.3.9	# MIT/Apache-2.0
MODCARGO_CRATES +=	spsc-buffer	0.1.1	# MIT
MODCARGO_CRATES +=	stable_deref_trait	1.1.1	# MIT/Apache-2.0
MODCARGO_CRATES +=	static_assertions	0.3.3	# MIT/Apache-2.0
MODCARGO_CRATES +=	stb_truetype	0.2.6	# MIT / Apache-2.0
MODCARGO_CRATES +=	strsim		0.8.0	# MIT
MODCARGO_CRATES +=	syn		0.15.36	# MIT OR Apache-2.0
MODCARGO_CRATES +=	synstructure	0.10.2	# MIT
MODCARGO_CRATES +=	tempfile	3.0.8	# MIT/Apache-2.0
MODCARGO_CRATES +=	termcolor	1.0.5	# Unlicense OR MIT
MODCARGO_CRATES +=	terminfo	0.6.1	# WTFPL
MODCARGO_CRATES +=	termion		1.5.3	# MIT
MODCARGO_CRATES +=	textwrap	0.11.0	# MIT
MODCARGO_CRATES +=	thread_local	0.3.6	# Apache-2.0/MIT
MODCARGO_CRATES +=	tiff		0.2.2	# MIT
MODCARGO_CRATES +=	time		0.1.42	# MIT/Apache-2.0
MODCARGO_CRATES +=	ucd-util	0.1.3	# MIT/Apache-2.0
MODCARGO_CRATES +=	unicase		2.4.0	# MIT/Apache-2.0
MODCARGO_CRATES +=	unicode-bidi	0.3.4	# MIT / Apache-2.0
MODCARGO_CRATES +=	unicode-normalization	0.1.8	# MIT/Apache-2.0
MODCARGO_CRATES +=	unicode-width	0.1.5	# MIT/Apache-2.0
MODCARGO_CRATES +=	unicode-xid	0.1.0	# MIT/Apache-2.0
MODCARGO_CRATES +=	url		1.7.2	# MIT/Apache-2.0
MODCARGO_CRATES +=	utf8-ranges	1.0.3	# Unlicense/MIT
MODCARGO_CRATES +=	utf8parse	0.1.1	# Apache-2.0 OR MIT
MODCARGO_CRATES +=	vcpkg		0.2.6	# MIT/Apache-2.0
MODCARGO_CRATES +=	vec_map		0.8.1	# MIT/Apache-2.0
MODCARGO_CRATES +=	version_check	0.1.5	# MIT/Apache-2.0
MODCARGO_CRATES +=	void		1.0.2	# MIT
MODCARGO_CRATES +=	vswhom		0.1.0	# MIT
MODCARGO_CRATES +=	vswhom-sys	0.1.0	# MIT
MODCARGO_CRATES +=	vte		0.3.3	# Apache-2.0 OR MIT
MODCARGO_CRATES +=	walkdir		2.2.8	# Unlicense/MIT
MODCARGO_CRATES +=	wayland-client	0.21.13	# MIT
MODCARGO_CRATES +=	wayland-client	0.23.5	# MIT
MODCARGO_CRATES +=	wayland-commons	0.21.13	# MIT
MODCARGO_CRATES +=	wayland-commons	0.23.5	# MIT
MODCARGO_CRATES +=	wayland-protocols	0.21.13	# MIT
MODCARGO_CRATES +=	wayland-protocols	0.23.5	# MIT
MODCARGO_CRATES +=	wayland-scanner	0.21.13	# MIT
MODCARGO_CRATES +=	wayland-scanner	0.23.5	# MIT
MODCARGO_CRATES +=	wayland-sys	0.21.13	# MIT
MODCARGO_CRATES +=	wayland-sys	0.23.5	# MIT
MODCARGO_CRATES +=	which		1.0.5	# MIT
MODCARGO_CRATES +=	widestring	0.4.0	# MIT/Apache-2.0
MODCARGO_CRATES +=	winapi		0.2.8	# MIT
MODCARGO_CRATES +=	winapi		0.3.7	# MIT/Apache-2.0
MODCARGO_CRATES +=	winapi-build	0.1.1	# MIT
MODCARGO_CRATES +=	winapi-i686-pc-windows-gnu	0.4.0	# MIT/Apache-2.0
MODCARGO_CRATES +=	winapi-util	0.1.2	# Unlicense/MIT
MODCARGO_CRATES +=	winapi-x86_64-pc-windows-gnu	0.4.0	# MIT/Apache-2.0
MODCARGO_CRATES +=	wincolor	1.0.1	# Unlicense/MIT
MODCARGO_CRATES +=	winit		0.19.1	# Apache-2.0
MODCARGO_CRATES +=	winpty-sys	0.4.3	# MIT
MODCARGO_CRATES +=	winreg		0.5.1	# MIT
MODCARGO_CRATES +=	ws2_32-sys	0.2.1	# MIT
MODCARGO_CRATES +=	x11-clipboard	0.3.2	# MIT
MODCARGO_CRATES +=	x11-dl		2.18.3	# CC0-1.0
MODCARGO_CRATES +=	xcb		0.8.2	# MIT
MODCARGO_CRATES +=	xdg		2.2.0	# Apache-2.0/MIT
MODCARGO_CRATES +=	xml-rs		0.8.0	# MIT
MODCARGO_CRATES +=	yaml-rust	0.4.3	# MIT/Apache-2.0
MODCARGO_CRATES +=	zip		0.5.2	# MIT

CONFIGURE_STYLE =	cargo

PATCHORIG =		.openbsd.orig
SEPARATE_BUILD =	Yes

RELEASE_DIR =	${MODCARGO_TARGET_DIR}/release
EXTRA_DIR= 	${WRKSRC}/extra

do-install:
	${INSTALL_PROGRAM} ${RELEASE_DIR}/alacritty ${PREFIX}/bin/
	${INSTALL_MAN} ${EXTRA_DIR}/alacritty.man ${PREFIX}/man/man1/alacritty.1
	${INSTALL_DATA_DIR} ${PREFIX}/share/bash-completion/completions
	${INSTALL_DATA} ${EXTRA_DIR}/completions/alacritty.bash \
		${PREFIX}/share/bash-completion/completions/alacritty
	${INSTALL_DATA_DIR} ${PREFIX}/share/fish/completions
	${INSTALL_DATA} ${EXTRA_DIR}/completions/alacritty.fish \
		${PREFIX}/share/fish/completions/
	${INSTALL_DATA_DIR} ${PREFIX}/share/zsh/site-functions
	${INSTALL_DATA} ${EXTRA_DIR}/completions/_alacritty \
		${PREFIX}/share/zsh/site-functions/_alacritty
	${INSTALL_DATA_DIR} ${PREFIX}/share/examples/alacritty
	${INSTALL_DATA} ${WRKSRC}/alacritty.yml \
		${PREFIX}/share/examples/alacritty/alacritty.yml

.include <bsd.port.mk>
