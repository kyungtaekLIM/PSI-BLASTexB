ncbicfg.o ncbicfg.d : $(wildcard ncbicfg.c) \
 $(wildcard $(includedir)/corelib/ncbicfg.h) \
 $(wildcard $(includedir)/common/ncbi_export.h) \
 $(wildcard $(includedir)/ncbiconf.h) \
 $(wildcard $(incdir)/ncbiconf_unix.h) \
 $(wildcard $(includedir)/common/ncbiconf_impl.h) \
 $(wildcard $(includedir)/common/ncbi_skew_guard.h) \
 $(wildcard /usr/include/stdlib.h) $(wildcard /usr/include/features.h) $(wildcard /usr/include/sys/cdefs.h) \
 $(wildcard /usr/include/bits/wordsize.h) $(wildcard /usr/include/gnu/stubs.h) \
 $(wildcard /usr/include/gnu/stubs-64.h) \
 $(wildcard /opt/rh/devtoolset-2/root/usr/lib/gcc/x86_64-redhat-linux/4.8.2/include/stddef.h) \
 $(wildcard /usr/include/bits/waitflags.h) $(wildcard /usr/include/bits/waitstatus.h) \
 $(wildcard /usr/include/endian.h) $(wildcard /usr/include/bits/endian.h) \
 $(wildcard /usr/include/bits/byteswap.h) $(wildcard /usr/include/xlocale.h) \
 $(wildcard /usr/include/sys/types.h) $(wildcard /usr/include/bits/types.h) \
 $(wildcard /usr/include/bits/typesizes.h) $(wildcard /usr/include/time.h) \
 $(wildcard /usr/include/sys/select.h) $(wildcard /usr/include/bits/select.h) \
 $(wildcard /usr/include/bits/sigset.h) $(wildcard /usr/include/bits/time.h) \
 $(wildcard /usr/include/sys/sysmacros.h) $(wildcard /usr/include/bits/pthreadtypes.h) \
 $(wildcard /usr/include/alloca.h) $(wildcard /usr/include/unistd.h) \
 $(wildcard /usr/include/bits/posix_opt.h) $(wildcard /usr/include/bits/environments.h) \
 $(wildcard /usr/include/bits/confname.h) $(wildcard /usr/include/getopt.h)
