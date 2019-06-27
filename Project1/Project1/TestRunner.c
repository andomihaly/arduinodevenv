/***********************************************************************
* $Id: TestRunner.c 29550 2016-02-25 07:47:29Z loew $
* Copyright B. Braun Melsungen AG
* Project: Software 0174
***********************************************************************/

/** @file
* Test runner for unit tests using Visual Studio 2013.
*/

/***********************************************************************/
/* INCLUDES                                                            */
/***********************************************************************/

#ifdef _BullseyeCoverage
#pragma BullseyeCoverage off
#endif

#include "unity_fixture.h"
#include <stdio.h>

/***********************************************************************/
/* DEFINES                                                             */
/***********************************************************************/

/***********************************************************************/
/* TYPES                                                               */
/***********************************************************************/

/***********************************************************************/
/* GLOBAL CONSTANTS                                                    */
/***********************************************************************/

/***********************************************************************/
/* LOCAL CONSTANTS                                                     */
/***********************************************************************/

/***********************************************************************/
/* GLOBAL VARIABLES                                                    */
/***********************************************************************/

/***********************************************************************/
/* LOCAL VARIABLES                                                     */
/***********************************************************************/

/***********************************************************************/
/* LOCAL FUNCTION PROTOTYPES                                           */
/***********************************************************************/

extern void runAllTests(void);

/***********************************************************************/
/* GLOBAL FUNCTIONS                                                    */
/***********************************************************************/

extern int cov_dumpData(void);

int main(int argc, char* argv[])
{
    int returnValue = -1;

    returnValue = UnityMain( argc, argv, runAllTests );
    getchar( );


#ifdef _BullseyeCoverage
/* save coverage data from memory */
    if (0 != cov_dumpData())
    returnValue = 1;  // error
#endif

    return returnValue;
}

/***********************************************************************/
/* LOCAL FUNCTIONS                                                     */
/***********************************************************************/