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

/// @file SP_block_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'seqblock.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_SEQBLOCK_SP_BLOCK_BASE_HPP
#define OBJECTS_SEQBLOCK_SP_BLOCK_BASE_HPP

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
class CDate;
class CDbtag;
class CSeq_id;


// generated classes

/////////////////////////////////////////////////////////////////////////////
/// SWISSPROT specific descriptions
class NCBI_SEQBLOCK_EXPORT CSP_block_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CSP_block_Base(void);
    // destructor
    virtual ~CSP_block_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    enum EClass {
        eClass_not_set  =   0,
        eClass_standard =   1,  ///< conforms to all SWISSPROT checks
        eClass_prelim   =   2,  ///< only seq and biblio checked
        eClass_other    = 255
    };
    
    /// Access to EClass's attributes (values, names) as defined in spec
    static const NCBI_NS_NCBI::CEnumeratedTypeValues* ENUM_METHOD_NAME(EClass)(void);
    
    // types
    typedef EClass TClass;
    typedef list< string > TExtra_acc;
    typedef bool TImeth;
    typedef list< string > TPlasnm;
    typedef list< CRef< CSeq_id > > TSeqref;
    typedef list< CRef< CDbtag > > TDbref;
    typedef list< string > TKeywords;
    typedef CDate TCreated;
    typedef CDate TSequpd;
    typedef CDate TAnnotupd;

    // getters
    // setters

    /// mandatory
    /// typedef EClass TClass
    ///  Check whether the Class data member has been assigned a value.
    bool IsSetClass(void) const;
    /// Check whether it is safe or not to call GetClass method.
    bool CanGetClass(void) const;
    void ResetClass(void);
    TClass GetClass(void) const;
    void SetClass(TClass value);
    TClass& SetClass(void);

    /// old SWISSPROT ids
    /// optional
    /// typedef list< string > TExtra_acc
    ///  Check whether the Extra_acc data member has been assigned a value.
    bool IsSetExtra_acc(void) const;
    /// Check whether it is safe or not to call GetExtra_acc method.
    bool CanGetExtra_acc(void) const;
    void ResetExtra_acc(void);
    const TExtra_acc& GetExtra_acc(void) const;
    TExtra_acc& SetExtra_acc(void);

    /// seq known to start with Met
    /// optional with default false
    /// typedef bool TImeth
    ///  Check whether the Imeth data member has been assigned a value.
    bool IsSetImeth(void) const;
    /// Check whether it is safe or not to call GetImeth method.
    bool CanGetImeth(void) const;
    void ResetImeth(void);
    void SetDefaultImeth(void);
    TImeth GetImeth(void) const;
    void SetImeth(TImeth value);
    TImeth& SetImeth(void);

    /// plasmid names carrying gene
    /// optional
    /// typedef list< string > TPlasnm
    ///  Check whether the Plasnm data member has been assigned a value.
    bool IsSetPlasnm(void) const;
    /// Check whether it is safe or not to call GetPlasnm method.
    bool CanGetPlasnm(void) const;
    void ResetPlasnm(void);
    const TPlasnm& GetPlasnm(void) const;
    TPlasnm& SetPlasnm(void);

    /// xref to other sequences
    /// optional
    /// typedef list< CRef< CSeq_id > > TSeqref
    ///  Check whether the Seqref data member has been assigned a value.
    bool IsSetSeqref(void) const;
    /// Check whether it is safe or not to call GetSeqref method.
    bool CanGetSeqref(void) const;
    void ResetSeqref(void);
    const TSeqref& GetSeqref(void) const;
    TSeqref& SetSeqref(void);

    /// xref to non-sequence dbases
    /// optional
    /// typedef list< CRef< CDbtag > > TDbref
    ///  Check whether the Dbref data member has been assigned a value.
    bool IsSetDbref(void) const;
    /// Check whether it is safe or not to call GetDbref method.
    bool CanGetDbref(void) const;
    void ResetDbref(void);
    const TDbref& GetDbref(void) const;
    TDbref& SetDbref(void);

    /// keywords
    /// optional
    /// typedef list< string > TKeywords
    ///  Check whether the Keywords data member has been assigned a value.
    bool IsSetKeywords(void) const;
    /// Check whether it is safe or not to call GetKeywords method.
    bool CanGetKeywords(void) const;
    void ResetKeywords(void);
    const TKeywords& GetKeywords(void) const;
    TKeywords& SetKeywords(void);

    /// creation date
    /// optional
    /// typedef CDate TCreated
    ///  Check whether the Created data member has been assigned a value.
    bool IsSetCreated(void) const;
    /// Check whether it is safe or not to call GetCreated method.
    bool CanGetCreated(void) const;
    void ResetCreated(void);
    const TCreated& GetCreated(void) const;
    void SetCreated(TCreated& value);
    TCreated& SetCreated(void);

    /// sequence update
    /// optional
    /// typedef CDate TSequpd
    ///  Check whether the Sequpd data member has been assigned a value.
    bool IsSetSequpd(void) const;
    /// Check whether it is safe or not to call GetSequpd method.
    bool CanGetSequpd(void) const;
    void ResetSequpd(void);
    const TSequpd& GetSequpd(void) const;
    void SetSequpd(TSequpd& value);
    TSequpd& SetSequpd(void);

    /// annotation update
    /// optional
    /// typedef CDate TAnnotupd
    ///  Check whether the Annotupd data member has been assigned a value.
    bool IsSetAnnotupd(void) const;
    /// Check whether it is safe or not to call GetAnnotupd method.
    bool CanGetAnnotupd(void) const;
    void ResetAnnotupd(void);
    const TAnnotupd& GetAnnotupd(void) const;
    void SetAnnotupd(TAnnotupd& value);
    TAnnotupd& SetAnnotupd(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CSP_block_Base(const CSP_block_Base&);
    CSP_block_Base& operator=(const CSP_block_Base&);

    // data
    Uint4 m_set_State[1];
    EClass m_Class;
    list< string > m_Extra_acc;
    bool m_Imeth;
    list< string > m_Plasnm;
    list< CRef< CSeq_id > > m_Seqref;
    list< CRef< CDbtag > > m_Dbref;
    list< string > m_Keywords;
    CRef< TCreated > m_Created;
    CRef< TSequpd > m_Sequpd;
    CRef< TAnnotupd > m_Annotupd;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CSP_block_Base::IsSetClass(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CSP_block_Base::CanGetClass(void) const
{
    return IsSetClass();
}

inline
void CSP_block_Base::ResetClass(void)
{
    m_Class = (EClass)(0);
    m_set_State[0] &= ~0x3;
}

inline
CSP_block_Base::TClass CSP_block_Base::GetClass(void) const
{
    if (!CanGetClass()) {
        ThrowUnassigned(0);
    }
    return m_Class;
}

inline
void CSP_block_Base::SetClass(CSP_block_Base::TClass value)
{
    m_Class = value;
    m_set_State[0] |= 0x3;
}

inline
CSP_block_Base::TClass& CSP_block_Base::SetClass(void)
{
#ifdef _DEBUG
    if (!IsSetClass()) {
        memset(&m_Class,UnassignedByte(),sizeof(m_Class));
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Class;
}

inline
bool CSP_block_Base::IsSetExtra_acc(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CSP_block_Base::CanGetExtra_acc(void) const
{
    return true;
}

inline
const CSP_block_Base::TExtra_acc& CSP_block_Base::GetExtra_acc(void) const
{
    return m_Extra_acc;
}

inline
CSP_block_Base::TExtra_acc& CSP_block_Base::SetExtra_acc(void)
{
    m_set_State[0] |= 0x4;
    return m_Extra_acc;
}

inline
bool CSP_block_Base::IsSetImeth(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CSP_block_Base::CanGetImeth(void) const
{
    return true;
}

inline
void CSP_block_Base::ResetImeth(void)
{
    m_Imeth = false;
    m_set_State[0] &= ~0x30;
}

inline
void CSP_block_Base::SetDefaultImeth(void)
{
    ResetImeth();
}

inline
CSP_block_Base::TImeth CSP_block_Base::GetImeth(void) const
{
    return m_Imeth;
}

inline
void CSP_block_Base::SetImeth(CSP_block_Base::TImeth value)
{
    m_Imeth = value;
    m_set_State[0] |= 0x30;
}

inline
CSP_block_Base::TImeth& CSP_block_Base::SetImeth(void)
{
#ifdef _DEBUG
    if (!IsSetImeth()) {
        memset(&m_Imeth,UnassignedByte(),sizeof(m_Imeth));
    }
#endif
    m_set_State[0] |= 0x10;
    return m_Imeth;
}

inline
bool CSP_block_Base::IsSetPlasnm(void) const
{
    return ((m_set_State[0] & 0xc0) != 0);
}

inline
bool CSP_block_Base::CanGetPlasnm(void) const
{
    return true;
}

inline
const CSP_block_Base::TPlasnm& CSP_block_Base::GetPlasnm(void) const
{
    return m_Plasnm;
}

inline
CSP_block_Base::TPlasnm& CSP_block_Base::SetPlasnm(void)
{
    m_set_State[0] |= 0x40;
    return m_Plasnm;
}

inline
bool CSP_block_Base::IsSetSeqref(void) const
{
    return ((m_set_State[0] & 0x300) != 0);
}

inline
bool CSP_block_Base::CanGetSeqref(void) const
{
    return true;
}

inline
const CSP_block_Base::TSeqref& CSP_block_Base::GetSeqref(void) const
{
    return m_Seqref;
}

inline
CSP_block_Base::TSeqref& CSP_block_Base::SetSeqref(void)
{
    m_set_State[0] |= 0x100;
    return m_Seqref;
}

inline
bool CSP_block_Base::IsSetDbref(void) const
{
    return ((m_set_State[0] & 0xc00) != 0);
}

inline
bool CSP_block_Base::CanGetDbref(void) const
{
    return true;
}

inline
const CSP_block_Base::TDbref& CSP_block_Base::GetDbref(void) const
{
    return m_Dbref;
}

inline
CSP_block_Base::TDbref& CSP_block_Base::SetDbref(void)
{
    m_set_State[0] |= 0x400;
    return m_Dbref;
}

inline
bool CSP_block_Base::IsSetKeywords(void) const
{
    return ((m_set_State[0] & 0x3000) != 0);
}

inline
bool CSP_block_Base::CanGetKeywords(void) const
{
    return true;
}

inline
const CSP_block_Base::TKeywords& CSP_block_Base::GetKeywords(void) const
{
    return m_Keywords;
}

inline
CSP_block_Base::TKeywords& CSP_block_Base::SetKeywords(void)
{
    m_set_State[0] |= 0x1000;
    return m_Keywords;
}

inline
bool CSP_block_Base::IsSetCreated(void) const
{
    return m_Created.NotEmpty();
}

inline
bool CSP_block_Base::CanGetCreated(void) const
{
    return IsSetCreated();
}

inline
const CSP_block_Base::TCreated& CSP_block_Base::GetCreated(void) const
{
    if (!CanGetCreated()) {
        ThrowUnassigned(7);
    }
    return (*m_Created);
}

inline
bool CSP_block_Base::IsSetSequpd(void) const
{
    return m_Sequpd.NotEmpty();
}

inline
bool CSP_block_Base::CanGetSequpd(void) const
{
    return IsSetSequpd();
}

inline
const CSP_block_Base::TSequpd& CSP_block_Base::GetSequpd(void) const
{
    if (!CanGetSequpd()) {
        ThrowUnassigned(8);
    }
    return (*m_Sequpd);
}

inline
bool CSP_block_Base::IsSetAnnotupd(void) const
{
    return m_Annotupd.NotEmpty();
}

inline
bool CSP_block_Base::CanGetAnnotupd(void) const
{
    return IsSetAnnotupd();
}

inline
const CSP_block_Base::TAnnotupd& CSP_block_Base::GetAnnotupd(void) const
{
    if (!CanGetAnnotupd()) {
        ThrowUnassigned(9);
    }
    return (*m_Annotupd);
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_SEQBLOCK_SP_BLOCK_BASE_HPP