//
// Created by AK on 13/10/15.
//

#include "gtest/gtest.h"
#include <bitset>

#if __cplusplus
extern "C" {
#endif

#include "libft.h"

#if __cplusplus
}
#endif

TEST(ft_isalnum, test_true) {
	EXPECT_TRUE(ft_isalnum('0'));
	EXPECT_TRUE(ft_isalnum('5'));
	EXPECT_TRUE(ft_isalnum('z'));
	EXPECT_TRUE(ft_isalnum('Z'));
	EXPECT_TRUE(!ft_isalnum(0));
	EXPECT_TRUE(!ft_isalnum(173));
	EXPECT_TRUE(!ft_isalnum(-1));
	EXPECT_TRUE(!ft_isalnum(59));
}
