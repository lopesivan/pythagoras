#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.
AC_INIT([pythagoras], [0.1], [lopesivan.ufrj@gmail.com],
        [pythagoras], [ivanlopes.eng.br])

# Force autoconf to be at least this version number:# Force autoconf to be at least this version number:
AC_PREREQ([2.68])

# Enable "automake" to simplify creating makefiles:
AM_INIT_AUTOMAKE

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

AC_CONFIG_FILES([Makefile
				 src/Makefile ])

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
