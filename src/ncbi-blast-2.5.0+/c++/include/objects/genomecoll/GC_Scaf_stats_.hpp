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

/// @file GC_Scaf_stats_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'genome_collection.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_GENOMECOLL_GC_SCAF_STATS_BASE_HPP
#define OBJECTS_GENOMECOLL_GC_SCAF_STATS_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>
BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// generated classes

/////////////////////////////////////////////////////////////////////////////
class NCBI_GENOME_COLLECTION_EXPORT CGC_Scaf_stats_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CGC_Scaf_stats_Base(void);
    // destructor
    virtual ~CGC_Scaf_stats_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    ///NOTE: These values equal to the stats_cd values in CodeStatistics table in GenomeColl
    enum EStats_category {
        eStats_category_replicon_count                               =  70,
        eStats_category_scaffold_count                               =  22,
        eStats_category_component_count                              =  23,  ///< How many components
        eStats_category_component_span_count                         =  24,  ///< How many placements of components
        eStats_category_total_length                                 =   1,
        eStats_category_ungapped_length                              =   2,
        eStats_category_min_gapped_scaf_length                       =  25,
        eStats_category_max_gapped_scaf_length                       =  26,
        eStats_category_min_ungapped_scaf_length                     =  27,
        eStats_category_max_ungapped_scaf_length                     =  28,
        eStats_category_active_finishing_bases                       =   3,
        eStats_category_draft_bases                                  =   5,
        eStats_category_finished_bases                               =   7,
        eStats_category_whole_genome_finishing_bases                 =   9,
        eStats_category_other_sequences                              =  11,
        eStats_category_pre_draft                                    =  13,
        eStats_category_wgs_bases                                    =  15,
        eStats_category_bases_in_spanned_gaps                        =  17,
        eStats_category_n50                                          =  19,
        eStats_category_spanned_gaps                                 =  20,
        eStats_category_unspanned_gaps                               =  21,
        eStats_category_bases_in_unspanned_gaps                      =  29,
        eStats_category_count_contig                                 =  30,  ///< contig count
        eStats_category_contig_n50                                   =  31,  ///< contig N50
        eStats_category_contig_L50                                   =  32,  ///< contig L50
        eStats_category_contig_n75                                   =  33,  ///< contig N75
        eStats_category_contig_n90                                   =  34,  ///< contig N90
        eStats_category_scaf_L50                                     =  35,  ///< scaffold L50
        eStats_category_scaf_n75                                     =  36,  ///< scaffold N75
        eStats_category_scaf_n90                                     =  37,  ///< scaffold N90
        eStats_category_is_there_unplaced_scaf                       =  72,  ///< 1 means there is unplaced scaffold. 0 means none
        eStats_category_count_singleton_unordered_scaffold           =  73,
        eStats_category_count_chr_made_of_singleton_ordered_scaffold =  74,
        eStats_category_count_chr_with_single_component              =  75,  ///< GCOL-675 - assembly release review stats. Meaningful only at assembly  level.  Do any of the chromosomes have a single component each?    if yes, do all chromosomes have single component each?  INTEGER OPTIONAL,  number of unplaced/unlocalized singleton scaffolds in minus orientation
        eStats_category_count_singleton_in_minus_orientation         =  76,  ///< INTEGER OPTIONAL, chr-terminal-gap-types SET OF GC-ChrGapTypes OPTIONAL,  are any gaps flagged as 'unknown' and how many? 0 means none.
        eStats_category_count_unknown_gaps                           =  80,  ///<  INTEGER OPTIONAL,  1.2c Scaffold source names: count implicit/explicit
        eStats_category_count_implicit_scaf_src_name                 =  82,  ///< INTEGER OPTIONAL,
        eStats_category_count_explicit_scaf_src_name                 =  83,  ///< INTEGER OPTIONAL
        eStats_category_all_chr_has_single_component                 =  84,  ///< if 1 yes, 0 no. BOOLEAN OPTIONAL,  Do any scaffolds have terminal gaps? How many?
        eStats_category_count_scaf_with_terminal_gaps                =  85,  ///< INTEGER OPTIONAL,  Do any chromosome have terminal gaps? what is the gap type for each?
        eStats_category_count_chr_with_terminal_gaps                 =  86,  ///< INTEGER OPTIONAL,  Number of component GIs (uniq components). Is the count different from the count in the  latest GenBank/Refseq release for the same assembly, by how many?
        eStats_category_count_uniq_components                        =  87,  ///<INTEGER OPTIONAL ,
        eStats_category_count_uniq_component_diff_from_last_release  =  88,  ///<INTEGER OPTIONAL,
        eStats_category_count_chromosome_types                       =  89,  ///<INTEGER OPTIONAL,
        eStats_category_count_chromosome_terminal_gap_types          =  90,  ///< # of chromosome terminal gap types
        eStats_category_count_dropped_components                     =  91,  ///< dropped component due to foreign screen
        eStats_category_count_non_chromosome_replicon                =  92,  ///< number of non-Chromosome replicons
        eStats_category_count_assembly_units                         =  93,  ///< # of assembly-units
        eStats_category_count_alt_loci_units                         =  94,  ///< # of alt-loci units
        eStats_category_count_fixed_patches                          =  95,  ///< # of fixed patches
        eStats_category_count_novel_patches                          =  96,  ///< # of novel patches
        eStats_category_count_regions                                =  97,  ///< # of regions
        eStats_category_count_patches                                =  98,  ///< # of patches
        eStats_category_count_par_regions                            =  99,  ///< # of PAR regions
        eStats_category_count_genomic_regions                        = 100,  ///< # of genomic regions
        eStats_category_count_chromosome_replicons                   = 101,  ///< # of chromosomal replicons
        eStats_category_assembly_status                              = 102,  ///< Assembly status 1 - Contig only;2 - Unplaced scaffolds only; 3 - Some chromosomes assembled;  4 - all chromosomes assembled; 5 - complete sequence genome; 6-unlocalized and unplaced scaffolds.
        eStats_category_net_count_scaffold                           = 103,  ///< number of scaffolds that are not also chromosomes (22 - 75)
        eStats_category_net_count_component                          = 104,  ///< number of components that are not also chromosomes or scaffolds (30 - 75 -73)
        eStats_category_count_regions_contain_alt_loci               = 105,  ///< number of regions containing alt-loci
        eStats_category_count_regions_contain_fix_patch              = 106,  ///< number of regions containing fix patch
        eStats_category_count_regions_contain_novel_patch            = 107,  ///< number of regions containing novel patch
        eStats_category_count_fix_patch_with_alignment               = 108,  ///< number of fix patch with alignment to primary assembly
        eStats_category_count_novel_patch_with_alignment             = 109,  ///< number of novel patch with alignment to primary assembly
        eStats_category_count_alt_scaf_with_alignment                = 110,  ///< number of alt scaffolds with alignment to primary assembly
        eStats_category_count_alt_loci_scaf                          = 111,  ///< number of alt-loci scaffolds.
        eStats_category_count_real_scaffolds                         = 112,  ///< number of scaffolds with gb_is_skipped = 0.
        eStats_category_top_level_count                              = 113,  ///< Number of chromosomes or plasmids, unplaced/unlocalized scaffolds, alt-loci scaffolds, and patch scaffolds
        eStats_category_total_gap_length                             = 114,  ///< Total length of gaps
        eStats_category_count_replicons_without_ordered_scaf         = 115,  ///< count of replicons without ordered scaffold
        eStats_category_other                                        = 255  ///< catch all
    };
    
    /// Access to EStats_category's attributes (values, names) as defined in spec
    static const NCBI_NS_NCBI::CEnumeratedTypeValues* ENUM_METHOD_NAME(EStats_category)(void);
    
    // types
    typedef int TStats_category;
    typedef Uint8 TValue;

    // getters
    // setters

    /// mandatory
    /// typedef int TStats_category
    ///  Check whether the Stats_category data member has been assigned a value.
    bool IsSetStats_category(void) const;
    /// Check whether it is safe or not to call GetStats_category method.
    bool CanGetStats_category(void) const;
    void ResetStats_category(void);
    TStats_category GetStats_category(void) const;
    void SetStats_category(TStats_category value);
    TStats_category& SetStats_category(void);

    /// mandatory
    /// typedef Uint8 TValue
    ///  Check whether the Value data member has been assigned a value.
    bool IsSetValue(void) const;
    /// Check whether it is safe or not to call GetValue method.
    bool CanGetValue(void) const;
    void ResetValue(void);
    TValue GetValue(void) const;
    void SetValue(TValue value);
    TValue& SetValue(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CGC_Scaf_stats_Base(const CGC_Scaf_stats_Base&);
    CGC_Scaf_stats_Base& operator=(const CGC_Scaf_stats_Base&);

    // data
    Uint4 m_set_State[1];
    int m_Stats_category;
    Uint8 m_Value;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CGC_Scaf_stats_Base::IsSetStats_category(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CGC_Scaf_stats_Base::CanGetStats_category(void) const
{
    return IsSetStats_category();
}

inline
void CGC_Scaf_stats_Base::ResetStats_category(void)
{
    m_Stats_category = (EStats_category)(0);
    m_set_State[0] &= ~0x3;
}

inline
CGC_Scaf_stats_Base::TStats_category CGC_Scaf_stats_Base::GetStats_category(void) const
{
    if (!CanGetStats_category()) {
        ThrowUnassigned(0);
    }
    return m_Stats_category;
}

inline
void CGC_Scaf_stats_Base::SetStats_category(CGC_Scaf_stats_Base::TStats_category value)
{
    m_Stats_category = value;
    m_set_State[0] |= 0x3;
}

inline
CGC_Scaf_stats_Base::TStats_category& CGC_Scaf_stats_Base::SetStats_category(void)
{
#ifdef _DEBUG
    if (!IsSetStats_category()) {
        memset(&m_Stats_category,UnassignedByte(),sizeof(m_Stats_category));
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Stats_category;
}

inline
bool CGC_Scaf_stats_Base::IsSetValue(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CGC_Scaf_stats_Base::CanGetValue(void) const
{
    return IsSetValue();
}

inline
void CGC_Scaf_stats_Base::ResetValue(void)
{
    m_Value = 0;
    m_set_State[0] &= ~0xc;
}

inline
CGC_Scaf_stats_Base::TValue CGC_Scaf_stats_Base::GetValue(void) const
{
    if (!CanGetValue()) {
        ThrowUnassigned(1);
    }
    return m_Value;
}

inline
void CGC_Scaf_stats_Base::SetValue(CGC_Scaf_stats_Base::TValue value)
{
    m_Value = value;
    m_set_State[0] |= 0xc;
}

inline
CGC_Scaf_stats_Base::TValue& CGC_Scaf_stats_Base::SetValue(void)
{
#ifdef _DEBUG
    if (!IsSetValue()) {
        memset(&m_Value,UnassignedByte(),sizeof(m_Value));
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Value;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_GENOMECOLL_GC_SCAF_STATS_BASE_HPP