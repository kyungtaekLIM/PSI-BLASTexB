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

/// @file Cn3d_user_annotation_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'cn3d.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_CN3D_CN3D_USER_ANNOTATION_BASE_HPP
#define OBJECTS_CN3D_CN3D_USER_ANNOTATION_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <list>
#include <string>
#include <objects/cn3d/Cn3d_style_table_id.hpp>

BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// forward declarations
class CCn3d_object_location;


// generated classes

/////////////////////////////////////////////////////////////////////////////
/// information for an individual user annotation
class NCBI_CN3D_EXPORT CCn3d_user_annotation_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CCn3d_user_annotation_Base(void);
    // destructor
    virtual ~CCn3d_user_annotation_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef string TName;
    typedef string TDescription;
    typedef CCn3d_style_table_id TStyle_id;
    typedef list< CRef< CCn3d_object_location > > TResidues;
    typedef bool TIs_on;

    // getters
    // setters

    /// a (short) name for this annotation
    /// mandatory
    /// typedef string TName
    ///  Check whether the Name data member has been assigned a value.
    bool IsSetName(void) const;
    /// Check whether it is safe or not to call GetName method.
    bool CanGetName(void) const;
    void ResetName(void);
    const TName& GetName(void) const;
    void SetName(const TName& value);
    TName& SetName(void);

    /// an optional longer description
    /// optional
    /// typedef string TDescription
    ///  Check whether the Description data member has been assigned a value.
    bool IsSetDescription(void) const;
    /// Check whether it is safe or not to call GetDescription method.
    bool CanGetDescription(void) const;
    void ResetDescription(void);
    const TDescription& GetDescription(void) const;
    void SetDescription(const TDescription& value);
    TDescription& SetDescription(void);

    /// how to draw this annotation
    /// mandatory
    /// typedef CCn3d_style_table_id TStyle_id
    ///  Check whether the Style_id data member has been assigned a value.
    bool IsSetStyle_id(void) const;
    /// Check whether it is safe or not to call GetStyle_id method.
    bool CanGetStyle_id(void) const;
    void ResetStyle_id(void);
    const TStyle_id& GetStyle_id(void) const;
    void SetStyle_id(const TStyle_id& value);
    TStyle_id& SetStyle_id(void);

    /// which residues to cover
    /// mandatory
    /// typedef list< CRef< CCn3d_object_location > > TResidues
    ///  Check whether the Residues data member has been assigned a value.
    bool IsSetResidues(void) const;
    /// Check whether it is safe or not to call GetResidues method.
    bool CanGetResidues(void) const;
    void ResetResidues(void);
    const TResidues& GetResidues(void) const;
    TResidues& SetResidues(void);

    /// whether this annotation is to be turned on in Cn3D
    /// mandatory
    /// typedef bool TIs_on
    ///  Check whether the Is_on data member has been assigned a value.
    bool IsSetIs_on(void) const;
    /// Check whether it is safe or not to call GetIs_on method.
    bool CanGetIs_on(void) const;
    void ResetIs_on(void);
    TIs_on GetIs_on(void) const;
    void SetIs_on(TIs_on value);
    TIs_on& SetIs_on(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CCn3d_user_annotation_Base(const CCn3d_user_annotation_Base&);
    CCn3d_user_annotation_Base& operator=(const CCn3d_user_annotation_Base&);

    // data
    Uint4 m_set_State[1];
    string m_Name;
    string m_Description;
    CCn3d_style_table_id m_Style_id;
    list< CRef< CCn3d_object_location > > m_Residues;
    bool m_Is_on;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CCn3d_user_annotation_Base::IsSetName(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CCn3d_user_annotation_Base::CanGetName(void) const
{
    return IsSetName();
}

inline
const CCn3d_user_annotation_Base::TName& CCn3d_user_annotation_Base::GetName(void) const
{
    if (!CanGetName()) {
        ThrowUnassigned(0);
    }
    return m_Name;
}

inline
void CCn3d_user_annotation_Base::SetName(const CCn3d_user_annotation_Base::TName& value)
{
    m_Name = value;
    m_set_State[0] |= 0x3;
}

inline
CCn3d_user_annotation_Base::TName& CCn3d_user_annotation_Base::SetName(void)
{
#ifdef _DEBUG
    if (!IsSetName()) {
        m_Name = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Name;
}

inline
bool CCn3d_user_annotation_Base::IsSetDescription(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CCn3d_user_annotation_Base::CanGetDescription(void) const
{
    return IsSetDescription();
}

inline
const CCn3d_user_annotation_Base::TDescription& CCn3d_user_annotation_Base::GetDescription(void) const
{
    if (!CanGetDescription()) {
        ThrowUnassigned(1);
    }
    return m_Description;
}

inline
void CCn3d_user_annotation_Base::SetDescription(const CCn3d_user_annotation_Base::TDescription& value)
{
    m_Description = value;
    m_set_State[0] |= 0xc;
}

inline
CCn3d_user_annotation_Base::TDescription& CCn3d_user_annotation_Base::SetDescription(void)
{
#ifdef _DEBUG
    if (!IsSetDescription()) {
        m_Description = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Description;
}

inline
bool CCn3d_user_annotation_Base::IsSetStyle_id(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CCn3d_user_annotation_Base::CanGetStyle_id(void) const
{
    return IsSetStyle_id();
}

inline
void CCn3d_user_annotation_Base::ResetStyle_id(void)
{
    m_Style_id = CCn3d_style_table_id(0);
    m_set_State[0] &= ~0x30;
}

inline
const CCn3d_user_annotation_Base::TStyle_id& CCn3d_user_annotation_Base::GetStyle_id(void) const
{
    if (!CanGetStyle_id()) {
        ThrowUnassigned(2);
    }
    return m_Style_id;
}

inline
void CCn3d_user_annotation_Base::SetStyle_id(const CCn3d_user_annotation_Base::TStyle_id& value)
{
    m_Style_id = value;
    m_set_State[0] |= 0x30;
}

inline
CCn3d_user_annotation_Base::TStyle_id& CCn3d_user_annotation_Base::SetStyle_id(void)
{
    m_set_State[0] |= 0x10;
    return m_Style_id;
}

inline
bool CCn3d_user_annotation_Base::IsSetResidues(void) const
{
    return ((m_set_State[0] & 0xc0) != 0);
}

inline
bool CCn3d_user_annotation_Base::CanGetResidues(void) const
{
    return true;
}

inline
const CCn3d_user_annotation_Base::TResidues& CCn3d_user_annotation_Base::GetResidues(void) const
{
    return m_Residues;
}

inline
CCn3d_user_annotation_Base::TResidues& CCn3d_user_annotation_Base::SetResidues(void)
{
    m_set_State[0] |= 0x40;
    return m_Residues;
}

inline
bool CCn3d_user_annotation_Base::IsSetIs_on(void) const
{
    return ((m_set_State[0] & 0x300) != 0);
}

inline
bool CCn3d_user_annotation_Base::CanGetIs_on(void) const
{
    return IsSetIs_on();
}

inline
void CCn3d_user_annotation_Base::ResetIs_on(void)
{
    m_Is_on = 0;
    m_set_State[0] &= ~0x300;
}

inline
CCn3d_user_annotation_Base::TIs_on CCn3d_user_annotation_Base::GetIs_on(void) const
{
    if (!CanGetIs_on()) {
        ThrowUnassigned(4);
    }
    return m_Is_on;
}

inline
void CCn3d_user_annotation_Base::SetIs_on(CCn3d_user_annotation_Base::TIs_on value)
{
    m_Is_on = value;
    m_set_State[0] |= 0x300;
}

inline
CCn3d_user_annotation_Base::TIs_on& CCn3d_user_annotation_Base::SetIs_on(void)
{
#ifdef _DEBUG
    if (!IsSetIs_on()) {
        memset(&m_Is_on,UnassignedByte(),sizeof(m_Is_on));
    }
#endif
    m_set_State[0] |= 0x100;
    return m_Is_on;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_CN3D_CN3D_USER_ANNOTATION_BASE_HPP