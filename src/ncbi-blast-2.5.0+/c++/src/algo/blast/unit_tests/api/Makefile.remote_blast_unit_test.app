# $Id: Makefile.remote_blast_unit_test.app 505858 2016-06-29 16:55:21Z elisovdn $

APP = remote_blast_unit_test
SRC = remote_blast_unit_test 

CPPFLAGS = -DNCBI_MODULE=BLAST $(ORIG_CPPFLAGS) $(BOOST_INCLUDE) -I$(srcdir)/../../api 
LIB = blast_unit_test_util test_boost $(BLAST_LIBS) xobjsimple $(OBJMGR_LIBS:ncbi_x%=ncbi_x%$(DLL))
LIBS = $(NETWORK_LIBS) $(CMPRS_LIBS) $(DL_LIBS) $(ORIG_LIBS)

CHECK_REQUIRES = MT in-house-resources
CHECK_CMD = remote_blast_unit_test
CHECK_COPY = remote_blast_unit_test.ini data

WATCHERS = madden camacho merezhuk raytseli
