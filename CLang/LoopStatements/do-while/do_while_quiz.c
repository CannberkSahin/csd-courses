/**
 * @file do_while_quiz.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 #include <stdio.h>
 
 /**
 * Asagidaki kod calistirilirsa ekranda ne 
 * yazar? 
 */
 
 int main()
 {
	 int i = 1;
	 
	 do {
		 printf("%d\n", i);
		 ++i;
		 if(i < 10)
			continue;		 
	 }while (0);
 }
 
 /**
 * Cevap: Ekranda sadece 1 yazar. Do-while dongusunde
 * continue programin akisini while sorgusuna yonlendirir.
 * i'ye 1 ile ilk deger verilir. Sonra kod do bolumune
 * girer ekrana 1 yazar i'nin degeri 1 artarak 2 olur.
 * Sonra kod akisi if sorgusuna gelir i < 10 oldugu icin
 * programin akisi while(0) sorgusuna gelir ve program 
 * mantiksal yanlis oldugu icin donguden cikar.
 */