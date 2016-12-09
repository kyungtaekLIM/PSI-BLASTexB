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

/// @file Remap_reply.hpp
/// User-defined methods of the data storage class.
///
/// This file was originally generated by application DATATOOL
/// using the following specifications:
/// 'remap.asn'.
///
/// New methods or data members can be added to it if needed.
/// See also: Remap_reply_.hpp


#ifndef OBJECTS_REMAP_REMAP_REPLY_HPP
#define OBJECTS_REMAP_REMAP_REPLY_HPP


// generated includes
#include <objects/remap/Remap_reply_.hpp>

// generated classes

BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::

/////////////////////////////////////////////////////////////////////////////
class NCBI_REMAP_EXPORT CRemap_reply : public CRemap_reply_Base
{
    typedef CRemap_reply_Base Tparent;
public:
    // constructor
    CRemap_reply(void);
    // destructor
    ~CRemap_reply(void);

private:
    // Prohibit copy constructor and assignment operator
    CRemap_reply(const CRemap_reply& value);
    CRemap_reply& operator=(const CRemap_reply& value);

};

/////////////////// CRemap_reply inline methods

// constructor
inline
CRemap_reply::CRemap_reply(void)
{
}


/////////////////// end of CRemap_reply inline methods


END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_REMAP_REMAP_REPLY_HPP
/* Original file checksum: lines: 86, chars: 2442, CRC32: 7b02f8b1 */