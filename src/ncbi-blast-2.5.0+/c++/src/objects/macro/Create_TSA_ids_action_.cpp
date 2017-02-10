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
 * File Description:
 *   This code was generated by application DATATOOL
 *   using the following specifications:
 *   'macro.asn'.
 *
 * ATTENTION:
 *   Don't edit or commit this file into CVS as this file will
 *   be overridden (by DATATOOL) without warning!
 * ===========================================================================
 */

// standard includes
#include <ncbi_pch.hpp>
#include <serial/serialimpl.hpp>

// generated includes
#include <objects/macro/Create_TSA_ids_action.hpp>
#include <objects/macro/Create_TSA_ids_src.hpp>
#include <objects/macro/Text_portion.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

void CCreate_TSA_ids_action_Base::ResetSrc(void)
{
    if ( !m_Src ) {
        m_Src.Reset(new TSrc());
        return;
    }
    (*m_Src).Reset();
}

void CCreate_TSA_ids_action_Base::SetSrc(CCreate_TSA_ids_action_Base::TSrc& value)
{
    m_Src.Reset(&value);
}

void CCreate_TSA_ids_action_Base::ResetSuffix(void)
{
    m_Suffix.erase();
    m_set_State[0] &= ~0xc;
}

void CCreate_TSA_ids_action_Base::ResetId_text_portion(void)
{
    m_Id_text_portion.Reset();
}

void CCreate_TSA_ids_action_Base::SetId_text_portion(CCreate_TSA_ids_action_Base::TId_text_portion& value)
{
    m_Id_text_portion.Reset(&value);
}

CCreate_TSA_ids_action_Base::TId_text_portion& CCreate_TSA_ids_action_Base::SetId_text_portion(void)
{
    if ( !m_Id_text_portion )
        m_Id_text_portion.Reset(new ncbi::objects::CText_portion());
    return (*m_Id_text_portion);
}

void CCreate_TSA_ids_action_Base::Reset(void)
{
    ResetSrc();
    ResetSuffix();
    ResetId_text_portion();
}

BEGIN_NAMED_BASE_CLASS_INFO("Create-TSA-ids-action", CCreate_TSA_ids_action)
{
    SET_CLASS_MODULE("NCBI-Macro");
    ADD_NAMED_REF_MEMBER("src", m_Src, CCreate_TSA_ids_src);
    ADD_NAMED_STD_MEMBER("suffix", m_Suffix)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    ADD_NAMED_REF_MEMBER("id-text-portion", m_Id_text_portion, CText_portion)->SetOptional();
    info->RandomOrder();
    info->CodeVersion(21600);
}
END_CLASS_INFO

// constructor
CCreate_TSA_ids_action_Base::CCreate_TSA_ids_action_Base(void)
{
    memset(m_set_State,0,sizeof(m_set_State));
    if ( !IsAllocatedInPool() ) {
        ResetSrc();
    }
}

// destructor
CCreate_TSA_ids_action_Base::~CCreate_TSA_ids_action_Base(void)
{
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE
