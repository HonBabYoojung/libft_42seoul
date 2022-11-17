/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungohki <sungohki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:06:20 by sungohki          #+#    #+#             */
/*   Updated: 2022/11/17 17:24:48 by sungohki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testcase.h"

int	main(void)
{
	// // isalpha
	// printf("\t\t-test isalpha-\n");
	// for(int index = -1; index < 'z' - 'a' + 5; index++)
	// 	printf("%d ", isalpha('a' + index));	
	// printf("\n");
	// for(int index = -1; index < 'z' - 'a' + 5; index++)
	// 	printf("%d ", ft_isalpha('a' + index));
	// // isdigit
	// printf("\n\n\t\t-test isdigit-\n");
	// for(int index = '0' - 1; index < '9' + 5; index++)
	// 	printf("%d ", isdigit(index));
	// printf("\n");
	// for(int index = '0' - 1; index < '9' + 5; index++)
	// 	printf("%d ", ft_isdigit(index));
	// // isalnum
	// printf("\n\n\t\t-test isalnum-\n");
	// for(int index = -5; index < 128; index++)
	// 	printf("%d ", isalnum(index));
	// printf("\n");
	// for(int index = -5; index < 128; index++)
	// 	printf("%d ", ft_isalnum(index));
	// // isascii
	// printf("\n\n\t\t-test isascii-\n");
	// for(int index = -5; index < 150; index++)
	// 	printf("%d ", isascii(index));
	// printf("\n\n");
	// for(int index = -5; index < 150; index++)
	// 	printf("%d ", ft_isascii(index));
	// // isprint
	// printf("\n\n\t\t-test isprint-\n");
	// for(int index = -5; index < 150; index++)
	// 	printf("%d ", isprint(index));
	// printf("\n");
	// for(int index = -5; index < 150; index++)
	// 	printf("%d ", ft_isprint(index));
	// // strlen
	// printf("\n\n\t\t-test strlen-\n");
	// if(1){
	// 	char	*test = "hello, world!";
	// 	// char	*nullnull = "";
	// 	printf("%lu %lu\n", strlen(test), ft_strlen(test));
	// 	// printf("%lu\n", strlen(0)); 
	// 	// printf("%lu\n", ft_strlen(0));
	// }
	// // memset
	// printf("\n\n\t\t-test memset-\n");
	// if(1){
	// 	char	test1[] = "hello, world!";
	// 	char	test2[] = "hello, world!";
	// 	printf("%s, len : %lu\n", test1, strlen(test1));
	// 	memset(test1, 40, 1);
	// 	printf("%s\n", test1);
	// 	ft_memset(test2, 40, 1);
	// 	printf("%s\n", test2);
	// }
	// // bzero
	// printf("\n\n\t\t-test bzero-\n");
	// if(1){
	// 	char	test1[] = "hello, world!";
	// 	char	test2[] = "hello, world!";
	// 	printf("%s, len : %lu\n", test1, strlen(test1));
	// 	printf("%s, len : %lu\n", test2, strlen(test2));
	// 	bzero(test1, 14);
	// 	for (int i = 0; i < 17; i++)
	// 		printf("%d ", test1[i]);
	// 	printf("\n");
	// 	ft_bzero(test2, 14);
	// 	for (int i = 0; i < 17; i++)
	// 		printf("%d ", test2[i]);
	// }
	// // memcpy
	// printf("\n\n\t\t-test memcpy-\n");
	// if(1){
	// 	char	test1[] = "aaaaaaaaaaaaaaaaaaaa";
	// 	char	test11[] = "hello,_world!";
	// 	char	test2[] = "aaaaaaaaaaaaaaaaaaaa";
	// 	char	test22[] = "hello,_world!";
	// 	printf("%s, len : %lu\n%s, len : %lu\n", test1, strlen(test1), test11, strlen(test11));
	// 	memcpy(test1, test11, 20);
	// 	printf("%s\n", test1);
	// 	ft_memcpy(test2, test22, 15);
	// 	printf("%s\n", test2);
	// }
	// // memmove
	// printf("\n\n\t\t-test memmove-\n");
	// if(1){
	// 	char	test1[] = "aaaaaaaaaaaaaaaaaaaa";
	// 	char	test11[] = "hello,_world!";
	// 	// char	test2[] = "aaaaaaaaaaaaaaaaaaaa";
	// 	// char	test22[] = "hello,_world!";
	// 	// printf("%s, len : %lu\n%s, len : %lu\n", test1, strlen(test1), test11, strlen(test11));
	// 	printf("%lu\n", (unsigned long)test1 - (unsigned long)test11);
	// 	ft_memmove(test1, test11, 20);
	// 	for(size_t i = 0; i < 25 + 1; i++)
	// 		printf("%4c", test1[i]);
	// 	printf("\n");
	// 	for(size_t i = 0; i < 25 + 1; i++)
	// 		printf("%4d", test1[i]);
	// }
	// // strlcpy
	// printf("\n\n\t\t-test strlcpy-\n");
	// if(1){
	// 	char	test00[] = "\0\0\0\0\0\0\0\0\0\0";
	// 	char	test10[] = "0123456789";	//10 + 1
	// 	char	test11[] = "abcdefghijklmnopqrst"; // 20 + 1
	// 	char	test12[] = "hello,_world!";	// 13 + 1
	// 	int		len10 = strlen(test10);
	// 	int		len11 = strlen(test11);
	// 	int		len12 = strlen(test12);
	// 	ft_strlcpy(test00, test12, 11);
	// 	strlcpy(test10, test12, 12);
	// 	strlcpy(test11, test12, 20);
	// 	// strlcpy(test12, test12, 5);
	// 	print_all(test00, len10 + 5);
	// 	print_all(test10, len10 + 5);
	// 	print_all(test11, len11 + 5);
	// 	print_all(test12, len12 + 5);
	// }
	// // strlcat
	// printf("\t\t\n\n-test strlcat-\n");
	// if(1){
	// 	char	test10[100] = "0123456789";	// 10 + 1
	// 	char	test11[100] = "_987654321"; // 10 + 1
	// 	char	test12[100] = "hello,_world!";	// 13 + 1
	// 	size_t	len10 = strlcat(test10, test12, strlen(test10) + 20);
	// 	size_t	len11 = ft_strlcat(test11, test12, strlen(test11) + 5);
	// 	printf("%lu\n", len10);
	// 	printf("%lu\n", len11);
	// 	print_all(test10, len10 + 5);
	// 	print_all(test11, len11 + 5);

	// }
	// // toupper
	// printf("\t\t\n-test toupper-\n");
	// if(1){
	// 	for(int index = -1; index < 'z'; index++)
	// 		// printf("index : %d, origin : %c, toupper : %c\n", index, index, ft_toupper(index));
	// 		printf("index : %d, origin : %c, toupper : %c\n", index, index, toupper(index));
	// }
	// // tolower
	// printf("\t\t\n-test tolower-\n");
	// if(1){
	// 	for(int index = -1; index < 'Z'; index++)
	// 		printf("index : %d, origin : %c, tolower : %c, ft_fun : %c\n"
	// 			, index, index, tolower(index), ft_tolower(index));
	// 		// printf("index : %d, origin : %c, tolower : %c\n", index, index, tolower(index));
	// }
	// // strchr
	// printf("\n\t\t -test strchr-\n");
	// if(1){
	// 	char	test10[100] = "hello,_world!";
	// 	printf("%s\n", strchr(test10, '!'));
	// 	printf("%s\n", ft_strchr(test10, '!'));
	// }
	// // strrchr
	// printf("\n\t\t -test strrchr-\n");
	// if(1){
	// 	char test10[100] = "hello,_\0world!";
	// 	char test11[100] = "hello,_world!";
	// 	printf("%s\n", strrchr(test10, '!'));
	// 	printf("%s\n", ft_strrchr(test10, '!'));
	// 	printf("%s\n", strrchr(test11, 'r'));
	// 	printf("%s\n", ft_strrchr(test11, 'r'));
	// }
	// // strncmp
	// printf("\n\t\t -test strncmp-\n");
	// if(1){
	// 	char	test10[100] = "hello,_world!";
	// 	char	test11[100] = "hello,_kitty!";
	// 	char	test12[100] = "hello,_world!";
	// 	for(int i = 0; i < (int)strlen(test10) + 5; i++)
	// 		printf("%d ", strncmp(test11, test10, i));
	// 	printf("\n");
	// 	for(int i = 0; i < (int)strlen(test10) + 5; i++)
	// 		printf("%d ", ft_strncmp(test11, test10, i));
	// 	printf("%d ", strncmp(test10, test12, 15));
	// 	printf("%d ", ft_strncmp(test10, test12, 15));
	// }
	// // memchr
	// printf("\n\t\t -test memchr-\n");
	// if(1){
	// 	char	test11[] = "hello,_world!";	// 13 + 1
	// 	char	test10[] = "asdfasdf";			// 8 + 1
	// 	int		ch = ',';
	// 	printf("%s\n", test11);
	// 	for(int i = 1; i < (int)strlen(test10) + 20; i++)
	// 		printf("n : %2d -> %s\t%s\n", i, memchr(test10, ch, i), ft_memchr(test10, ch, i));
	// 	// for(int i = 0; i < (int)strlen(test10) + 5; i++)
	// 	// 	printf("i : %d -> %s\n", i, ft_memchr(test10, 'o', i));
	// }
	// // memcmp
	// printf("\n\t\t -test memcmp-\n");
	// if(1){
	// 	char	test12[] = "hello,_kitty!";	// 13 + 1
	// 	char	test10[] = "hello,_world!";	// 13 + 1
	// 	char	test11[] = "hello,_world!";	// 13 + 1
	// 	// char	test00[] = "hell0";
	// 	char	test13[] = "hello,_world!";
	// 	for(int i = 1; i < (int)strlen(test10) + (int)strlen(test12) + (int)strlen(test11); i++)
	// 		printf("%3d", memcmp(test13, test11, i));
	// 	printf("\n");
	// 	for(int i = 1; i < (int)strlen(test10) + (int)strlen(test12) + (int)strlen(test11); i++)
	// 		printf("%3d", ft_memcmp(test13, test11, i));
	// }
	// // strnstr
	// printf("\n\t\t -test strnstr-\n");
	// if(1){
	// 	char	test10[] =
	// 	"hello, my name is sungohki. I am from 42SEOUL 8th La Pisine. Nice to meet you :)";
	// 	// char	test20[100] = "";
	// 	char	test21[] = "42SEOUL";
	// 	for(int i = 0; i < 46; i++){
	// 		if(strnstr(test10, test21, i) != 0){
	// 			printf("len : %2d\t%s\n", i, strnstr(test10, test21, i));
	// 			break;
	// 		}
	// 	}
	// 	printf("\n");
	// 	for(int i = 0; i < 46; i++){
	// 		if(strnstr(test10, test21, i) != 0){
	// 			printf("len : %2d\t%s\n", i, ft_strnstr(test10, test21, i));
	// 			break;
	// 		}
	// 	}
	// }
	// // atoi
	// printf("\n\t\t -test atoi-\n");
	// if(1){
	// 	char test10[100] = " \t +001234a4";
	// 	printf("%d\n", atoi(test10));
	// 	printf("%d\n", ft_atoi(test10));
	// }
	// // calloc
	// printf("\n\t\t -test calloc-\n");
	// if(1){
	// 	// int		*test10 = (int *)malloc(sizeof(int) * 10);
	// 	int			*test11 = (int *)calloc(10, sizeof(int));
	// 	int			*test12 = (int *)ft_calloc(10, sizeof(int));
	// 	// printf("%lu %lu %lu \n", sizeof(test10), sizeof(test11), sizeof(test12));
	// 	for(int i = 0; i < 10 + 5; i++)
	// 	{
	// 		test11[i] = 50;
	// 		printf(" %c", (test11)[i]);
	// 		// printf("%c ", ((char *)test11)[i]);
	// 	}
	// 	printf("|%lu ~ %lu\n", (unsigned long)test11, (unsigned long)&test11[9]);
	// 	for(int i = 0; i < 10; i++)
	// 	{
	// 		printf(" %c", (test12)[i]);
	// 		// printf("%c ", ((char *)test12)[i]);
	// 	}
	// 	printf("|%lu ~ %lu\n", (unsigned long)test12, (unsigned long)&test12[9]);
	// }
	// strdup
	// printf("\n\t\t -test strdup- \n");
	// if(1){
	// 	char test10[100] = "hello,_world!";		// 13 + 1;
	// 	char *test20 = strdup(test10);
	// 	char *test21 = ft_strdup(test10);
	// 	printf("%s|\nlen : %lu\n", test20, strlen(test20));
	// 	printf("%s|\nlen : %lu\n", test21, strlen(test21));
	// }
	// // ft_substr
	// printf("\n\t\t -test ft_substr-\n");
	// if(1){
	// 	char	test10[100] = "hello,_world!";
	// 	char	*test20 =
	// 		ft_substr(test10, 14, 0);
	// 	printf("%s\n", test20);
	// 	// print_all(test20, strlen(test20) + 4);
	// }
	// // ft_strjoin
	// printf("\n\t\t -test ft_strjoin -\n");
	// if(1){
	// 	char	test10[100] = "hello,";
	// 	char	test11[100] = "_kitty!";
	// 	// printf("%s\n", ft_strjoin(test10, test11));
	// 	print_all(ft_strjoin(test10, test11), 20);
	// }
	// // ft_trim
	// printf("\n\n\t -test ft_trim-\n");
	// if(1){
	// 	char	test10[100] = "hello,_world!";
	// 	// char	test11[100] = "";
	// 	char	*test20 = ft_trim(test10, test10);
	// 	printf("test10 (len : %2lu) : [%s]\n", strlen(test10), test10);
	// 	printf("test20 (len : %2lu) : [%s]\n", strlen(test20), test20);
	// }
	// ft_split
	printf("\n\n\t -test ft_split-\n");
	if(1){
		char	test10[] = 
			"ssscsscssssscsscscss";
			// "hello, world! My name is sungohki. And you?";	// 8
		char	**test20 = ft_split(test10, 'c');
		// print_all(test20[0], 100);
		for (int i = 0; i < 50; i++){
			printf("%s\n", test20[i]);
		}
	}
	return (0);
}
