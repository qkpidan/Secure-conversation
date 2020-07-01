#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([kdc-com], [0.01], [qkpidan@gmail.com])
AC_CONFIG_SRCDIR([main.c])
AC_CONFIG_HEADERS([config.h])
AM_INIT_AUTOMAKE
# Checks for programs.
AC_PROG_CC
AC_PROG_RANLIB
# Checks for libraries.
# FIXME: Replace `main' with a function in `-lpthred':
AC_CHECK_LIB([pthred], [main])

# Checks for header files.

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.
AC_FUNC_MALLOC

AC_CONFIG_FILES([Makefile
                 encrypt/Makefile])
AC_OUTPUT
