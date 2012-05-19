/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */


#ifndef EFL_CONFIG_H__
#define EFL_CONFIG_H__


/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* Build Altivec Code */
/* #undef BUILD_ALTIVEC */

/* Build async events support */
/* #undef BUILD_ASYNC_EVENTS */

/* Build async image preload support */
/* #undef BUILD_ASYNC_PRELOAD */

/* Build plain C code */
#define BUILD_C 1

/* 16bpp BGR 565 Converter Support */
#define BUILD_CONVERT_16_BGR_565 1

/* 16bpp RGB 444 Converter Support */
#define BUILD_CONVERT_16_RGB_444 1

/* 16bpp 565 (444 ipaq) Converter Support */
#define BUILD_CONVERT_16_RGB_454645 1

/* 16bpp RGB 555 Converter Support */
#define BUILD_CONVERT_16_RGB_555 1

/* 16bpp RGB 565 Converter Support */
#define BUILD_CONVERT_16_RGB_565 1

/* 16bpp RGB Rotation 0 Converter Support */
#define BUILD_CONVERT_16_RGB_ROT0 1

/* 16bpp RGB Rotation 180 Converter Support */
#define BUILD_CONVERT_16_RGB_ROT180 1

/* 16bpp RGB Rotation 270 Converter Support */
#define BUILD_CONVERT_16_RGB_ROT270 1

/* 16bpp RGB Rotation 90 Converter Support */
#define BUILD_CONVERT_16_RGB_ROT90 1

/* 24bpp BGR 888 Converter Support */
#define BUILD_CONVERT_24_BGR_888 1

/* 24bpp 666 (666 ezx) Converter Support */
#define BUILD_CONVERT_24_RGB_666 1

/* 24bpp RGB 888 Converter Support */
#define BUILD_CONVERT_24_RGB_888 1

/* 32bpp BGRX 8888 Converter Support */
#define BUILD_CONVERT_32_BGRX_8888 1

/* 32bpp BGR 8888 Converter Support */
#define BUILD_CONVERT_32_BGR_8888 1

/* 32bpp RGBX 8888 Converter Support */
#define BUILD_CONVERT_32_RGBX_8888 1

/* 32bpp 666 (666 ezx) Converter Support */
#define BUILD_CONVERT_32_RGB_666 1

/* 32bpp RGB 8888 Converter Support */
#define BUILD_CONVERT_32_RGB_8888 1

/* 32bpp RGB Rotation 0 Converter Support */
#define BUILD_CONVERT_32_RGB_ROT0 1

/* 32bpp RGB Rotation 180 Converter Support */
#define BUILD_CONVERT_32_RGB_ROT180 1

/* 32bpp RGB Rotation 270 Converter Support */
#define BUILD_CONVERT_32_RGB_ROT270 1

/* 32bpp RGB Rotation 90 Converter Support */
#define BUILD_CONVERT_32_RGB_ROT90 1

/* 32bpp Grayscale 64-palette Converter Support */
#define BUILD_CONVERT_8_GRAYSCALE_64 1

/* 8bpp GRY 1 Converter Support */
#define BUILD_CONVERT_8_GRY_1 1

/* 8bpp GRY 16 Converter Support */
#define BUILD_CONVERT_8_GRY_16 1

/* 8bpp RGB 111 Converter Support */
#define BUILD_CONVERT_8_RGB_111 1

/* 8bpp RGB 121 Converter Support */
#define BUILD_CONVERT_8_RGB_121 1

/* 8bpp RGB 221 Converter Support */
#define BUILD_CONVERT_8_RGB_221 1

/* 8bpp RGB 222 Converter Support */
#define BUILD_CONVERT_8_RGB_222 1

/* 8bpp RGB 232 Converter Support */
#define BUILD_CONVERT_8_RGB_232 1

/* 8bpp RGB 332 Converter Support */
#define BUILD_CONVERT_8_RGB_332 1

/* 8bpp RGB 666 Converter Support */
#define BUILD_CONVERT_8_RGB_666 1

/* YUV Converter Support */
#define BUILD_CONVERT_YUV 1

/* Buffer rendering backend */
#define BUILD_ENGINE_BUFFER 1

/* Direct3D rendering backend */
/* #undef BUILD_ENGINE_DIRECT3D */

/* DirectFB rendering backend */
/* #undef BUILD_ENGINE_DIRECTFB */

/* Framebuffer rendering backend */
/* #undef BUILD_ENGINE_FB */

/* OpenGL Cocoa rendering backend */
/* #undef BUILD_ENGINE_GL_COCOA */

/* Generic OpenGL Rendering Support */
/* #undef BUILD_ENGINE_GL_COMMON */

/* OpenGL SDL rendering backend */
/* #undef BUILD_ENGINE_GL_SDL */

/* Build OpenGL X11 engine */
/* #undef BUILD_ENGINE_GL_X11 */

/* Build GL Xcb backend */
/* #undef BUILD_ENGINE_GL_XCB */

/* Build OpenGL Xlib backend */
/* #undef BUILD_ENGINE_GL_XLIB */

/* PSL1GHT rendering backend */
#define BUILD_ENGINE_PSL1GHT 1

/* Software DirectDraw 16 bits rendering backend */
/* #undef BUILD_ENGINE_SOFTWARE_16_DDRAW */

/* Software SDL 16 bits rendering backend */
#define BUILD_ENGINE_SOFTWARE_16_SDL 1

/* Software Windows CE 16 bits rendering backend */
/* #undef BUILD_ENGINE_SOFTWARE_16_WINCE */

/* Software X11 16 bits rendering backend */
/* #undef BUILD_ENGINE_SOFTWARE_16_X11 */

/* Software X11 8 bits grayscale rendering backend */
/* #undef BUILD_ENGINE_SOFTWARE_8_X11 */

/* Software DirectDraw rendering backend */
/* #undef BUILD_ENGINE_SOFTWARE_DDRAW */

/* Software GDI rendering backend */
/* #undef BUILD_ENGINE_SOFTWARE_GDI */

/* Software SDL rendering backend */
#define BUILD_ENGINE_SOFTWARE_SDL 1

/* Build software X11 engine */
/* #undef BUILD_ENGINE_SOFTWARE_X11 */

/* Build software XCB backend */
/* #undef BUILD_ENGINE_SOFTWARE_XCB */

/* Build software Xlib backend */
/* #undef BUILD_ENGINE_SOFTWARE_XLIB */

/* Wayland Egl rendering backend */
/* #undef BUILD_ENGINE_WAYLAND_EGL */

/* Wayland Shm rendering backend */
#define BUILD_ENGINE_WAYLAND_SHM 1

/* EET Font Loader Support */
#define BUILD_FONT_LOADER_EET 1

/* define to 1 if you have the line dither mask support */
/* #undef BUILD_LINE_DITHER_MASK */

/* UP Image Loader Support */
#define BUILD_LOADER_BMP 1

/* UP Image Loader Support */
/* #undef BUILD_LOADER_EDB */

/* UP Image Loader Support */
#define BUILD_LOADER_EET 1

/* UP Image Loader Support */
#define BUILD_LOADER_GENERIC 1

/* UP Image Loader Support */
/* #undef BUILD_LOADER_GIF */

/* UP Image Loader Support */
#define BUILD_LOADER_ICO 1

/* UP Image Loader Support */
#define BUILD_LOADER_JPEG 1

/* JPEG Region Decode Support */
/* #undef BUILD_LOADER_JPEG_REGION */

/* UP Image Loader Support */
#define BUILD_LOADER_PMAPS 1

/* UP Image Loader Support */
#define BUILD_LOADER_PNG 1

/* UP Image Loader Support */
#define BUILD_LOADER_PSD 1

/* UP Image Loader Support */
/* #undef BUILD_LOADER_SVG */

/* UP Image Loader Support */
#define BUILD_LOADER_TGA 1

/* UP Image Loader Support */
/* #undef BUILD_LOADER_TIFF */

/* UP Image Loader Support */
#define BUILD_LOADER_WBMP 1

/* UP Image Loader Support */
#define BUILD_LOADER_XPM 1

/* Build MMX Code */
/* #undef BUILD_MMX */

/* Build NEON Code */
/* #undef BUILD_NEON */

/* define to 1 if you have the conversion to 16bpp without dither mask support
   */
/* #undef BUILD_NO_DITHER_MASK */

/* Build pipe render support */
/* #undef BUILD_PIPE_RENDER */

/* Build Threaded Rendering */
/* #undef BUILD_PTHREAD */

/* define to 1 if you have the sampling scaler support */
#define BUILD_SCALE_SAMPLE 1

/* define to 1 if you have the smooth scaler support */
#define BUILD_SCALE_SMOOTH 1

/* define to 1 if you have the small dither mask support */
/* #undef BUILD_SMALL_DITHER_MASK */

/* Build SSE Code */
/* #undef BUILD_SSE */

/* Build SSE3 Code */
/* #undef BUILD_SSE3 */

/* Define to one of `_getb67', `GETB67', `getb67' for Cray-2 and Cray-YMP
   systems. This function is required for `alloca.c' support on those systems.
   */
/* #undef CRAY_STACKSEG_END */

/* Define to 1 if using `alloca.c'. */
/* #undef C_ALLOCA */

/* Macro declaring a function to always be inlined. */
#define EFL_ALWAYS_INLINE __attribute__ ((__always_inline__)) inline

/* Define to mention that evas is built */
/* #undef EFL_EVAS_BUILD */

/* Use SDL primitive when possible */
/* #undef ENGINE_SDL_PRIMITIVE */

/* Build JPEG saver */
/* #undef EVAS_BUILD_SAVER_JPEG */

/* Shared caceh server. */
/* #undef EVAS_CSERVE */

/* Build async render support */
/* #undef EVAS_FRAME_QUEUING */

/* complain when people pass in wrong object types etc. */
#define EVAS_MAGIC_DEBUG 1

/* Build BMP image loader inside libevas */
#define EVAS_STATIC_BUILD_BMP 1

/* Build buffer engine inside libevas */
#define EVAS_STATIC_BUILD_BUFFER 1

/* Build direct3d engine inside libevas */
/* #undef EVAS_STATIC_BUILD_DIRECT3D */

/* Build directfb engine inside libevas */
/* #undef EVAS_STATIC_BUILD_DIRECTFB */

/* Build Edb image loader inside libevas */
/* #undef EVAS_STATIC_BUILD_EDB */

/* Build Eet image loader inside libevas */
#define EVAS_STATIC_BUILD_EET 1

/* Build fb engine inside libevas */
/* #undef EVAS_STATIC_BUILD_FB */

/* Build GENERIC image loader inside libevas */
/* #undef EVAS_STATIC_BUILD_GENERIC */

/* Build Gif image loader inside libevas */
/* #undef EVAS_STATIC_BUILD_GIF */

/* Build gl-cocoa engine inside libevas */
/* #undef EVAS_STATIC_BUILD_GL_COCOA */

/* Build GL generic engine as part of libevas */
/* #undef EVAS_STATIC_BUILD_GL_COMMON */

/* Build gl-sdl engine inside libevas */
/* #undef EVAS_STATIC_BUILD_GL_SDL */

/* Build OpenGL X11 engine as part of libevas */
/* #undef EVAS_STATIC_BUILD_GL_X11 */

/* Build gl-xcb engine inside libevas */
/* #undef EVAS_STATIC_BUILD_GL_XCB */

/* Build gl-xlib engine inside libevas */
/* #undef EVAS_STATIC_BUILD_GL_XLIB */

/* Build ICO image loader inside libevas */
#define EVAS_STATIC_BUILD_ICO 1

/* Build Jpeg image loader inside libevas */
#define EVAS_STATIC_BUILD_JPEG 1

/* Build PMAPS image loader inside libevas */
#define EVAS_STATIC_BUILD_PMAPS 1

/* Build PNG image loader inside libevas */
#define EVAS_STATIC_BUILD_PNG 1

/* Build PSD image loader inside libevas */
#define EVAS_STATIC_BUILD_PSD 1

/* Build psl1ght engine inside libevas */
#define EVAS_STATIC_BUILD_PSL1GHT 1

/* Build software 16 engine as part of libevas */
#define EVAS_STATIC_BUILD_SOFTWARE_16 1

/* Build software-16-ddraw engine inside libevas */
/* #undef EVAS_STATIC_BUILD_SOFTWARE_16_DDRAW */

/* Build software-16-sdl engine inside libevas */
#define EVAS_STATIC_BUILD_SOFTWARE_16_SDL 1

/* Build software-16-wince engine inside libevas */
/* #undef EVAS_STATIC_BUILD_SOFTWARE_16_WINCE */

/* Build software-16-x11 engine inside libevas */
/* #undef EVAS_STATIC_BUILD_SOFTWARE_16_X11 */

/* Build software 8 engine as part of libevas */
/* #undef EVAS_STATIC_BUILD_SOFTWARE_8 */

/* Build software-8-x11 engine inside libevas */
/* #undef EVAS_STATIC_BUILD_SOFTWARE_8_X11 */

/* Build software-ddraw engine inside libevas */
/* #undef EVAS_STATIC_BUILD_SOFTWARE_DDRAW */

/* Build software-gdi engine inside libevas */
/* #undef EVAS_STATIC_BUILD_SOFTWARE_GDI */

/* Build software generic engine as part of libevas */
#define EVAS_STATIC_BUILD_SOFTWARE_GENERIC 1

/* Build software-sdl engine inside libevas */
#define EVAS_STATIC_BUILD_SOFTWARE_SDL 1

/* Build software X11 engine as part of libevas */
/* #undef EVAS_STATIC_BUILD_SOFTWARE_X11 */

/* Build software-xcb engine inside libevas */
/* #undef EVAS_STATIC_BUILD_SOFTWARE_XCB */

/* Build software-xlib engine inside libevas */
/* #undef EVAS_STATIC_BUILD_SOFTWARE_XLIB */

/* Build SVG image loader inside libevas */
/* #undef EVAS_STATIC_BUILD_SVG */

/* Build TGA image loader inside libevas */
#define EVAS_STATIC_BUILD_TGA 1

/* Build Tiff image loader inside libevas */
/* #undef EVAS_STATIC_BUILD_TIFF */

/* Build wayland-egl engine inside libevas */
/* #undef EVAS_STATIC_BUILD_WAYLAND_EGL */

/* Build wayland-shm engine inside libevas */
/* #undef EVAS_STATIC_BUILD_WAYLAND_SHM */

/* Build WBMP image loader inside libevas */
#define EVAS_STATIC_BUILD_WBMP 1

/* Build XPM image loader inside libevas */
#define EVAS_STATIC_BUILD_XPM 1

/* Samsung S3c6410 GLES2 support */
/* #undef GLES_VARIETY_S3C6410 */

/* Imagination SGX GLES2 support */
/* #undef GLES_VARIETY_SGX */

/* Define to 1 if you have `alloca', as a function or macro. */
#define HAVE_ALLOCA 1

/* Define to 1 if you have <alloca.h> and it should be used (not on Ultrix).
   */
#define HAVE_ALLOCA_H 1

/* Have altivec.h header file */
/* #undef HAVE_ALTIVEC_H */

/* Define to 1 if you have the <d3d9.h> header file. */
/* #undef HAVE_D3D9_H */

/* Define to 1 if you have the <d3dx9.h> header file. */
/* #undef HAVE_D3DX9_H */

/* Define to 1 if you have the <dlfcn.h> header file. */
/* #undef HAVE_DLFCN_H */

/* Define to 1 if you have the `dlsym' function. */
/* #undef HAVE_DLSYM */

/* Set to 1 if evil package is installed */
/* #undef HAVE_EVIL */

/* have fontconfig searching capabilities */
#define HAVE_FONTCONFIG 1

/* have fribidi support */
/* #undef HAVE_FRIBIDI */

/* Define to 1 if your compiler supports __attribute__ ((vector)). */
#define HAVE_GCC_ATTRIBUTE_VECTOR 1

/* have harfbuzz support */
/* #undef HAVE_HARFBUZZ */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* have liblinebreak support */
#define HAVE_LINEBREAK 1

/* C99 lround function exists */
#define HAVE_LROUND 1

/* Define to 1 if you have the <memory.h> header file. */
/* #undef HAVE_MEMORY_H */

/* Define to 1 if you have the <netinet/in.h> header file. */
#define HAVE_NETINET_IN_H 1

/* have pixman for rendering */
/* #undef HAVE_PIXMAN */

/* Define to 1 if you have the <pthread.h> header file. */
#define HAVE_PTHREAD_H 1

/* Define to 1 if you have the <sched.h> header file. */
#define HAVE_SCHED_H 1

/* SDL_OPENGLES flag is present */
/* #undef HAVE_SDL_FLAG_OPENGLES */

/* SDL_GL version attributes present */
/* #undef HAVE_SDL_GL_CONTEXT_VERSION */

/* Have shm_open() call */
/* #undef HAVE_SHM_OPEN */

/* Define to 1 if you have the `siglongjmp' function. */
/* #undef HAVE_SIGLONGJMP */

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if the system has the type `struct sigaction'. */
#define HAVE_STRUCT_SIGACTION 1

/* Define to 1 if you have the <sys/mman.h> header file. */
/* #undef HAVE_SYS_MMAN_H */

/* Define to 1 if you have the <sys/param.h> header file. */
#define HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Set to 1 if we enabled unit testing. */
/* #undef HAVE_TESTS */

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Valgrind support */
/* #undef HAVE_VALGRIND */

/* To avoid bug on old libXext version */
/* #undef LIBXEXT_VERSION_LOW */

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#define LT_OBJDIR ".libs/"

/* Experimental metric caching to speed up text rendering. */
/* #undef METRIC_CACHE */

/* "Module architecture" */
#define MODULE_ARCH "elf-powerpc64-1.1.99"

/* Name of package */
#define PACKAGE "evas"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "enlightenment-devel@lists.sourceforge.net"

/* Define to the full name of this package. */
#define PACKAGE_NAME "evas"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "evas 1.1.99.esportato"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "evas"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "1.1.99.esportato"

/* default value since PATH_MAX is not defined */
#define PATH_MAX 4096

/* Allow pixman to render fonts */
/* #undef PIXMAN_FONT */

/* Allow pixman to render images */
/* #undef PIXMAN_IMAGE */

/* Allow pixman to render image sampled scaling */
/* #undef PIXMAN_IMAGE_SCALE_SAMPLE */

/* Allow pixman to render lines */
/* #undef PIXMAN_LINE */

/* Allow pixman to render polys */
/* #undef PIXMAN_POLY */

/* Allow pixman to render rects */
/* #undef PIXMAN_RECT */

/* The size of `Eina_Unicode', as computed by sizeof. */
#define SIZEOF_EINA_UNICODE 4

/* The size of `FriBidiChar', as computed by sizeof. */
/* #undef SIZEOF_FRIBIDICHAR */

/* If using the C implementation of alloca, define if you know the
   direction of stack growth for your system; otherwise it will be
   automatically deduced at runtime.
	STACK_DIRECTION > 0 => grows toward higher addresses
	STACK_DIRECTION < 0 => grows toward lower addresses
	STACK_DIRECTION = 0 => direction of growth unknown */
/* #undef STACK_DIRECTION */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Enable tiled rotate algorithm */
/* #undef TILE_ROTATE */

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
#define VMAJ 1

/* Micro version */
#define VMIC 99

/* Minor version */
#define VMIN 1

/* Revison */
#define VREV esportato

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

/* Experimental word caching to speed up text rendering. */
/* #undef WORD_CACHE */

/* Define to 1 if the X Window System is missing or not being used. */
/* #undef X_DISPLAY_MISSING */

/* Define to 1 if on MINIX. */
/* #undef _MINIX */

/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
/* #undef _POSIX_1_SOURCE */

/* Define to 1 if you need to in order for `stat' and other things to work. */
/* #undef _POSIX_SOURCE */

/* __attribute__ ((unused)) is not supported. */
#define __UNUSED__ __attribute__ ((unused))

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */


#endif /* EFL_CONFIG_H__ */

