ncbi_types.o ncbi_types.d : \
 $(wildcard /root/blasttest/source_upload/ncbi-blast-2.5.0+-src_psiblastexb/c++/src/connect/ncbi_types.c) \
 $(wildcard $(includedir)/connect/ncbi_types.h) \
 $(wildcard $(includedir)/connect/connect_export.h) \
 $(wildcard /usr/include/inttypes.h) $(wildcard /usr/include/features.h) $(wildcard /usr/include/sys/cdefs.h) \
 $(wildcard /usr/include/bits/wordsize.h) $(wildcard /usr/include/gnu/stubs.h) \
 $(wildcard /usr/include/gnu/stubs-64.h) \
 $(wildcard /opt/rh/devtoolset-2/root/usr/lib/gcc/x86_64-redhat-linux/4.8.2/include/stdint.h) \
 $(wildcard /usr/include/stdint.h) $(wildcard /usr/include/bits/wchar.h) \
 $(wildcard /opt/rh/devtoolset-2/root/usr/lib/gcc/x86_64-redhat-linux/4.8.2/include/stddef.h)
