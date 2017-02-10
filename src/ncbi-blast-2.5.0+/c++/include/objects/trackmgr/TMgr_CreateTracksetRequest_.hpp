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

/// @file TMgr_CreateTracksetRequest_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'trackmgr.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_TRACKMGR_TMGR_CREATETRACKSETREQUEST_BASE_HPP
#define OBJECTS_TRACKMGR_TMGR_CREATETRACKSETREQUEST_BASE_HPP

// extra headers
#include <objects/trackmgr/trackmgr_export.h>

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <list>
#include <string>

BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// forward declarations
class CTMgr_DTrackId;
class CTMgr_GenomeContext;
class CTMgr_Identity;


// generated classes

/////////////////////////////////////////////////////////////////////////////
class NCBI_TRACKMGR_EXPORT CTMgr_CreateTracksetRequest_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CTMgr_CreateTracksetRequest_Base(void);
    // destructor
    virtual ~CTMgr_CreateTracksetRequest_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef CTMgr_Identity TIdentity;
    typedef CTMgr_GenomeContext TGenome_context;
    typedef CStringUTF8 TName;
    typedef CStringUTF8 TDescription;
    typedef list< CRef< CTMgr_DTrackId > > TTracks;

    // getters
    // setters

    /// optional
    /// typedef CTMgr_Identity TIdentity
    ///  Check whether the Identity data member has been assigned a value.
    bool IsSetIdentity(void) const;
    /// Check whether it is safe or not to call GetIdentity method.
    bool CanGetIdentity(void) const;
    void ResetIdentity(void);
    const TIdentity& GetIdentity(void) const;
    void SetIdentity(TIdentity& value);
    TIdentity& SetIdentity(void);

    /// mandatory
    /// typedef CTMgr_GenomeContext TGenome_context
    ///  Check whether the Genome_context data member has been assigned a value.
    bool IsSetGenome_context(void) const;
    /// Check whether it is safe or not to call GetGenome_context method.
    bool CanGetGenome_context(void) const;
    void ResetGenome_context(void);
    const TGenome_context& GetGenome_context(void) const;
    void SetGenome_context(TGenome_context& value);
    TGenome_context& SetGenome_context(void);

    /// mandatory
    /// typedef CStringUTF8 TName
    ///  Check whether the Name data member has been assigned a value.
    bool IsSetName(void) const;
    /// Check whether it is safe or not to call GetName method.
    bool CanGetName(void) const;
    void ResetName(void);
    const TName& GetName(void) const;
    void SetName(const TName& value);
    TName& SetName(void);

    /// optional
    /// typedef CStringUTF8 TDescription
    ///  Check whether the Description data member has been assigned a value.
    bool IsSetDescription(void) const;
    /// Check whether it is safe or not to call GetDescription method.
    bool CanGetDescription(void) const;
    void ResetDescription(void);
    const TDescription& GetDescription(void) const;
    void SetDescription(const TDescription& value);
    TDescription& SetDescription(void);

    /// mandatory
    /// typedef list< CRef< CTMgr_DTrackId > > TTracks
    ///  Check whether the Tracks data member has been assigned a value.
    bool IsSetTracks(void) const;
    /// Check whether it is safe or not to call GetTracks method.
    bool CanGetTracks(void) const;
    void ResetTracks(void);
    const TTracks& GetTracks(void) const;
    TTracks& SetTracks(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CTMgr_CreateTracksetRequest_Base(const CTMgr_CreateTracksetRequest_Base&);
    CTMgr_CreateTracksetRequest_Base& operator=(const CTMgr_CreateTracksetRequest_Base&);

    // data
    Uint4 m_set_State[1];
    CRef< TIdentity > m_Identity;
    CRef< TGenome_context > m_Genome_context;
    CStringUTF8 m_Name;
    CStringUTF8 m_Description;
    list< CRef< CTMgr_DTrackId > > m_Tracks;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CTMgr_CreateTracksetRequest_Base::IsSetIdentity(void) const
{
    return m_Identity.NotEmpty();
}

inline
bool CTMgr_CreateTracksetRequest_Base::CanGetIdentity(void) const
{
    return IsSetIdentity();
}

inline
const CTMgr_CreateTracksetRequest_Base::TIdentity& CTMgr_CreateTracksetRequest_Base::GetIdentity(void) const
{
    if (!CanGetIdentity()) {
        ThrowUnassigned(0);
    }
    return (*m_Identity);
}

inline
bool CTMgr_CreateTracksetRequest_Base::IsSetGenome_context(void) const
{
    return m_Genome_context.NotEmpty();
}

inline
bool CTMgr_CreateTracksetRequest_Base::CanGetGenome_context(void) const
{
    return true;
}

inline
const CTMgr_CreateTracksetRequest_Base::TGenome_context& CTMgr_CreateTracksetRequest_Base::GetGenome_context(void) const
{
    if ( !m_Genome_context ) {
        const_cast<CTMgr_CreateTracksetRequest_Base*>(this)->ResetGenome_context();
    }
    return (*m_Genome_context);
}

inline
CTMgr_CreateTracksetRequest_Base::TGenome_context& CTMgr_CreateTracksetRequest_Base::SetGenome_context(void)
{
    if ( !m_Genome_context ) {
        ResetGenome_context();
    }
    return (*m_Genome_context);
}

inline
bool CTMgr_CreateTracksetRequest_Base::IsSetName(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CTMgr_CreateTracksetRequest_Base::CanGetName(void) const
{
    return IsSetName();
}

inline
const CTMgr_CreateTracksetRequest_Base::TName& CTMgr_CreateTracksetRequest_Base::GetName(void) const
{
    if (!CanGetName()) {
        ThrowUnassigned(2);
    }
    return m_Name;
}

inline
void CTMgr_CreateTracksetRequest_Base::SetName(const CTMgr_CreateTracksetRequest_Base::TName& value)
{
    m_Name = value;
    m_set_State[0] |= 0x30;
}

inline
CTMgr_CreateTracksetRequest_Base::TName& CTMgr_CreateTracksetRequest_Base::SetName(void)
{
#ifdef _DEBUG
    if (!IsSetName()) {
        m_Name = UnassignedStringUTF8();
    }
#endif
    m_set_State[0] |= 0x10;
    return m_Name;
}

inline
bool CTMgr_CreateTracksetRequest_Base::IsSetDescription(void) const
{
    return ((m_set_State[0] & 0xc0) != 0);
}

inline
bool CTMgr_CreateTracksetRequest_Base::CanGetDescription(void) const
{
    return IsSetDescription();
}

inline
const CTMgr_CreateTracksetRequest_Base::TDescription& CTMgr_CreateTracksetRequest_Base::GetDescription(void) const
{
    if (!CanGetDescription()) {
        ThrowUnassigned(3);
    }
    return m_Description;
}

inline
void CTMgr_CreateTracksetRequest_Base::SetDescription(const CTMgr_CreateTracksetRequest_Base::TDescription& value)
{
    m_Description = value;
    m_set_State[0] |= 0xc0;
}

inline
CTMgr_CreateTracksetRequest_Base::TDescription& CTMgr_CreateTracksetRequest_Base::SetDescription(void)
{
#ifdef _DEBUG
    if (!IsSetDescription()) {
        m_Description = UnassignedStringUTF8();
    }
#endif
    m_set_State[0] |= 0x40;
    return m_Description;
}

inline
bool CTMgr_CreateTracksetRequest_Base::IsSetTracks(void) const
{
    return ((m_set_State[0] & 0x300) != 0);
}

inline
bool CTMgr_CreateTracksetRequest_Base::CanGetTracks(void) const
{
    return true;
}

inline
const CTMgr_CreateTracksetRequest_Base::TTracks& CTMgr_CreateTracksetRequest_Base::GetTracks(void) const
{
    return m_Tracks;
}

inline
CTMgr_CreateTracksetRequest_Base::TTracks& CTMgr_CreateTracksetRequest_Base::SetTracks(void)
{
    m_set_State[0] |= 0x100;
    return m_Tracks;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_TRACKMGR_TMGR_CREATETRACKSETREQUEST_BASE_HPP