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
 *   'id2.asn'.
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
#include <objects/id2/ID2_Reply_Get_Blob_Id.hpp>
#include <objects/id2/ID2_Blob_Id.hpp>
#include <objects/seqloc/Seq_id.hpp>
#include <objects/seqsplit/ID2S_Seq_annot_Info.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

void CID2_Reply_Get_Blob_Id_Base::ResetSeq_id(void)
{
    if ( !m_Seq_id ) {
        m_Seq_id.Reset(new TSeq_id());
        return;
    }
    (*m_Seq_id).Reset();
}

void CID2_Reply_Get_Blob_Id_Base::SetSeq_id(CID2_Reply_Get_Blob_Id_Base::TSeq_id& value)
{
    m_Seq_id.Reset(&value);
}

void CID2_Reply_Get_Blob_Id_Base::ResetBlob_id(void)
{
    m_Blob_id.Reset();
}

void CID2_Reply_Get_Blob_Id_Base::SetBlob_id(CID2_Reply_Get_Blob_Id_Base::TBlob_id& value)
{
    m_Blob_id.Reset(&value);
}

CID2_Reply_Get_Blob_Id_Base::TBlob_id& CID2_Reply_Get_Blob_Id_Base::SetBlob_id(void)
{
    if ( !m_Blob_id )
        m_Blob_id.Reset(new ncbi::objects::CID2_Blob_Id());
    return (*m_Blob_id);
}

void CID2_Reply_Get_Blob_Id_Base::ResetAnnot_info(void)
{
    m_Annot_info.clear();
    m_set_State[0] &= ~0xc0;
}

void CID2_Reply_Get_Blob_Id_Base::Reset(void)
{
    ResetSeq_id();
    ResetBlob_id();
    ResetSplit_version();
    ResetAnnot_info();
    ResetEnd_of_reply();
    ResetBlob_state();
}

BEGIN_NAMED_BASE_CLASS_INFO("ID2-Reply-Get-Blob-Id", CID2_Reply_Get_Blob_Id)
{
    SET_CLASS_MODULE("NCBI-ID2Access");
    ADD_NAMED_REF_MEMBER("seq-id", m_Seq_id, CSeq_id);
    ADD_NAMED_REF_MEMBER("blob-id", m_Blob_id, CID2_Blob_Id)->SetOptional();
    ADD_NAMED_STD_MEMBER("split-version", m_Split_version)->SetDefault(new TSplit_version(0))->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    ADD_NAMED_MEMBER("annot-info", m_Annot_info, STL_list, (STL_CRef, (CLASS, (CID2S_Seq_annot_Info))))->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    ADD_NAMED_NULL_MEMBER("end-of-reply", null, ())->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    ADD_NAMED_STD_MEMBER("blob-state", m_Blob_state)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    info->RandomOrder();
    info->CodeVersion(21600);
}
END_CLASS_INFO

// constructor
CID2_Reply_Get_Blob_Id_Base::CID2_Reply_Get_Blob_Id_Base(void)
    : m_Split_version(0), m_Blob_state(0)
{
    memset(m_set_State,0,sizeof(m_set_State));
    if ( !IsAllocatedInPool() ) {
        ResetSeq_id();
    }
}

// destructor
CID2_Reply_Get_Blob_Id_Base::~CID2_Reply_Get_Blob_Id_Base(void)
{
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE
