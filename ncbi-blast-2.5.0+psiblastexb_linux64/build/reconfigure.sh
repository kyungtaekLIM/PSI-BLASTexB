#! /bin/sh

# $Id: reconfigure.sh.in 117476 2008-01-16 16:44:07Z ucko $
# Author:  Denis Vakatov, NCBI 
# 
#  Launcher for "scripts/common/impl/reconfigure.sh"

builddir=/root/blasttest/source_upload/ncbi-blast-2.5.0+-src/c++/ReleaseMT/build
export builddir

exec /root/blasttest/source_upload/ncbi-blast-2.5.0+-src/c++/scripts/common/impl/reconfigure.sh "$@"
