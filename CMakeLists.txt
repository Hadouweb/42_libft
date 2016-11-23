cmake_minimum_required(VERSION 3.0)
project(libft)

SET( CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS}" )

#add_subdirectory(unit_test)

set(SRCS
    srcs/bit/ft_printbit.c
    srcs/bit/ft_reversebit.c
    srcs/is/ft_isalnum.c
    srcs/is/ft_isalpha.c
    srcs/is/ft_isascii.c
    srcs/is/ft_isdigit.c
    srcs/is/ft_isprint.c
    srcs/is/ft_islower.c
    srcs/is/ft_isupper.c
    srcs/list/ft_lstadd.c
    srcs/list/ft_lstdel.c
    srcs/list/ft_lstdelone.c
    srcs/list/ft_lstiter.c
    srcs/list/ft_lstmap.c
    srcs/list/ft_lstnew.c
    srcs/list/ft_lstd_new.c
    srcs/list/ft_lstd_pushbefore_node.c
    srcs/list/ft_lstprint.c
    srcs/list/ft_lstpush_back.c
    srcs/list/ft_lstpush_front.c
    srcs/list/ft_lst_pushafter_node.c
    srcs/list/ft_lstd_pushback.c
    srcs/list/ft_lstd_print.c
    srcs/list/ft_lstsize.c
    srcs/list/ft_lstsplit.c
    srcs/list/ft_lsttotab.c
    srcs/mem/ft_bzero.c
    srcs/mem/ft_memalloc.c
    srcs/mem/ft_memccpy.c
    srcs/mem/ft_memchr.c
    srcs/mem/ft_memcmp.c
    srcs/mem/ft_memcpy.c
    srcs/mem/ft_memdel.c
    srcs/mem/ft_memmove.c
    srcs/mem/ft_memset.c
    srcs/print/ft_putchar.c
    srcs/print/ft_putchar_fd.c
    srcs/print/ft_putendl.c
    srcs/print/ft_putendl_fd.c
    srcs/print/ft_putnbr.c
    srcs/print/ft_putnbr_base.c
    srcs/print/ft_putnbr_fd.c
    srcs/print/ft_putstr.c
    srcs/print/ft_putstr_fd.c
    srcs/str/ft_atoi.c
    srcs/str/ft_del_char.c
    srcs/str/ft_itoa.c
    srcs/str/ft_itoa_base.c
    srcs/str/ft_ltoa.c
    srcs/str/ft_strcat.c
    srcs/str/ft_strchr.c
    srcs/str/ft_strclr.c
    srcs/str/ft_strcmp.c
    srcs/str/ft_stradd_char.c
    srcs/str/ft_strjoin_free_s1.c
    srcs/str/ft_strcpy.c
    srcs/tab/ft_free_tab.c
    srcs/str/ft_strcpy_limit.c
    srcs/str/ft_strdel.c
    srcs/str/ft_strdup.c
    srcs/str/ft_strequ.c
    srcs/str/ft_striter.c
    srcs/str/ft_striteri.c
    srcs/str/ft_strjoin.c
    srcs/str/ft_strjoin_free_s2.c
    srcs/str/ft_strlcat.c
    srcs/str/ft_strlen.c
    srcs/str/ft_strlen_limit.c
    srcs/str/ft_strmap.c
    srcs/str/ft_strmapi.c
    srcs/str/ft_strncat.c
    srcs/str/ft_strncmp.c
    srcs/str/ft_strncpy.c
    srcs/str/ft_strndup.c
    srcs/str/ft_strnequ.c
    srcs/str/ft_strnew.c
    srcs/str/ft_strnstr.c
    srcs/str/ft_strrchr.c
    srcs/str/ft_strsplit.c
    srcs/str/ft_strstr.c
    srcs/str/ft_strsub.c
    srcs/str/ft_strtrim.c
    srcs/str/ft_tolower.c
    srcs/str/ft_toupper.c
    srcs/tab/ft_tabjoin.c
    srcs/tab/ft_tablen.c
    srcs/get_next_line.c
    srcs/str/ft_nblen.c
    srcs/str/ft_atoi_base.c)

set(HEADERS includes/libft.h)

add_library(ft ${SRCS} ${HEADERS})

target_include_directories(ft PUBLIC ./includes)