/* $Id$
 * ===========================================================================
 *
 *                            PUBLIC DOMAIN NOTICE
 *               National Center for Biotechnology Information
 *
 *  This software/database is a "United States Government Work" under the
 *  terms of the United States Copyright Act.  It was written as part of
 *  the author's official duties as a United States Government employee and
 *  thus cannot be copyrighted.  This software/database is freely available
 *  to the public for use. The National Library of Medicine and the U.S.
 *  Government have not placed any restriction on its use or reproduction.
 *
 *  Although all reasonable efforts have been taken to ensure the accuracy
 *  and reliability of the software and data, the NLM and the U.S.
 *  Government do not and cannot warrant the performance or results that
 *  may be obtained by using this software or data. The NLM and the U.S.
 *  Government disclaim all warranties, express or implied, including
 *  warranties of performance, merchantability or fitness for any particular
 *  purpose.
 *
 *  Please cite the author in any work or product based on this material.
 *
 * ===========================================================================
 *
 */

/// @file Blast4_task_info.hpp
/// User-defined methods of the data storage class.
///
/// This file was originally generated by application DATATOOL
/// using the following specifications:
/// 'blast.asn'.
///
/// New methods or data members can be added to it if needed.
/// See also: Blast4_task_info_.hpp


#ifndef OBJECTS_BLAST_BLAST4_TASK_INFO_HPP
#define OBJECTS_BLAST_BLAST4_TASK_INFO_HPP


// generated includes
#include <objects/blast/Blast4_task_info_.hpp>

// generated classes

BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::

/////////////////////////////////////////////////////////////////////////////
class NCBI_BLAST_EXPORT CBlast4_task_info : public CBlast4_task_info_Base
{
    typedef CBlast4_task_info_Base Tparent;
public:
    // constructor
    CBlast4_task_info(void);
    // destructor
    ~CBlast4_task_info(void);

private:
    // Prohibit copy constructor and assignment operator
    CBlast4_task_info(const CBlast4_task_info& value);
    CBlast4_task_info& operator=(const CBlast4_task_info& value);

};

/////////////////// CBlast4_task_info inline methods

// constructor
inline
CBlast4_task_info::CBlast4_task_info(void)
{
}


/////////////////// end of CBlast4_task_info inline methods


END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_BLAST_BLAST4_TASK_INFO_HPP
/* Original file checksum: lines: 86, chars: 2537, CRC32: 546c8349 */