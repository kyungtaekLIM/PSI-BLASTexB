# $Id: Makefile.in 370712 2012-08-01 12:26:45Z camacho $

# Meta-makefile("APP" project)
#################################

REQUIRES = objects algo

APP_PROJ = blastdbcmd makeblastdb blastdb_aliastool blastdbcheck convert2blastmask blastdbcp makeprofiledb 

srcdir = /root/blasttest/source_upload/ncbi-blast-2.5.0+-src_psiblastexb/c++/src/app/blastdb
include /root/blasttest/source_upload/ncbi-blast-2.5.0+-src_psiblastexb/c++/ReleaseMT/build/Makefile.meta

.PHONY: all $(APP_PROJ)

makeblastdb:
	${MAKE} ${MFLAGS} -f Makefile.makeblastdb_app

blastdbcmd:
	${MAKE} ${MFLAGS} -f Makefile.blastdbcmd_app

blastdbcp:
	${MAKE} ${MFLAGS} -f Makefile.blastdbcp_app

blastdb_aliastool:
	${MAKE} ${MFLAGS} -f Makefile.blastdb_aliastool_app

blastdbcheck:
	${MAKE} ${MFLAGS} -f Makefile.blastdbcheck_app

convert2blastmask:
	${MAKE} ${MFLAGS} -f Makefile.convert2blastmask_app

makeprofiledb:
	${MAKE} ${MFLAGS} -f Makefile.makeprofiledb_app

