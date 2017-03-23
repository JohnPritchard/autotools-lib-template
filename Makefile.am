lib_LTLIBRARIES = libhello.la

libhello_la_SOURCES = \
                      src/main.cpp \
                      src/hello.cpp

# Public headers to be installed
include_HEADERS = hello.hpp

AM_CPPFLAGS = -include config.hpp
AM_CXXFLAGS = -Wall -Wextra -Werror -pedantic
AM_CFLAGS = -Wall -Wextra -Werror -pedantic

