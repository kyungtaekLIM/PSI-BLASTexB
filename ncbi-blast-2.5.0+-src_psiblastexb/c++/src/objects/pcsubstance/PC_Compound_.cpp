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
 *   'pcsubstance.asn'.
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
#include <objects/pcsubstance/PC_Compound.hpp>
#include <objects/pcsubstance/PC_Atoms.hpp>
#include <objects/pcsubstance/PC_Bonds.hpp>
#include <objects/pcsubstance/PC_CompoundType.hpp>
#include <objects/pcsubstance/PC_Compounds.hpp>
#include <objects/pcsubstance/PC_Coordinates.hpp>
#include <objects/pcsubstance/PC_Count.hpp>
#include <objects/pcsubstance/PC_InfoData.hpp>
#include <objects/pcsubstance/PC_StereoCenter.hpp>
#include <objects/pcsubstance/PC_StereoGroup.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

void CPC_Compound_Base::ResetId(void)
{
    if ( !m_Id ) {
        m_Id.Reset(new TId());
        return;
    }
    (*m_Id).Reset();
}

void CPC_Compound_Base::SetId(CPC_Compound_Base::TId& value)
{
    m_Id.Reset(&value);
}

void CPC_Compound_Base::ResetAtoms(void)
{
    m_Atoms.Reset();
}

void CPC_Compound_Base::SetAtoms(CPC_Compound_Base::TAtoms& value)
{
    m_Atoms.Reset(&value);
}

CPC_Compound_Base::TAtoms& CPC_Compound_Base::SetAtoms(void)
{
    if ( !m_Atoms )
        m_Atoms.Reset(new ncbi::objects::CPC_Atoms());
    return (*m_Atoms);
}

void CPC_Compound_Base::ResetBonds(void)
{
    m_Bonds.Reset();
}

void CPC_Compound_Base::SetBonds(CPC_Compound_Base::TBonds& value)
{
    m_Bonds.Reset(&value);
}

CPC_Compound_Base::TBonds& CPC_Compound_Base::SetBonds(void)
{
    if ( !m_Bonds )
        m_Bonds.Reset(new ncbi::objects::CPC_Bonds());
    return (*m_Bonds);
}

void CPC_Compound_Base::ResetStereo(void)
{
    m_Stereo.clear();
    m_set_State[0] &= ~0xc0;
}

void CPC_Compound_Base::ResetCoords(void)
{
    m_Coords.clear();
    m_set_State[0] &= ~0x300;
}

void CPC_Compound_Base::ResetProps(void)
{
    m_Props.clear();
    m_set_State[0] &= ~0x3000;
}

void CPC_Compound_Base::ResetStereogroups(void)
{
    m_Stereogroups.clear();
    m_set_State[0] &= ~0xc000;
}

void CPC_Compound_Base::ResetCount(void)
{
    m_Count.Reset();
}

void CPC_Compound_Base::SetCount(CPC_Compound_Base::TCount& value)
{
    m_Count.Reset(&value);
}

CPC_Compound_Base::TCount& CPC_Compound_Base::SetCount(void)
{
    if ( !m_Count )
        m_Count.Reset(new ncbi::objects::CPC_Count());
    return (*m_Count);
}

void CPC_Compound_Base::ResetVbalt(void)
{
    m_Vbalt.Reset();
}

void CPC_Compound_Base::SetVbalt(CPC_Compound_Base::TVbalt& value)
{
    m_Vbalt.Reset(&value);
}

CPC_Compound_Base::TVbalt& CPC_Compound_Base::SetVbalt(void)
{
    if ( !m_Vbalt )
        m_Vbalt.Reset(new ncbi::objects::CPC_Compounds());
    return (*m_Vbalt);
}

void CPC_Compound_Base::Reset(void)
{
    ResetId();
    ResetAtoms();
    ResetBonds();
    ResetStereo();
    ResetCoords();
    ResetCharge();
    ResetProps();
    ResetStereogroups();
    ResetCount();
    ResetVbalt();
}

BEGIN_NAMED_BASE_CLASS_INFO("PC-Compound", CPC_Compound)
{
    SET_CLASS_MODULE("NCBI-PCSubstance");
    ADD_NAMED_REF_MEMBER("id", m_Id, CPC_CompoundType);
    ADD_NAMED_REF_MEMBER("atoms", m_Atoms, CPC_Atoms)->SetOptional();
    ADD_NAMED_REF_MEMBER("bonds", m_Bonds, CPC_Bonds)->SetOptional();
    ADD_NAMED_MEMBER("stereo", m_Stereo, STL_list, (STL_CRef, (CLASS, (CPC_StereoCenter))))->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    ADD_NAMED_MEMBER("coords", m_Coords, STL_list, (STL_CRef, (CLASS, (CPC_Coordinates))))->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    ADD_NAMED_STD_MEMBER("charge", m_Charge)->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    ADD_NAMED_MEMBER("props", m_Props, STL_list, (STL_CRef, (CLASS, (CPC_InfoData))))->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    ADD_NAMED_MEMBER("stereogroups", m_Stereogroups, STL_list, (STL_CRef, (CLASS, (CPC_StereoGroup))))->SetSetFlag(MEMBER_PTR(m_set_State[0]))->SetOptional();
    ADD_NAMED_REF_MEMBER("count", m_Count, CPC_Count)->SetOptional();
    ADD_NAMED_REF_MEMBER("vbalt", m_Vbalt, CPC_Compounds)->SetOptional();
    info->RandomOrder();
    info->CodeVersion(21600);
}
END_CLASS_INFO

// constructor
CPC_Compound_Base::CPC_Compound_Base(void)
    : m_Charge(0)
{
    memset(m_set_State,0,sizeof(m_set_State));
    if ( !IsAllocatedInPool() ) {
        ResetId();
    }
}

// destructor
CPC_Compound_Base::~CPC_Compound_Base(void)
{
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE
