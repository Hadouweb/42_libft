/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 00:36:45 by nle-bret          #+#    #+#             */
/*   Updated: 2016/10/13 12:13:37 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

# define BUFF_SIZE 10

# define PTR_NODE(ptr, t, member) (t*) ((char*)ptr - (char*)&((t*)0)->member)

# define C_BLACK(x) "\033[30;1m" x "\033[0m"
# define C_RED(x) "\033[31;1m" x "\033[0m"
# define C_GREEN(x) "\033[32;1m" x "\033[0m"
# define C_YELLOW(x) "\033[33;1m" x "\033[0m"
# define C_BLUE(x) "\033[34;1m" x "\033[0m"
# define C_MAGENTA(x) "\033[35;1m" x "\033[0m"
# define C_CYAN(x) "\033[36;1m" x "\033[0m"
# define C_WHITE(x) "\033[37;1m" x "\033[0m"

# define C_BOLD_BLACK(x) "\033[1m\033[30m;1m" x "\033[0m"
# define C_BOLD_RED(x) "\033[1m\033[31m;1m" x "\033[0m"
# define C_BOLD_GREEN(x) "\033[1m\033[32m;1m" x "\033[0m"
# define C_BOLD_YELLOW(x) "\033[1m\033[33m;1m" x "\033[0m"
# define C_BOLD_BLUE(x) "\033[1m\033[34m;1m" x "\033[0m"
# define C_BOLD_MAGENTA(x) "\033[1m\033[35m;1m" x "\033[0m"
# define C_BOLD_CYAN(x) "\033[1m\033[36m;1m" x "\033[0m"
# define C_BOLD_WHITE(x) "\033[1m\033[37m;1m" x "\033[0m"

void				*ft_memset(void *b, int c, size_t len);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memccpy (void *dst, const void *src, int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
size_t				ft_strlen(const char *s);
size_t				ft_strlen_limit(const char *s, char c);
int					ft_nblen(long long value);
char				*ft_strdup(const char *s1);
char				*ft_strndup(char *str, int len);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strcpy_limit(char *str, char n);
char				*ft_strncpy(char *dst, const char *src, size_t n);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strncat(char *s1, const char *s2, size_t n);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(const char *s1, const char *s2);
char				*ft_strnstr(const char *s1, const char *s2, size_t n);
char				*ft_del_char(char *str, char c);
char				*ft_stradd_char(char **s, char c);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_atoi(const char *str);
int					ft_atoi_base(const char *str, int base);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_islower(int c);
int					ft_isupper(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);

void				*ft_memalloc(size_t size);
void				ft_memdel(void	**ap);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strjoin_free(char *s1, char *s2, int free_token);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(char const *s, char c);
char				*ft_itoa(int n);
char				*ft_ltoa(long n);
void				ft_putchar(char c);
void				ft_putstr(char const *s);
void				ft_putendl(char const *s);
void				ft_putnbr(int n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(const char *s, int fd);
void				ft_putendl_fd(const char *s, int fd);
void				ft_putnbr_fd(int n, int fd);

typedef struct		s_link
{
	struct s_link	*prev;
	struct s_link	*next;
}					t_link;

typedef struct		s_tree
{
	struct s_link	link;
	int				depth;
	struct s_tree	*parent;
	struct s_tree	*left;
	struct s_tree	*right;
}					t_tree;

enum	e_tree
{
	TREE_LEFT,
	TREE_RIGHT
};

void				ft_tree_info_node(t_tree *tree);
t_tree				*ft_tree_add(t_tree *ref_node, enum e_tree edge,
						t_tree *node);
void				ft_tree_inorder(t_tree *node, void (*f)(void *node));
void				ft_tree_preorder(t_tree *node, void (*f)(void *node));
void				ft_tree_postorder(t_tree *node, void (*f)(void *node));

void				ft_printbit(unsigned char octet);
unsigned char		ft_reversebit(unsigned char octet);
void				print_memory(const void *addr, size_t size);
char				*ft_itoa_base(int n, int base);
void				ft_putnbr_base(int n, int base);

typedef struct		s_list
{
	t_link			link;
	t_link			*head;
	t_link			*tail;
	unsigned long	size;
}					t_list;

typedef struct		s_str_linked
{
	t_link			link;
	void			*str;
}					t_str_linked;

void				ft_list_push_back(t_list **list, t_link *data);
void				ft_list_push_front(t_list **list, t_link *data);
void				ft_list_init(t_list **list, t_link *link);
unsigned long		ft_list_size(t_list *list);
void				ft_list_del(t_list **list, void (*del)(void *));
void				ft_list_print(t_link *link, void (*print)(void *));
void				ft_list_push_before_node(t_list **list, t_link *node,
						t_link *new_node);
void				ft_list_push_after_node(t_list **list, t_link *node,
						t_link *new_node);
void				**ft_list_to_tab(t_list *list);
t_list				*ft_list_str_split(char const *s, char c);

int					ft_tablen(int *t);
int					*ft_tabjoin(int *t1, int *t2);
void				ft_free_tab(void **tab);

typedef struct		s_buff_fd
{
	t_link			link;
	int				fd_num;
	char			*rest;
}					t_buff_fd;

int					get_next_line(int const fd, char **line);

#endif
