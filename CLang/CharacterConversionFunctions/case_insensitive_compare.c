/**
 * @file case_insensitive_compare.c
 * @author Canberk Sahin
 * @date 10 Sep 2020
 *
 * */
 
 #include <stdio.h>
 #include <ctype.h>
 #include <stdlib.h> 
 
 int main()
 {
	 int c1, c2;
	 
	 printf("İki karakter girin: ");
	 c1 = getchar();
	 c2 = getchar();
	 
	 // sensitive compare
	 if(c1 == c2)
		 printf("%c ve %c ayni karakterler\n", c1, c2);
	 else
		 printf("%c ve %c farkli karakterler\n", c1, c2);
	 
	 // insensitive compare
	 if (toupper(c1) == toupper(c2))
	     printf("%c ve %c ayni karakterler\n", c1, c2);
	 else
	 	 printf("%c ve %c farkli karakterler\n", c1, c2);
 }