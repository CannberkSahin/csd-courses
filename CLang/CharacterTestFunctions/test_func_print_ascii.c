/**
 * @file test_func_print_ascii.c
 * @author Canberk Sahin
 * @date 10 Sep 2020
 *
 * */
 
 #include <stdio.h>
 #include <ctype.h>
 
 int main()
 {
	 printf("isupper\n");
	 for(int i = 0; i < 128; ++i)
	 {
		 if(isupper(i))
			 printf("%c", i);
	 }
	 printf("\n--------------------------------------\n");
	 
	 printf("islower\n");
	 for(int i = 0; i < 128; ++i)
	 {
		 if(islower(i))
			 printf("%c", i);
	 }
	 printf("\n--------------------------------------\n");
	 
	 printf("isalpha\n");
	 for(int i = 0; i < 128; ++i)
	 {
		 if(isalpha(i))
			 printf("%c", i);
	 }
	 printf("\n--------------------------------------\n");
	 
	 printf("isdigit\n");
	 for(int i = 0; i < 128; ++i)
	 {
		 if(isdigit(i))
			 printf("%c", i);
	 }
	 printf("\n--------------------------------------\n");
	 
	 printf("isxdigit\n");
	 for(int i = 0; i < 128; ++i)
	 {
		 if(isxdigit(i))
			 printf("%c", i);
	 }
	 printf("\n--------------------------------------\n");
	 
	 printf("isalnum\n");
	 for(int i = 0; i < 128; ++i)
	 {
		 if(isalnum(i))
			 printf("%c", i);
	 }
	 printf("\n--------------------------------------\n");
	 
	 printf("ispunct\n");
	 for(int i = 0; i < 128; ++i)
	 {
		 if(ispunct(i))
			 printf("%c", i);
	 }
	 printf("\n--------------------------------------\n");
	 
	 printf("isprint\n");
	 for(int i = 0; i < 128; ++i)
	 {
		 if(isprint(i))
			 printf("%c", i);
	 }
	 printf("\n--------------------------------------\n");
	 
	 printf("isgraph\n");
	 for(int i = 0; i < 128; ++i)
	 {
		 if(isgraph(i))
			 printf("%c", i);
	 }
	 printf("\n--------------------------------------\n");
	 
	 /**
	 * Kontrol karakterlerinin goruntusu olmadigi icin
	 * %c yerine %d ile ascii tablosundaki indeks no'lari 
	 * yazdirilmistir.
	 */
	 printf("isspace\n");
	 for(int i = 0; i < 128; ++i)
	 {
		 if(isspace(i))
			 printf("%d ", i);
	 }
	 printf("\n--------------------------------------\n");
	 
	 printf("isblank\n");
	 for(int i = 0; i < 128; ++i)
	 {
		 if(isblank(i))
			 printf("%d ", i);
	 }
	 printf("\n--------------------------------------\n");
	 
	 printf("iscntrl\n");
	 for(int i = 0; i < 128; ++i)
	 {
		 if(iscntrl(i))
			 printf("%d ", i);
	 }
	 printf("\n--------------------------------------\n");
 }