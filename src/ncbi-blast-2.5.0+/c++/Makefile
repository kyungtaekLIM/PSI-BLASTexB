# $Id: Makefile.in.top 451817 2014-11-12 16:41:55Z ucko $
# Top-level meta-makefile that simplifies building even further.

# include /root/blasttest/source_upload/ncbi-blast-2.5.0+-src_psiblastexb/c++/ReleaseMT/build/Makefile.mk
include /root/blasttest/source_upload/ncbi-blast-2.5.0+-src_psiblastexb/c++/ReleaseMT/build/Makefile.mk

prefix 	     = /usr/local
exec_prefix  = ${prefix}
PACKAGE_NAME = ncbi-tools++
bindir 	     = ${exec_prefix}/bin
libdir 	     = ${exec_prefix}/lib
includedir   = ${prefix}/include
pincludedir  = $(includedir)/$(PACKAGE_NAME)
BASENAME     = /bin/basename
INSTALL      = /usr/bin/install -c
LN_S         = /bin/ln -s

lbindir      = $(build_root)/bin
llibdir      = $(build_root)/lib

PROJECTS     = 

all: $(PROJECTS)
	if test -f $(builddir)/Makefile.flat; then \
	    cd $(builddir) && $(MAKE) -f Makefile.flat; \
	elif test -s "$(PROJECTS)"; then \
	    cd $(builddir) && $(MAKE) $(MFLAGS) all_p; \
	else \
	    cd $(builddir) && $(MAKE) $(MFLAGS) all_r; \
	fi

check: $(PROJECTS)
	if test -s "$(PROJECTS)"; then \
	    cd $(builddir) && $(MAKE) $(MFLAGS) check_p RUN_CHECK=Y; \
	else \
	    cd $(builddir) && $(MAKE) $(MFLAGS) check_r RUN_CHECK=Y; \
	fi

install-toolkit:
	-$(RMDIR) $(pincludedir)
	$(INSTALL) -d $(bindir) $(libdir) $(pincludedir)
	$(INSTALL) $(lbindir)/* $(bindir)
	$(INSTALL) -m 644 $(llibdir)/*.* $(libdir)
	if test -d $(llibdir)/ncbi; then \
	    cp -pPR $(llibdir)/ncbi $(libdir)/; \
	fi
	-rm -f $(libdir)/lib*-static.a
	cd $(libdir)  && \
	    for x in *.a; do \
	        $(LN_S) "$$x" "`$(BASENAME) \"$$x\" .a`-static.a"; \
	    done
	cd $(includedir0) && find * -name CVS -prune -o -print |\
            cpio -pd $(pincludedir)
	$(INSTALL) -m 644 $(incdir)/* $(pincludedir)
## set up appropriate build and status directories somewhere under $(libdir)?

install-gbench:
	cd $(builddir)/app/gbench/gbench_install  && \
            $(MAKE) $(MFLAGS) install_dir=$(exec_prefix)

install:
	if test -d $(lbindir)/gbench; then \
	    $(MAKE) $(MFLAGS) install-gbench; \
	else \
	    $(MAKE) $(MFLAGS) install-toolkit; \
	fi
