/***********************************************************************
* $Id: RADHTest.c 35299 2019-04-26 11:57:33Z zszoboszlai $
* Copyright B. Braun Melsungen AG
* Project: Software 0174
* Documentation:
***********************************************************************/

/** @file
*
*/

/***********************************************************************/
/* INCLUDES                                                            */
/***********************************************************************/

#include "Header1.h"

#include <unity_fixture.h>


/***********************************************************************/
/* DEFINES                                                             */
/***********************************************************************/

TEST_GROUP( GroupName );

TEST_SETUP( GroupName )
{

}

TEST_TEAR_DOWN( GroupName )
{

}

TEST( GroupName, TestName )
{
    TEST_ASSERT_EQUAL( 3, 3 );
}

TEST_GROUP_RUNNER( GroupName )
{
    RUN_TEST_CASE( GroupName, TestName );
}

/** Test runner ******************************************************************************************************/

void runAllTests( )
{
    RUN_TEST_GROUP( GroupName );
}

/***********************************************************************/
/* LOCAL FUNCTIONS                                                     */
/***********************************************************************/


/** @} */

