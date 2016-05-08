/**CFile****************************************************************

  FileName    [acecInt.h]

  SystemName  [ABC: Logic synthesis and verification system.]

  PackageName [CEC for arithmetic circuits.]

  Synopsis    [Internal declarations.]

  Author      [Alan Mishchenko]
  
  Affiliation [UC Berkeley]

  Date        [Ver. 1.0. Started - June 20, 2005.]

  Revision    [$Id: acecInt.h,v 1.00 2005/06/20 00:00:00 alanmi Exp $]

***********************************************************************/

#ifndef ABC__proof__acec__acec__int_h
#define ABC__proof__acec__acec__int_h


////////////////////////////////////////////////////////////////////////
///                          INCLUDES                                ///
////////////////////////////////////////////////////////////////////////

#include "aig/gia/gia.h"
#include "proof/cec/cec.h"
#include "acec.h"

////////////////////////////////////////////////////////////////////////
///                         PARAMETERS                               ///
////////////////////////////////////////////////////////////////////////


ABC_NAMESPACE_HEADER_START
 

////////////////////////////////////////////////////////////////////////
///                         BASIC TYPES                              ///
////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////
///                      MACRO DEFINITIONS                           ///
////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////
///                             ITERATORS                            ///
////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////
///                    FUNCTION DECLARATIONS                         ///
////////////////////////////////////////////////////////////////////////

/*=== acecFadds.c ========================================================*/
extern Vec_Int_t *   Gia_ManDetectFullAdders( Gia_Man_t * p, int fVerbose );
extern Vec_Int_t *   Gia_ManDetectHalfAdders( Gia_Man_t * p, int fVerbose );
/*=== acecOrder.c ========================================================*/
extern Vec_Int_t *   Gia_PolynReorder( Gia_Man_t * pGia, int fVerbose );
/*=== acecPolyn.c ========================================================*/
extern void          Gia_PolynBuild( Gia_Man_t * pGia, Vec_Int_t * vOrder, int fVerbose );
/*=== acecUtil.c ========================================================*/
extern void          Gia_PolynAnalyzeXors( Gia_Man_t * pGia, int fVerbose );

ABC_NAMESPACE_HEADER_END



#endif

////////////////////////////////////////////////////////////////////////
///                       END OF FILE                                ///
////////////////////////////////////////////////////////////////////////
