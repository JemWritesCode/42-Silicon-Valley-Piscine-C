/// for testing only

#include <stdio.h>

int		match(char *s1, char *s2);

int		main(void)
{
	char *s1;
	char *s2;

	s1 = "aaaaa";
	s2 = "bbbbb";
	printf("Expect return 0: %d \n", match(s1, s2));

	s1 = "aaa";
	s2 = "aaa";
	printf("Expect return 1: %d \n", match(s1, s2));

	
	s1 = "aaa";
	s2 = "*";
	printf("Expect return 1: %d \n", match(s1, s2));
	

	s1 = "aa";
	s2 = "***";
	printf("(S1 SHORTER)Expect return 1: %d \n", match(s1, s2));

	s1 = "test..c";
	s2 = "test.*.c";
	printf("(DOUBLE DOTS)Expect return 1: %d \n", match(s1, s2));

	s1 = "";
	s2 = "";
	printf("Expect return 1: %d \n", match(s1, s2));

	s1 = "1";
	s2 = "26";
	printf("Expect return 0: %d \n", match(s1, s2));

	s1 = "??";
	s2 = "??";
	printf("Expect return 1: %d \n", match(s1, s2));

	s1 = "!";
	s2 = "?";
	printf("(SYMBOLS)Expect return 0: %d \n", match(s1, s2));

	s1 = "main.c";
	s2 = "*.c";
	printf("(PDF TEST)Expect return 1: %d \n", match(s1, s2));

	s1 = "aaa";
	s2 = "";
	printf("(STR EMPTY)Expect return 0: %d \n", match(s1, s2));

	s1 = "aaa";
	s2 = "*****";
	printf("Expect return 1: %d \n", match(s1, s2));

	s1 = "";
	s2 = "a";
	printf("Expect return 0: %d \n", match(s1, s2));



}
