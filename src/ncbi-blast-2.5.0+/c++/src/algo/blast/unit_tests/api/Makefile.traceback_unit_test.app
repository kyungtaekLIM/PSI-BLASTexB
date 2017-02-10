# $Id: Makefile.traceback_unit_test.app 505858 2016-06-29 16:55:21Z elisovdn $

APP = traceback_unit_test
SRC = traceback_unit_test 

CPPFLAGS = -DNCBI_MODULE=BLAST $(ORIG_CPPFLAGS) $(BOOST_INCLUDE) -I$(srcdir)/../../api
LIB = blast_unit_test_util test_boost $(BLAST_LIBS) xobjsimple $(OBJMGR_LIBS:ncbi_x%=ncbi_x%$(DLL))
LIBS = $(NETWORK_LIBS) $(CMPRS_LIBS) $(DL_LIBS) $(ORIG_LIBS)


CHECK_REQUIRES = MT in-house-resources
CHECK_CMD = traceback_unit_test
CHECK_COPY = traceback_unit_test.ini data

WATCHERS = boratyng madden camacho fongah2