/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */


#ifndef EFL_CONFIG_H__
#define EFL_CONFIG_H__


/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* Build Ecore_Cocoa Module */
/* #undef BUILD_ECORE_COCOA */

/* Build Ecore_Con Module */
#define BUILD_ECORE_CON 1

/* Build Ecore_DirectFB Module */
/* #undef BUILD_ECORE_DIRECTFB */

/* Build Ecore_Evas Module */
#define BUILD_ECORE_EVAS 1

/* Support for Direct3d Engine in Ecore_Evas */
/* #undef BUILD_ECORE_EVAS_DIRECT3D */

/* Support for DirectFB Engine in Ecore_Evas */
/* #undef BUILD_ECORE_EVAS_DIRECTFB */

/* Support for Ecore Evas Single Process Windowing System Engine in Ecore_Evas
   */
#define BUILD_ECORE_EVAS_EWS 1

/* Support for Linux Framebuffer Engine in Ecore_Evas */
/* #undef BUILD_ECORE_EVAS_FB */

/* Support for OpenGL Cocoa Engine in Ecore_Evas */
/* #undef BUILD_ECORE_EVAS_OPENGL_COCOA */

/* Support for Glew OpenGL Engine in Ecore_Evas */
/* #undef BUILD_ECORE_EVAS_OPENGL_GLEW */

/* Support for OpenGL SDL Engine in Ecore_Evas */
/* #undef BUILD_ECORE_EVAS_OPENGL_SDL */

/* Support for OpenGL Xlib Engine in Ecore_Evas */
/* #undef BUILD_ECORE_EVAS_OPENGL_X11 */

/* OpenGL XCB rendering backend */
/* #undef BUILD_ECORE_EVAS_OPENGL_XCB */

/* OpenGL Xlib rendering backend */
/* #undef BUILD_ECORE_EVAS_OPENGL_XLIB */

/* Support for PSL1GHT Engine in Ecore_Evas */
#define BUILD_ECORE_EVAS_PSL1GHT 1

/* Support for SVN SDL */
#define BUILD_ECORE_EVAS_SDL_130 1

/* Support for 16 bpp Software DirectDraw Engine in Ecore_Evas */
/* #undef BUILD_ECORE_EVAS_SOFTWARE_16_DDRAW */

/* Support for 16 bpp Software Windows CE Engine in Ecore_Evas */
/* #undef BUILD_ECORE_EVAS_SOFTWARE_16_WINCE */

/* Support for Software Xlib 16 bits Engine in Ecore_Evas */
/* #undef BUILD_ECORE_EVAS_SOFTWARE_16_X11 */

/* Support for Software 8bit X11 Engine in Ecore_Evas */
/* #undef BUILD_ECORE_EVAS_SOFTWARE_8_X11 */

/* Support for Software Buffer Engine in Ecore_Evas */
#define BUILD_ECORE_EVAS_SOFTWARE_BUFFER 1

/* Support for Software DirectDraw Engine in Ecore_Evas */
/* #undef BUILD_ECORE_EVAS_SOFTWARE_DDRAW */

/* Support for Software GDI Engine in Ecore_Evas */
/* #undef BUILD_ECORE_EVAS_SOFTWARE_GDI */

/* Support for Software SDL Engine in Ecore_Evas */
#define BUILD_ECORE_EVAS_SOFTWARE_SDL 1

/* Support for Software X11 Engine in Ecore_Evas */
/* #undef BUILD_ECORE_EVAS_SOFTWARE_X11 */

/* Evas Software XCB Engine Support */
/* #undef BUILD_ECORE_EVAS_SOFTWARE_XCB */

/* Evas Software Xlib Engine Support */
/* #undef BUILD_ECORE_EVAS_SOFTWARE_XLIB */

/* Support for Wayland Egl Engine in Ecore_Evas */
/* #undef BUILD_ECORE_EVAS_WAYLAND_EGL */

/* Support for Wayland Shm Engine in Ecore_Evas */
/* #undef BUILD_ECORE_EVAS_WAYLAND_SHM */

/* Support for Win32 Engine in Ecore_Evas */
/* #undef BUILD_ECORE_EVAS_WIN32 */

/* Support for X Window Engines in Ecore_Evas */
/* #undef BUILD_ECORE_EVAS_X11 */

/* Build Ecore_FB Module */
/* #undef BUILD_ECORE_FB */

/* Build Ecore_File Module */
#define BUILD_ECORE_FILE 1

/* Build Ecore_Imf Module */
#define BUILD_ECORE_IMF 1

/* Build Ecore_Imf_Evas Module */
#define BUILD_ECORE_IMF_EVAS 1

/* Build Ecore_Imf_SCIM Module */
/* #undef BUILD_ECORE_IMF_SCIM */

/* Build Ecore_Imf_XIM Module */
/* #undef BUILD_ECORE_IMF_XIM */

/* Build Ecore_Input Module */
#define BUILD_ECORE_INPUT 1

/* Build Ecore_Input_Evas Module */
#define BUILD_ECORE_INPUT_EVAS 1

/* Build Ecore_Ipc Module */
/* #undef BUILD_ECORE_IPC */

/* Build Ecore_psl1ght Module */
#define BUILD_ECORE_PSL1GHT 1

/* Build Ecore_Sdl Module */
#define BUILD_ECORE_SDL 1

/* Build Ecore_Wayland Module */
/* #undef BUILD_ECORE_WAYLAND */

/* Build Ecore_Win32 Module */
/* #undef BUILD_ECORE_WIN32 */

/* Build Ecore_WinCE Module */
/* #undef BUILD_ECORE_WINCE */

/* Build Ecore_X Module */
/* #undef BUILD_ECORE_X */

/* Build support for XCB-based OpenGL */
/* #undef BUILD_ECORE_X_OPENGL_XCB */

/* Define to one of `_getb67', `GETB67', `getb67' for Cray-2 and Cray-YMP
   systems. This function is required for `alloca.c' support on those systems.
   */
/* #undef CRAY_STACKSEG_END */

/* Define to 1 if using `alloca.c'. */
/* #undef C_ALLOCA */

/* Build support for XCB composite */
/* #undef ECORE_XCB_COMPOSITE */

/* Build support for XCB cursor */
/* #undef ECORE_XCB_CURSOR */

/* Build support for XCB damage */
/* #undef ECORE_XCB_DAMAGE */

/* Build support for XCB dpms */
/* #undef ECORE_XCB_DPMS */

/* Build support for XCB randr */
/* #undef ECORE_XCB_RANDR */

/* Build support for XCB render */
/* #undef ECORE_XCB_RENDER */

/* Build support for XCB screensaver */
/* #undef ECORE_XCB_SCREENSAVER */

/* Build support for XCB shape */
/* #undef ECORE_XCB_SHAPE */

/* Build support for XCB sync */
/* #undef ECORE_XCB_SYNC */

/* Build support for XCB xfixes */
/* #undef ECORE_XCB_XFIXES */

/* Build support for XCB gesture */
/* #undef ECORE_XCB_XGESTURE */

/* Build support for XCB xinerama */
/* #undef ECORE_XCB_XINERAMA */

/* Build support for XCB xinput */
/* #undef ECORE_XCB_XINPUT */

/* Build support for XCB xprint */
/* #undef ECORE_XCB_XPRINT */

/* Build support for XCB xtest */
/* #undef ECORE_XCB_XTEST */

/* Build support for Xcomposite */
/* #undef ECORE_XCOMPOSITE */

/* Build support for Xcursor */
/* #undef ECORE_XCURSOR */

/* Build support for Xdamage */
/* #undef ECORE_XDAMAGE */

/* Build support for Xdpms */
/* #undef ECORE_XDPMS */

/* Build support for Xfixes */
/* #undef ECORE_XFIXES */

/* Build support for Xgesture */
/* #undef ECORE_XGESTURE */

/* Build support for Xi2 */
/* #undef ECORE_XI2 */

/* Build support for Xinerama */
/* #undef ECORE_XINERAMA */

/* Build support for Xkb */
/* #undef ECORE_XKB */

/* Build support for Xprint */
/* #undef ECORE_XPRINT */

/* Build support for Xrandr */
/* #undef ECORE_XRANDR */

/* Build support for Xrender */
/* #undef ECORE_XRENDER */

/* Build support for Xss */
/* #undef ECORE_XSS */

/* Build support for Xtest */
/* #undef ECORE_XTEST */

/* Assert when forgot to call eina_threads_init */
/* #undef EFL_DEBUG_THREADS */

/* Define to mention that POSIX threads are supported */
/* #undef EFL_HAVE_POSIX_THREADS */

/* Define to mention that POSIX or Win32 threads are supported */
/* #undef EFL_HAVE_THREADS */

/* Define to mention that Win32 threads are supported */
/* #undef EFL_HAVE_WIN32_THREADS */

/* if set, logging is limited to this amount. */
/* #undef EINA_LOG_LEVEL_MAXIMUM */

/* Define to 1 if translation of program messages to the user's native
   language is requested. */
/* #undef ENABLE_NLS */

/* Enable X Input Method */
#define ENABLE_XIM 1

/* Always integrate glib if support compiled */
/* #undef GLIB_INTEGRATION_ALWAYS */

/* Have abstract sockets namespace */
#define HAVE_ABSTRACT_SOCKETS 1

/* Define to 1 if you have `alloca', as a function or macro. */
#define HAVE_ALLOCA 1

/* Define to 1 if you have <alloca.h> and it should be used (not on Ultrix).
   */
#define HAVE_ALLOCA_H 1

/* Define to 1 if you have the <arpa/inet.h> header file. */
#define HAVE_ARPA_INET_H 1

/* Define to 1 if you have the <arpa/nameser.h> header file. */
/* #undef HAVE_ARPA_NAMESER_H */

/* mkdirat exists */
/* #undef HAVE_ATFILE_SOURCE */

/* Define to 1 if you have the `backtrace' function. */
/* #undef HAVE_BACKTRACE */

/* Build Ecore_Con_Info with c-ares support */
#define HAVE_CARES 1

/* Define to 1 if you have the MacOS X function CFLocaleCopyCurrent in the
   CoreFoundation framework. */
/* #undef HAVE_CFLOCALECOPYCURRENT */

/* Define to 1 if you have the MacOS X function CFPreferencesCopyAppValue in
   the CoreFoundation framework. */
/* #undef HAVE_CFPREFERENCESCOPYAPPVALUE */

/* Have clock_gettime() */
/* #undef HAVE_CLOCK_GETTIME */

/* Downloading with CURL */
#define HAVE_CURL 1

/* Define if the GNU dcgettext() function is already present or preinstalled.
   */
/* #undef HAVE_DCGETTEXT */

/* Define to 1 if you have the <dlfcn.h> header file. */
/* #undef HAVE_DLFCN_H */

/* Defined to 1 if XCB is enabled. */
/* #undef HAVE_ECORE_X_XCB */

/* Defined to 1 if Xlib is enabled. */
/* #undef HAVE_ECORE_X_XLIB */

/* Set to 1 if Escape library is installed */
#define HAVE_ESCAPE 1

/* Set to 1 if Evil library is installed */
/* #undef HAVE_EVIL */

/* Define to 1 if you have the `execvp' function. */
/* #undef HAVE_EXECVP */

/* Define to 1 if you have the <features.h> header file. */
/* #undef HAVE_FEATURES_H */

/* Define if the GNU gettext() function is already present or preinstalled. */
/* #undef HAVE_GETTEXT */

/* Define to 1 if you have the `gettimeofday' function. */
#define HAVE_GETTIMEOFDAY 1

/* Have GLib */
/* #undef HAVE_GLIB */

/* Set to 1 if iconv library is installed */
/* #undef HAVE_ICONV */

/* Define to 1 if you have the <iconv.h> header file. */
/* #undef HAVE_ICONV_H */

/* File monitoring with Inotify */
/* #undef HAVE_INOTIFY */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define if IPV6 is supported */
/* #undef HAVE_IPV6 */

/* Define to 1 if you have `isfinite', as a function or macro. */
#define HAVE_ISFINITE 1

/* Define to 1 if you have the <langinfo.h> header file. */
#define HAVE_LANGINFO_H 1

/* Define to 1 if you have the `c' library (-lc). */
/* #undef HAVE_LIBC */

/* Define to 1 if you have the <locale.h> header file. */
#define HAVE_LOCALE_H 1

/* Have local sockets support */
/* #undef HAVE_LOCAL_SOCKETS */

/* Gather memory statistic */
#define HAVE_MALLINFO 1

/* Define to 1 if you have the <memory.h> header file. */
/* #undef HAVE_MEMORY_H */

/* Define to 1 if you have the `mkdirat' function. */
/* #undef HAVE_MKDIRAT */

/* Define to 1 if you have the <netdb.h> header file. */
#define HAVE_NETDB_H 1

/* Define to 1 if you have the <netinet/in.h> header file. */
#define HAVE_NETINET_IN_H 1

/* Define to 1 if you have the <netinet/tcp.h> header file. */
/* #undef HAVE_NETINET_TCP_H */

/* Define to 1 if you have the <net/if.h> header file. */
/* #undef HAVE_NET_IF_H */

/* File monitoring with Windows notification */
/* #undef HAVE_NOTIFY_WIN32 */

/* have pixman for rendering */
/* #undef HAVE_PIXMAN */

/* File monitoring with polling */
#define HAVE_POLL 1

/* Define to 1 if you have the <signal.h> header file. */
#define HAVE_SIGNAL_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strlcpy' function. */
#define HAVE_STRLCPY 1

/* Define to 1 if the system has the type `struct ipv6_mreq'. */
/* #undef HAVE_STRUCT_IPV6_MREQ */

/* Define to 1 if you have the <sys/epoll.h> header file. */
/* #undef HAVE_SYS_EPOLL_H */

/* File monitoring with Inotify - sys/inotify.h */
/* #undef HAVE_SYS_INOTIFY */

/* Define to 1 if you have the <sys/mman.h> header file. */
#define HAVE_SYS_MMAN_H 1

/* Define to 1 if you have the <sys/prctl.h> header file. */
/* #undef HAVE_SYS_PRCTL_H */

/* Define to 1 if you have the <sys/resource.h> header file. */
#define HAVE_SYS_RESOURCE_H 1

/* Define to 1 if you have the <sys/select.h> header file. */
#define HAVE_SYS_SELECT_H 1

/* Define to 1 if you have the <sys/socket.h> header file. */
#define HAVE_SYS_SOCKET_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/timerfd.h> header file. */
/* #undef HAVE_SYS_TIMERFD_H */

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/un.h> header file. */
/* #undef HAVE_SYS_UN_H */

/* Define to 1 if you have <sys/wait.h> that is POSIX.1 compatible. */
#define HAVE_SYS_WAIT_H 1

/* Define to enable thread safety */
/* #undef HAVE_THREAD_SAFETY */

/* Define to 1 if you have the `timerfd_create' function. */
/* #undef HAVE_TIMERFD_CREATE */

/* Build Ecore_FB Touchscreen Code */
/* #undef HAVE_TSLIB */

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the <ws2tcpip.h> header file. */
/* #undef HAVE_WS2TCPIP_H */

/* Define to 1 if your compiler has __attribute__ */
#define HAVE___ATTRIBUTE__ 1

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#define LT_OBJDIR ".libs/"

/* Define to 1 if you need <netdb.h> to define MAXHOSTNAMELEN */
/* #undef NEED_NETDB_H */

/* Define to 1 if you need <sys/param.h> to define MAXHOSTNAMELEN */
/* #undef NEED_SYS_PARAM_H */

/* xcb version */
/* #undef OLD_XCB_VERSION */

/* Name of package */
#define PACKAGE "ecore"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "enlightenment-devel@lists.sourceforge.net"

/* Define to the full name of this package. */
#define PACKAGE_NAME "ecore"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "ecore 1.1.99.esportato"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "ecore"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "1.1.99.esportato"

/* default value since PATH_MAX is not defined */
#define PATH_MAX 4096

/* The size of `int', as computed by sizeof. */
#define SIZEOF_INT 4

/* The size of `long', as computed by sizeof. */
#define SIZEOF_LONG 8

/* If using the C implementation of alloca, define if you know the
   direction of stack growth for your system; otherwise it will be
   automatically deduced at runtime.
	STACK_DIRECTION > 0 => grows toward higher addresses
	STACK_DIRECTION < 0 => grows toward lower addresses
	STACK_DIRECTION = 0 => direction of growth unknown */
/* #undef STACK_DIRECTION */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Use GnuTLS */
/* #undef USE_GNUTLS */

/* Use GnuTLS 2 or higher */
/* #undef USE_GNUTLS2 */

/* Use g_main_loop in ecore */
/* #undef USE_G_MAIN_LOOP */

/* Use OpenSSL */
/* #undef USE_OPENSSL */

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
# define _ALL_SOURCE 1
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif
/* Enable threading extensions on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# define _POSIX_PTHREAD_SEMANTICS 1
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# define _TANDEM_SOURCE 1
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# define __EXTENSIONS__ 1
#endif


/* Version number of package */
#define VERSION "1.1.99.esportato"

/* Major version */
#define VERS_MAJ 1

/* Micro version */
#define VERS_MIC 99

/* Minor version */
#define VERS_MIN 1

/* Revison */
#define VERS_REV esportato

/* Want Ecore_Timer dump infrastructure */
/* #undef WANT_ECORE_TIMER_DUMP */

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
#  define WORDS_BIGENDIAN 1
# endif
#endif

/* Define to 1 if the X Window System is missing or not being used. */
/* #undef X_DISPLAY_MISSING */

/* Number of bits in a file offset, on hosts where this is settable. */
/* #undef _FILE_OFFSET_BITS */

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* Define to 1 if on MINIX. */
/* #undef _MINIX */

/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
/* #undef _POSIX_1_SOURCE */

/* Define to 1 if you need to in order for `stat' and other things to work. */
/* #undef _POSIX_SOURCE */

/* Macro declaring a function argument to be unused */
#define __UNUSED__ __attribute__((unused))

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */


#endif /* EFL_CONFIG_H__ */

