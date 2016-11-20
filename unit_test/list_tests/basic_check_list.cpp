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

TEST(ft_lstnew, test_nodeeq) {
	t_list	*ret_node;
	char 	*str = "Coucou lol";


	ret_node = ft_lstnew(str, ft_strlen(str));
	EXPECT_STREQ((char*)ret_node->content, str);
	EXPECT_EQ(ret_node->content_size, ft_strlen(str));
}
