#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.
AC_INIT([pythagoras], [0.1], [lopesivan.ufrj@gmail.com],
        [MMMMMMMMMMMMMMMMM], [ivanlopes.eng.br])

# Force autoconf to be at least this version number:# Force autoconf to be at least this version number:
AC_PREREQ([2.68])

# Safety check - list a source file that wouldn't be in other directories:
#AC_CONFIG_SRCDIR([about.c])

# Put configuration results here, so we can easily #include them:
#AC_CONFIG_HEADERS([config.h])

# Put autotools auxiliary files in a subdir, so they don't clutter top dir:
AC_CONFIG_AUX_DIR([build-aux])

# The modern autotools convention is that you should use an "m4" subdirectory
# for internal "m4" files, instead of the default aclocal.m4.
AC_CONFIG_MACRO_DIR([m4])

# Enable "automake" to simplify creating makefiles:
AM_INIT_AUTOMAKE([foreign subdir-objects])

# Checks for programs.
AC_PROG_CC
AM_PROG_CC_C_O

# We use libraries
AC_PROG_RANLIB

# Checks for libraries.

# Checks for header files.
AC_CHECK_HEADERS([stdio.h])
AC_CHECK_HEADERS([stdlib.h])
AC_CHECK_HEADERS([math.h])

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.

AC_CONFIG_FILES([src/Makefile ])

AC_OUTPUT

AC_MSG_RESULT(
[
--------------------------------------------------
${PACKAGE_NAME} Version ${PACKAGE_VERSION}

 Prefix: '${prefix}'.
 Compiler: '${CC} ${CFLAGS}'
 Libraries: '${LIBS}'

 Now type 'make @<:@<target>@:>@'
   where the optional <target> is:
     all                - build all binaries
     install            - install everything

--------------------------------------------------])
