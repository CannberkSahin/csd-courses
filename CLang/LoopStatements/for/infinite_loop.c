/**
 * @file infinite_loop.c
 * @author Canberk Sahin
 * @date 11 Sep 2020
 *
 **/
 
 #include <stdio.h>
 
 int main()
 {
	 /**
	 * C dilinde for dongusu ile sonsuz bir 
	 * dongu olusturabilinir. Eger sonsuz
	 * dongu olusturulupta dongunun basinda
	 * bir kosul sorgulanirsa dongu while 
	 * dongusune esdeger bir dongu olmaktadir.
	 */
	 int i = 0;
	 
	 for(;;)
	 {
		 if (10 == i)
			 break;
		 
		 printf("%d ", i);
		 ++i;
	 }
 }