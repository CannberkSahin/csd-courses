/**
 * @file character_test_function.c
 * @author Canberk Sahin
 * @date 10 Sep 2020
 *
 * */
 
 #include <stdio.h>
 #include <ctype.h>
 
 int main()
 {
	 /**
	 *	C dilinde karakterler ile ilgili islem yapan
	 *	fonksiyonlarda fonksiyon parametreleri int 
	 *	türden deger alir. Bunun nedeni char türünün
	 *	zaten int türüne (integral promotion) donüstürülmesidir.
	 */
	 int c;
	 printf("Bir karakter girin: ");
	 c = getchar();
	 
	 if(isupper(c))
		 printf("isupper true\n");
	 
	 if(islower(c))
		 printf("islower true\n");
	 
	 if(isalpha(c))
		 printf("isalpha true\n");
	 
	 if(isdigit(c))
		 printf("isdigit true\n");
	 
	 if(isxdigit(c))
		 printf("isxdigit true\n");
	 
	 if(isalnum(c))
		 printf("isalnum true\n");
	 
	 if(isalpha(c))
		 printf("isalpha true\n");
	 
	 if(isprint(c))
		 printf("isprint true\n");
	 
	 if(isgraph(c))
		 printf("isgraph true\n");
	 
	 if(isspace(c))
		 printf("isspace true\n");
	 
	 if(isblank(c))
		 printf("isblank true\n");
	 
	 if(iscntrl(c))
		 printf("iscntrl true\n"); 
	 
	 if(ispunct(c))
		 printf("ispunct true\n");
 }