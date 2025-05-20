#include <gtest/gtest.h>
#include "sorting.h"

using namespace alg;

TEST(IntroTutorial, SortingTest)
{
	ASSERT_EQ(introTutorial(3, {0, 3, 1, 5}), 1);
	ASSERT_EQ(introTutorial(0, { 0, 3, 1, 5 }), 0);
	ASSERT_EQ(introTutorial(15, { 50, -3, 1, 15, 982, 547 }), 3);
}