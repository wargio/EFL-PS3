/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */


#ifndef EFL_CONFIG_H__
#define EFL_CONFIG_H__


/* Use Fixed Point instead of FPU */
/* #undef BUILD_EDJE_FP */

/* Define to one of `_getb67', `GETB67', `getb67' for Cray-2 and Cray-YMP
   systems. This function is required for `alloca.c' support on those systems.
   */
/* #undef CRAY_STACKSEG_END */

/* Define to 1 if using `alloca.c'. */
/* #undef C_ALLOCA */

/* Cache result of edje_part_recalc - this uses up extra ram with the gain of
   reducing CPU usage when edje object are not resized */
#define EDJE_CALC_CACHE 1

/* Cache result of program glob matches - this uses up extra ram with the gain
   of faster program matching */
/* #undef EDJE_PROGRAM_CACHE */

/* Use Multisense */
/* #undef ENABLE_MULTISENSE */

/* Define to 1 if you have `alloca', as a function or macro. */
#define HAVE_ALLOCA 1

/* Define to 1 if you have <alloca.h> and it should be used (not on Ultrix).
   */
#define HAVE_ALLOCA_H 1

/* Define to 1 if you have the <dlfcn.h> header file. */
/* #undef HAVE_DLFCN_H */

/* Input Method Support for Edje Entry */
#define HAVE_ECORE_IMF 1

/* Set to 1 if Evil library is installed */
/* #undef HAVE_EVIL */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* ALSA support for Edje */
/* #undef HAVE_LIBALSA */

/* flac support for Edje */
/* #undef HAVE_LIBFLAC */

/* remix support for Edje */
/* #undef HAVE_LIBREMIX */

/* sndfile support for Edje */
/* #undef HAVE_LIBSNDFILE */

/* Define to 1 if you have the <locale.h> header file. */
#define HAVE_LOCALE_H 1

/* Define to 1 if you have the <memory.h> header file. */
/* #undef HAVE_MEMORY_H */

/* Define to 1 if you have the `realpath' function. */
/* #undef HAVE_REALPATH */

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/resource.h> header file. */
#define HAVE_SYS_RESOURCE_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* vorbis support for Edje */
/* #undef HAVE_VORBIS */

/* Define to 1 if your compiler has __attribute__ */
#define HAVE___ATTRIBUTE__ 1

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#define LT_OBJDIR ".libs/"

/* "Module architecture" */
#define MODULE_ARCH "elf-powerpc64-1.0.0"

/* Define to 1 if your C compiler doesn't accept -c and -o together. */
/* #undef NO_MINUS_C_MINUS_O */

/* Name of package */
#define PACKAGE "edje"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "enlightenment-devel@lists.sourceforge.net"

/* Define to the full name of this package. */
#define PACKAGE_NAME "edje"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "edje 1.1.99.esportato"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "edje"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "1.1.99.esportato"

/* default value since PATH_MAX is not defined */
#define PATH_MAX 4096

/* Set the remix plugin directory */
/* #undef REMIX_PLUGIN_DIR */

/* Suffix for shared objects */
#define SHARED_LIB_SUFFIX ".so"

/* If using the C implementation of alloca, define if you know the
   direction of stack growth for your system; otherwise it will be
   automatically deduced at runtime.
	STACK_DIRECTION > 0 => grows toward higher addresses
	STACK_DIRECTION < 0 => grows toward lower addresses
	STACK_DIRECTION = 0 => direction of growth unknown */
/* #undef STACK_DIRECTION */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

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

/* "Set to REMIX Plugin type" */
/* #undef __REMIX_PLUGIN__ */

/* Macro declaring a function argument to be unused */
#define __UNUSED__ __attribute__((unused))

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */


#endif /* EFL_CONFIG_H__ */

