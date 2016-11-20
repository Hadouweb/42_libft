//
// Created by AK on 13/10/15.
//

#include "gtest/gtest.h"

#if __cplusplus
extern "C" {
#endif

#include "libft.h"

#if __cplusplus
}
#endif

TEST(lol, mdr) {
	testing::internal::CaptureStdout();
	ft_putstr("lol\n");
	std::string output = testing::internal::GetCapturedStdout();
	EXPECT_STREQ(output.c_str(), "lol\n");
}

TEST(basic_check, test_neq) {
    EXPECT_NE(1, 0);
}
