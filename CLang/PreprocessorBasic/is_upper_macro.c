/**
 * @file is_upper.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 #include <stdio.h>
 
 /**
 * Asagidaki makro bir harfin buyuk olup olmadigini sorguluyor.
 */
 
 #define   is_upper(c)	 ((c) >= 'A' && (c) <= 'Z')
 
 int main()
 {
	int ch;
	
	printf("Bir karakter girin: ");
	ch = getchar();
	
	if(is_upper(ch))
		printf("Evet buyuk harf!\n");
	else
		printf("Hayir buyuk harf degil!\n");
	
	//makrolar dongulerle de kullanilabilir. 
	for(int i = 0; i < 128; ++i)
	{
		if(is_upper(i))
			putchar(i);
	}
 }