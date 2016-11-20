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

TEST(ft_printbit, test_streq) {
	char c1 = 'a';
	char c2 = '\0';
	char c3 = 127;
	char c4 = 128;

	testing::internal::CaptureStdout();
	ft_printbit(c1);
	ft_printbit(c2);
	ft_printbit(c3);
	ft_printbit(c4);
	std::string output1 = testing::internal::GetCapturedStdout();

	testing::internal::CaptureStdout();
	std::cout << std::bitset<8>(c1) << std::bitset<8>(c2) << std::bitset<8>(c3) << std::bitset<8>(c4);
	std::string output2 = testing::internal::GetCapturedStdout();

	EXPECT_STREQ(output1.c_str(), output2.c_str());
}

TEST(ft_reversebit, test_streq) {
	char c1 = 'a';
	char c2 = 'c';
	char c3 = 127;
	char c4 = 254;
	char bits[4];

	bits[0] = ft_reversebit(c1);
	bits[1] = ft_reversebit(c2);
	bits[2] = ft_reversebit(c3);
	bits[3] = ft_reversebit(c4);

	testing::internal::CaptureStdout();
	std::cout << std::bitset<8>(c1) << std::bitset<8>(c2) << std::bitset<8>(c3) << std::bitset<8>(c4);
	std::string output = testing::internal::GetCapturedStdout();

	EXPECT_STREQ(output.c_str(), "01100001011000110111111111111110");
}
