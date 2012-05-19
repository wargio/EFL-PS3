/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */


#ifndef EFL_CONFIG_H__
#define EFL_CONFIG_H__


/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* enable bench tests for google hash method */
/* #undef CITYHASH_BENCH */

/* Define to one of `_getb67', `GETB67', `getb67' for Cray-2 and Cray-YMP
   systems. This function is required for `alloca.c' support on those systems.
   */
/* #undef CRAY_STACKSEG_END */

/* Define to 1 if using `alloca.c'. */
/* #undef C_ALLOCA */

/* Assert when forgot to call eina_threads_init */
/* #undef EFL_DEBUG_THREADS */

/* Define to mention that ALTIVEC is supported */
#define EFL_HAVE_ALTIVEC 1

/* Define to mention that MMX is supported */
/* #undef EFL_HAVE_MMX */

/* Define to mention that POSIX threads are supported */
/* #undef EFL_HAVE_POSIX_THREADS */

/* Define to mention that POSIX threads spinlocks are supported */
/* #undef EFL_HAVE_POSIX_THREADS_SPINLOCK */

/* Define to mention that SSE is supported */
/* #undef EFL_HAVE_SSE */

/* Define to mention that SSE2 is supported */
/* #undef EFL_HAVE_SSE2 */

/* Define to mention that POSIX or Win32 threads are supported */
/* #undef EFL_HAVE_THREADS */

/* Define to mention that Win32 threads are supported */
/* #undef EFL_HAVE_WIN32_THREADS */

/* make it possible to disable all locks */
/* #undef EFL_ON_OFF_THREADS */

/* Set to 1 if no is built */
/* #undef EINA_BUILD_BUDDY */

/* Set to 1 if ${enable_chained_pool} is built */
#define EINA_BUILD_CHAINED_POOL 1

/* Set to 1 if ${enable_ememoa} is built */
/* #undef EINA_BUILD_EMEMOA_FIXED */

/* Set to 1 if ${enable_ememoa} is built */
/* #undef EINA_BUILD_EMEMOA_UNKNOWN */

/* Set to 1 if no is built */
/* #undef EINA_BUILD_FIXED_BITMAP */

/* Set to 1 if ${enable_one_big} is built */
#define EINA_BUILD_ONE_BIG 1

/* Set to 1 if ${enable_pass_through} is built */
/* #undef EINA_BUILD_PASS_THROUGH */

/* if set, logging is limited to this amount. */
/* #undef EINA_LOG_LEVEL_MAXIMUM */

/* disable safety checks for NULL pointers and like. */
#define EINA_SAFETY_CHECKS 1

/* Set to 1 if no is statically built */
/* #undef EINA_STATIC_BUILD_BUDDY */

/* Set to 1 if ${enable_chained_pool} is statically built */
#define EINA_STATIC_BUILD_CHAINED_POOL 1

/* Set to 1 if ${enable_ememoa} is statically built */
/* #undef EINA_STATIC_BUILD_EMEMOA_FIXED */

/* Set to 1 if ${enable_ememoa} is statically built */
/* #undef EINA_STATIC_BUILD_EMEMOA_UNKNOWN */

/* Set to 1 if no is statically built */
/* #undef EINA_STATIC_BUILD_FIXED_BITMAP */

/* Set to 1 if ${enable_one_big} is statically built */
#define EINA_STATIC_BUILD_ONE_BIG 1

/* Set to 1 if ${enable_pass_through} is statically built */
/* #undef EINA_STATIC_BUILD_PASS_THROUGH */

/* Report Eina stringshare usage pattern */
/* #undef EINA_STRINGSHARE_USAGE */

/* Define to 1 if you have `alloca', as a function or macro. */
#define HAVE_ALLOCA 1

/* Define to 1 if you have <alloca.h> and it should be used (not on Ultrix).
   */
#define HAVE_ALLOCA_H 1

/* Define to 1 if you have a valid <dirent.h> header file. */
#define HAVE_DIRENT_H 1

/* Define to 1 if you have the `dirfd' function or macro. */
#define HAVE_DIRFD 1

/* Define to 1 if you have the `dladdr' function. */
/* #undef HAVE_DLADDR */

/* Define to 1 if you have the <dlfcn.h> header file. */
/* #undef HAVE_DLFCN_H */

/* Define to 1 if you have the `dlopen' function. */
/* #undef HAVE_DLOPEN */

/* Set to 1 if evil package is installed */
#define HAVE_ESCAPE 1

/* Set to 1 if evil package is installed */
/* #undef HAVE_EVIL */

/* Define to 1 if you have the `execvp' function. */
/* #undef HAVE_EXECVP */

/* Define to 1 if you have the `fpathconf' function. */
/* #undef HAVE_FPATHCONF */

/* Define to 1 if you have the `fstatat' function. */
/* #undef HAVE_FSTATAT */

/* Set to 1 if iconv library is installed */
/* #undef HAVE_ICONV */

/* Define to 1 if you have the <iconv.h> header file. */
#define HAVE_ICONV_H 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <libgen.h> header file. */
#define HAVE_LIBGEN_H 1

/* Define to 1 if we log support is on */
#define HAVE_LOG 1

/* Have mcheck.h */
/* #undef HAVE_MCHECK */

/* Define to 1 if you have the <mcheck.h> header file. */
/* #undef HAVE_MCHECK_H */

/* Define to 1 if you have the <memory.h> header file. */
/* #undef HAVE_MEMORY_H */

/* Have mtrace */
/* #undef HAVE_MTRACE */

/* Define to 1 if you have the `openat' function. */
/* #undef HAVE_OPENAT */

/* Define to 1 if you have the `shm_open' function. */
/* #undef HAVE_SHMOPEN */

/* Define to 1 if you have the <siginfo.h> header file. */
/* #undef HAVE_SIGINFO_H */

/* Define to 1 if the system has the type `siginfo_t'. */
/* #undef HAVE_SIGINFO_T */

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

/* Define to 1 if the system has the type `struct dirent'. */
#define HAVE_STRUCT_DIRENT 1

/* Define to 1 if you have the <sys/mman.h> header file. */
#define HAVE_SYS_MMAN_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the `listxattr', `setxattr' and `getxattr'
   functions. */
/* #undef HAVE_XATTR */

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#define LT_OBJDIR ".libs/"

/* "Module architecture" */
#define MODULE_ARCH "elf-powerpc64-1.1.99"

/* Define to 1 if assertions should be disabled. */
/* #undef NDEBUG */

/* Valgrind support disabled */
#define NVALGRIND 1

/* Name of package */
#define PACKAGE "eina"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "enlightenment-devel@lists.sourceforge.net"

/* Define to the full name of this package. */
#define PACKAGE_NAME "eina"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "eina 1.1.99.esportato"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "eina"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "1.1.99.esportato"

/* default value since PATH_MAX is not defined */
#define PATH_MAX 4096

/* Suffix for shared objects */
#define SHARED_LIB_SUFFIX ".so"

/* The size of `wchar_t', as computed by sizeof. */
#define SIZEOF_WCHAR_T 4

/* If using the C implementation of alloca, define if you know the
   direction of stack growth for your system; otherwise it will be
   automatically deduced at runtime.
	STACK_DIRECTION > 0 => grows toward higher addresses
	STACK_DIRECTION < 0 => grows toward lower addresses
	STACK_DIRECTION = 0 => direction of growth unknown */
/* #undef STACK_DIRECTION */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#define TIME_WITH_SYS_TIME 1

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

/* __attribute__ ((unused)) is not supported. */
#define __UNUSED__ __attribute__ ((unused))

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif


#endif /* EFL_CONFIG_H__ */

