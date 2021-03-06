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

/// @file ProjectDescr_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'gbproj.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_GBPROJ_PROJECTDESCR_BASE_HPP
#define OBJECTS_GBPROJ_PROJECTDESCR_BASE_HPP

// extra headers
#include <objects/gbproj/gbproj_export.h>

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <string>

BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// forward declarations
class CDate;


// generated classes

/////////////////////////////////////////////////////////////////////////////
class NCBI_GBPROJ_EXPORT CProjectDescr_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CProjectDescr_Base(void);
    // destructor
    virtual ~CProjectDescr_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef string TTitle;
    typedef CDate TCreate_date;
    typedef CDate TModified_date;
    typedef string TComment;

    // getters
    // setters

    /// user-defined title for the workspace
    /// mandatory
    /// typedef string TTitle
    ///  Check whether the Title data member has been assigned a value.
    bool IsSetTitle(void) const;
    /// Check whether it is safe or not to call GetTitle method.
    bool CanGetTitle(void) const;
    void ResetTitle(void);
    const TTitle& GetTitle(void) const;
    void SetTitle(const TTitle& value);
    TTitle& SetTitle(void);

    /// basic (required) descriptors
    /// mandatory
    /// typedef CDate TCreate_date
    ///  Check whether the Create_date data member has been assigned a value.
    bool IsSetCreate_date(void) const;
    /// Check whether it is safe or not to call GetCreate_date method.
    bool CanGetCreate_date(void) const;
    void ResetCreate_date(void);
    const TCreate_date& GetCreate_date(void) const;
    void SetCreate_date(TCreate_date& value);
    TCreate_date& SetCreate_date(void);

    /// optional
    /// typedef CDate TModified_date
    ///  Check whether the Modified_date data member has been assigned a value.
    bool IsSetModified_date(void) const;
    /// Check whether it is safe or not to call GetModified_date method.
    bool CanGetModified_date(void) const;
    void ResetModified_date(void);
    const TModified_date& GetModified_date(void) const;
    void SetModified_date(TModified_date& value);
    TModified_date& SetModified_date(void);

    /// optional descriptors
    /// optional
    /// typedef string TComment
    ///  Check whether the Comment data member has been assigned a value.
    bool IsSetComment(void) const;
    /// Check whether it is safe or not to call GetComment method.
    bool CanGetComment(void) const;
    void ResetComment(void);
    const TComment& GetComment(void) const;
    void SetComment(const TComment& value);
    TComment& SetComment(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CProjectDescr_Base(const CProjectDescr_Base&);
    CProjectDescr_Base& operator=(const CProjectDescr_Base&);

    // data
    Uint4 m_set_State[1];
    string m_Title;
    CRef< TCreate_date > m_Create_date;
    CRef< TModified_date > m_Modified_date;
    string m_Comment;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CProjectDescr_Base::IsSetTitle(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CProjectDescr_Base::CanGetTitle(void) const
{
    return IsSetTitle();
}

inline
const CProjectDescr_Base::TTitle& CProjectDescr_Base::GetTitle(void) const
{
    if (!CanGetTitle()) {
        ThrowUnassigned(0);
    }
    return m_Title;
}

inline
void CProjectDescr_Base::SetTitle(const CProjectDescr_Base::TTitle& value)
{
    m_Title = value;
    m_set_State[0] |= 0x3;
}

inline
CProjectDescr_Base::TTitle& CProjectDescr_Base::SetTitle(void)
{
#ifdef _DEBUG
    if (!IsSetTitle()) {
        m_Title = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Title;
}

inline
bool CProjectDescr_Base::IsSetCreate_date(void) const
{
    return m_Create_date.NotEmpty();
}

inline
bool CProjectDescr_Base::CanGetCreate_date(void) const
{
    return true;
}

inline
const CProjectDescr_Base::TCreate_date& CProjectDescr_Base::GetCreate_date(void) const
{
    if ( !m_Create_date ) {
        const_cast<CProjectDescr_Base*>(this)->ResetCreate_date();
    }
    return (*m_Create_date);
}

inline
CProjectDescr_Base::TCreate_date& CProjectDescr_Base::SetCreate_date(void)
{
    if ( !m_Create_date ) {
        ResetCreate_date();
    }
    return (*m_Create_date);
}

inline
bool CProjectDescr_Base::IsSetModified_date(void) const
{
    return m_Modified_date.NotEmpty();
}

inline
bool CProjectDescr_Base::CanGetModified_date(void) const
{
    return IsSetModified_date();
}

inline
const CProjectDescr_Base::TModified_date& CProjectDescr_Base::GetModified_date(void) const
{
    if (!CanGetModified_date()) {
        ThrowUnassigned(2);
    }
    return (*m_Modified_date);
}

inline
bool CProjectDescr_Base::IsSetComment(void) const
{
    return ((m_set_State[0] & 0xc0) != 0);
}

inline
bool CProjectDescr_Base::CanGetComment(void) const
{
    return IsSetComment();
}

inline
const CProjectDescr_Base::TComment& CProjectDescr_Base::GetComment(void) const
{
    if (!CanGetComment()) {
        ThrowUnassigned(3);
    }
    return m_Comment;
}

inline
void CProjectDescr_Base::SetComment(const CProjectDescr_Base::TComment& value)
{
    m_Comment = value;
    m_set_State[0] |= 0xc0;
}

inline
CProjectDescr_Base::TComment& CProjectDescr_Base::SetComment(void)
{
#ifdef _DEBUG
    if (!IsSetComment()) {
        m_Comment = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x40;
    return m_Comment;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_GBPROJ_PROJECTDESCR_BASE_HPP
