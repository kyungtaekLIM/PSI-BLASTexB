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

/// @file Taxon1_error_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'taxon1.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_TAXON1_TAXON1_ERROR_BASE_HPP
#define OBJECTS_TAXON1_TAXON1_ERROR_BASE_HPP

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


// generated classes

/////////////////////////////////////////////////////////////////////////////
class NCBI_TAXON1_EXPORT CTaxon1_error_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CTaxon1_error_Base(void);
    // destructor
    virtual ~CTaxon1_error_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    enum ELevel {
        eLevel_none  = 0,  ///< not an error, just a message
        eLevel_info  = 1,  ///< informational error
        eLevel_warn  = 2,
        eLevel_error = 3,
        eLevel_fatal = 4
    };
    
    /// Access to ELevel's attributes (values, names) as defined in spec
    static const NCBI_NS_NCBI::CEnumeratedTypeValues* ENUM_METHOD_NAME(ELevel)(void);
    
    // types
    typedef ELevel TLevel;
    typedef string TMsg;

    // getters
    // setters

    /// mandatory
    /// typedef ELevel TLevel
    ///  Check whether the Level data member has been assigned a value.
    bool IsSetLevel(void) const;
    /// Check whether it is safe or not to call GetLevel method.
    bool CanGetLevel(void) const;
    void ResetLevel(void);
    TLevel GetLevel(void) const;
    void SetLevel(TLevel value);
    TLevel& SetLevel(void);

    /// optional
    /// typedef string TMsg
    ///  Check whether the Msg data member has been assigned a value.
    bool IsSetMsg(void) const;
    /// Check whether it is safe or not to call GetMsg method.
    bool CanGetMsg(void) const;
    void ResetMsg(void);
    const TMsg& GetMsg(void) const;
    void SetMsg(const TMsg& value);
    TMsg& SetMsg(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CTaxon1_error_Base(const CTaxon1_error_Base&);
    CTaxon1_error_Base& operator=(const CTaxon1_error_Base&);

    // data
    Uint4 m_set_State[1];
    ELevel m_Level;
    string m_Msg;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CTaxon1_error_Base::IsSetLevel(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CTaxon1_error_Base::CanGetLevel(void) const
{
    return IsSetLevel();
}

inline
void CTaxon1_error_Base::ResetLevel(void)
{
    m_Level = (ELevel)(0);
    m_set_State[0] &= ~0x3;
}

inline
CTaxon1_error_Base::TLevel CTaxon1_error_Base::GetLevel(void) const
{
    if (!CanGetLevel()) {
        ThrowUnassigned(0);
    }
    return m_Level;
}

inline
void CTaxon1_error_Base::SetLevel(CTaxon1_error_Base::TLevel value)
{
    m_Level = value;
    m_set_State[0] |= 0x3;
}

inline
CTaxon1_error_Base::TLevel& CTaxon1_error_Base::SetLevel(void)
{
#ifdef _DEBUG
    if (!IsSetLevel()) {
        memset(&m_Level,UnassignedByte(),sizeof(m_Level));
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Level;
}

inline
bool CTaxon1_error_Base::IsSetMsg(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CTaxon1_error_Base::CanGetMsg(void) const
{
    return IsSetMsg();
}

inline
const CTaxon1_error_Base::TMsg& CTaxon1_error_Base::GetMsg(void) const
{
    if (!CanGetMsg()) {
        ThrowUnassigned(1);
    }
    return m_Msg;
}

inline
void CTaxon1_error_Base::SetMsg(const CTaxon1_error_Base::TMsg& value)
{
    m_Msg = value;
    m_set_State[0] |= 0xc;
}

inline
CTaxon1_error_Base::TMsg& CTaxon1_error_Base::SetMsg(void)
{
#ifdef _DEBUG
    if (!IsSetMsg()) {
        m_Msg = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Msg;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_TAXON1_TAXON1_ERROR_BASE_HPP