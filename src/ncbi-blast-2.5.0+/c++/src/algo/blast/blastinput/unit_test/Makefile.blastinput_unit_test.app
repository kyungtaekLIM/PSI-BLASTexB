# $Id: Makefile.blastinput_unit_test.app 505858 2016-06-29 16:55:21Z elisovdn $

APP = blastinput_unit_test
SRC = blastinput_unit_test blast_scope_src_unit_test

CPPFLAGS = $(ORIG_CPPFLAGS) $(BOOST_INCLUDE)

ENTREZ_LIBS = entrez2cli entrez2

LIB_ = test_boost $(ENTREZ_LIBS) $(BLAST_INPUT_LIBS) \
       $(BLAST_LIBS) $(OBJMGR_LIBS)
LIB = $(LIB_:%=%$(STATIC))

LIBS = $(NETWORK_LIBS) $(CMPRS_LIBS) $(DL_LIBS) $(ORIG_LIBS)
CXXFLAGS = $(FAST_CXXFLAGS:ppc=i386) 
LDFLAGS = $(FAST_LDFLAGS) 

REQUIRES = objects Boost.Test.Included

CHECK_REQUIRES = in-house-resources
CHECK_CMD = blastinput_unit_test
CHECK_COPY = data blastinput_unit_test.ini
CHECK_TIMEOUT = 900

WATCHERS = madden camacho fongah2
