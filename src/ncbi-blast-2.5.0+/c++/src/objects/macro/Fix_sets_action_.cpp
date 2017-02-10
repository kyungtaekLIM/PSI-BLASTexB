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
#include <objects/macro/Fix_sets_action.hpp>
BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

void CFix_sets_action_Base::Reset(void)
{
    if ( m_choice != e_not_set )
        ResetSelection();
}

void CFix_sets_action_Base::ResetSelection(void)
{
    m_choice = e_not_set;
}

void CFix_sets_action_Base::DoSelect(E_Choice index, NCBI_NS_NCBI::CObjectMemoryPool* )
{
    switch ( index ) {
    default:
        break;
    }
    m_choice = index;
}

const char* const CFix_sets_action_Base::sm_SelectionNames[] = {
    "not set",
    "remove-single-item-set",
    "renormalize-nuc-prot-sets",
    "fix-pop-to-phy"
};

NCBI_NS_STD::string CFix_sets_action_Base::SelectionName(E_Choice index)
{
    return NCBI_NS_NCBI::CInvalidChoiceSelection::GetName(index, sm_SelectionNames, sizeof(sm_SelectionNames)/sizeof(sm_SelectionNames[0]));
}

void CFix_sets_action_Base::ThrowInvalidSelection(E_Choice index) const
{
    throw NCBI_NS_NCBI::CInvalidChoiceSelection(DIAG_COMPILE_INFO, this, m_choice, index, sm_SelectionNames, sizeof(sm_SelectionNames)/sizeof(sm_SelectionNames[0]));
}

// helper methods

// type info
BEGIN_NAMED_BASE_CHOICE_INFO("Fix-sets-action", CFix_sets_action)
{
    SET_CHOICE_MODULE("NCBI-Macro");
    ADD_NAMED_NULL_CHOICE_VARIANT("remove-single-item-set", null, ());
    ADD_NAMED_NULL_CHOICE_VARIANT("renormalize-nuc-prot-sets", null, ());
    ADD_NAMED_NULL_CHOICE_VARIANT("fix-pop-to-phy", null, ());
    info->CodeVersion(21600);
}
END_CHOICE_INFO

// constructor
CFix_sets_action_Base::CFix_sets_action_Base(void)
    : m_choice(e_not_set)
{
}

// destructor
CFix_sets_action_Base::~CFix_sets_action_Base(void)
{
    Reset();
}



END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE
