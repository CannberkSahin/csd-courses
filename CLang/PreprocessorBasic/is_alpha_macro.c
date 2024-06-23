/**
 * @file is_upper.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 #include <stdio.h>
 
 /**
 * Asagidaki makro bir harfin alfa-numerik bir harf
 * olup olmadigini sorgulamaktadir.
 */
 
 #define   is_upper(c)	 ((c) >= 'A' && (c) <= 'Z')
 #define   is_lower(c)	 ((c) >= 'a' && (c) <= 'c')
 #define   is_alpha(c)	 (is_upper(c) || is_lower(c))
 
 int main()
 {
	int ch;
	
	printf("Bir karakter girin: ");
	ch = getchar();
	
	if(is_alpha(ch))
		printf("harf karakteri!\n");
	else
		printf("harf karakteri degil!\n");
 }