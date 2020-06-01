/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** my.h
*/

#define MY_H_

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <time.h>

struct s_match
{
    char **tab;
    int	line;
    int	star;
    int	col;
    int	done;
};

void my_putchar(char c);
int my_isneg(int nb);
int my_put_nbr(int nb);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
void my_sort_int_array(int *tab, int size);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str, int size);
int my_showstr(char const *str);
int my_showmem(char const *str, int size);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
void conv_base_bin(unsigned int nb);
void conv_base_hexa_maj(unsigned int nb);
void conv_base_oct(unsigned int nb);
void conv_base_hexa(unsigned int nb);
void my_printf_s(char *str);
void my_printf(char *s, ...);
void my_turn(struct s_match *match);
int	my_getnb(char const *str);
int arg_check(char **av);
int match_check(int line, int ma, struct s_match *match, char *c);
int count_line(char *str);
void struct_init(struct s_match *match, char **av);
void free_tab(char **tab);
char *get_next_line(const int fd);
void modif_tab(struct s_match *ma, int line, int nb);
int count_match_line(char *str);
int win_condition(char **tab);
void my_free_tab(char **tab);
char **pyramide(char **tab, int line, int star);
void init_struct(struct s_match *ma, char **av);
void ia_turn(struct s_match *ma);
int	game(struct s_match *ma);
void turn(struct s_match *ma);