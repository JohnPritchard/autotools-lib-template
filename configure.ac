AC_PREREQ([2.69])

AC_INIT([libhello], [1.0.0], [http://libhello.org/])
AC_CONFIG_AUX_DIR([build-aux])
AC_CONFIG_MACRO_DIR([m4])

AM_INIT_AUTOMAKE([foreign dist-bzip2 subdir-objects 1.14])
AC_CONFIG_FILES([Makefile])
AM_SILENT_RULES([yes])

AC_PROG_CXX
AX_CXX_COMPILE_STDCXX_11([noext], [mandatory])
AX_CXX_HAVE_STL

AX_BOOST_BASE([1.54],, [AC_MSG_ERROR([AC_PACKAGE_NAME needs Boost, but it was not found in your system])])

AC_CONFIG_HEADERS([config.hpp])

LT_PREREQ([2.4])
LT_INIT

AC_OUTPUT

