bin_PROGRAMS=hello
hello_SOURCES=hello.c
AM_CFLAGS=$(DEPS_CFLAGS) -I$(top_builddir) -DLOCALEDIR=\"${LOCALEDIR}\"
hello_LDADD=$(DEPS_LIBS) $(top_builddir)/lib/libfoo.la
