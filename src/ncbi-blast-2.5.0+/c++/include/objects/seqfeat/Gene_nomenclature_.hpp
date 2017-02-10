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

/// @file Gene_nomenclature_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'seqfeat.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_SEQFEAT_GENE_NOMENCLATURE_BASE_HPP
#define OBJECTS_SEQFEAT_GENE_NOMENCLATURE_BASE_HPP

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
class CDbtag;


// generated classes

/////////////////////////////////////////////////////////////////////////////
class NCBI_SEQFEAT_EXPORT CGene_nomenclature_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CGene_nomenclature_Base(void);
    // destructor
    virtual ~CGene_nomenclature_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    enum EStatus {
        eStatus_unknown  = 0,
        eStatus_official = 1,
        eStatus_interim  = 2
    };
    
    /// Access to EStatus's attributes (values, names) as defined in spec
    static const NCBI_NS_NCBI::CEnumeratedTypeValues* ENUM_METHOD_NAME(EStatus)(void);
    
    // types
    typedef EStatus TStatus;
    typedef string TSymbol;
    typedef string TName;
    typedef CDbtag TSource;

    // getters
    // setters

    /// mandatory
    /// typedef EStatus TStatus
    ///  Check whether the Status data member has been assigned a value.
    bool IsSetStatus(void) const;
    /// Check whether it is safe or not to call GetStatus method.
    bool CanGetStatus(void) const;
    void ResetStatus(void);
    TStatus GetStatus(void) const;
    void SetStatus(TStatus value);
    TStatus& SetStatus(void);

    /// optional
    /// typedef string TSymbol
    ///  Check whether the Symbol data member has been assigned a value.
    bool IsSetSymbol(void) const;
    /// Check whether it is safe or not to call GetSymbol method.
    bool CanGetSymbol(void) const;
    void ResetSymbol(void);
    const TSymbol& GetSymbol(void) const;
    void SetSymbol(const TSymbol& value);
    TSymbol& SetSymbol(void);

    /// optional
    /// typedef string TName
    ///  Check whether the Name data member has been assigned a value.
    bool IsSetName(void) const;
    /// Check whether it is safe or not to call GetName method.
    bool CanGetName(void) const;
    void ResetName(void);
    const TName& GetName(void) const;
    void SetName(const TName& value);
    TName& SetName(void);

    /// optional
    /// typedef CDbtag TSource
    ///  Check whether the Source data member has been assigned a value.
    bool IsSetSource(void) const;
    /// Check whether it is safe or not to call GetSource method.
    bool CanGetSource(void) const;
    void ResetSource(void);
    const TSource& GetSource(void) const;
    void SetSource(TSource& value);
    TSource& SetSource(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CGene_nomenclature_Base(const CGene_nomenclature_Base&);
    CGene_nomenclature_Base& operator=(const CGene_nomenclature_Base&);

    // data
    Uint4 m_set_State[1];
    EStatus m_Status;
    string m_Symbol;
    string m_Name;
    CRef< TSource > m_Source;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CGene_nomenclature_Base::IsSetStatus(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CGene_nomenclature_Base::CanGetStatus(void) const
{
    return IsSetStatus();
}

inline
void CGene_nomenclature_Base::ResetStatus(void)
{
    m_Status = (EStatus)(0);
    m_set_State[0] &= ~0x3;
}

inline
CGene_nomenclature_Base::TStatus CGene_nomenclature_Base::GetStatus(void) const
{
    if (!CanGetStatus()) {
        ThrowUnassigned(0);
    }
    return m_Status;
}

inline
void CGene_nomenclature_Base::SetStatus(CGene_nomenclature_Base::TStatus value)
{
    m_Status = value;
    m_set_State[0] |= 0x3;
}

inline
CGene_nomenclature_Base::TStatus& CGene_nomenclature_Base::SetStatus(void)
{
#ifdef _DEBUG
    if (!IsSetStatus()) {
        memset(&m_Status,UnassignedByte(),sizeof(m_Status));
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Status;
}

inline
bool CGene_nomenclature_Base::IsSetSymbol(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CGene_nomenclature_Base::CanGetSymbol(void) const
{
    return IsSetSymbol();
}

inline
const CGene_nomenclature_Base::TSymbol& CGene_nomenclature_Base::GetSymbol(void) const
{
    if (!CanGetSymbol()) {
        ThrowUnassigned(1);
    }
    return m_Symbol;
}

inline
void CGene_nomenclature_Base::SetSymbol(const CGene_nomenclature_Base::TSymbol& value)
{
    m_Symbol = value;
    m_set_State[0] |= 0xc;
}

inline
CGene_nomenclature_Base::TSymbol& CGene_nomenclature_Base::SetSymbol(void)
{
#ifdef _DEBUG
    if (!IsSetSymbol()) {
        m_Symbol = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Symbol;
}

inline
bool CGene_nomenclature_Base::IsSetName(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CGene_nomenclature_Base::CanGetName(void) const
{
    return IsSetName();
}

inline
const CGene_nomenclature_Base::TName& CGene_nomenclature_Base::GetName(void) const
{
    if (!CanGetName()) {
        ThrowUnassigned(2);
    }
    return m_Name;
}

inline
void CGene_nomenclature_Base::SetName(const CGene_nomenclature_Base::TName& value)
{
    m_Name = value;
    m_set_State[0] |= 0x30;
}

inline
CGene_nomenclature_Base::TName& CGene_nomenclature_Base::SetName(void)
{
#ifdef _DEBUG
    if (!IsSetName()) {
        m_Name = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x10;
    return m_Name;
}

inline
bool CGene_nomenclature_Base::IsSetSource(void) const
{
    return m_Source.NotEmpty();
}

inline
bool CGene_nomenclature_Base::CanGetSource(void) const
{
    return IsSetSource();
}

inline
const CGene_nomenclature_Base::TSource& CGene_nomenclature_Base::GetSource(void) const
{
    if (!CanGetSource()) {
        ThrowUnassigned(3);
    }
    return (*m_Source);
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_SEQFEAT_GENE_NOMENCLATURE_BASE_HPP