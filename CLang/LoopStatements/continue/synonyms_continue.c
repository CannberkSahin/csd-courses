/**
 * @file synonyms_continue.c
 * @author Canberk Sahin
 * @date 11 Sep 2020
 *
 * */
 
 #include <stdio.h>
 
 /**
 *	Continue deyiminin yurutulmesi ile kod akisi
 *  while dongusunun kontrol ifadesine tekrar 
 *  gelmektedir.
 */
 int main()
 {
	 /**
	 * Asagidaki kodda 0'dan 20'ye kadar olan 
	 * sayilar yazdirilmaktadir ve yanlarina 
     * sirasi ile yildiz, cizgi ve nokta 
     * nokta yazdirilmistir. 3 ve 3'un 
	 * katlarinda yildiz, cizgi ve nokta
	 * ekrana yazdirilmaz.
	 */
	 
	 int i = 0;
	 
	 /**
	 while (i < 20) {
		 printf("%d ", i);
		 ++i;
		 
		 if(i % 3 == 0)
			 continue;
		 
		 printf("*");
		 printf("-");
		 printf(".");
	 }
	 */
	 
	 /**
	 * Yukaridaki continue deyimine es bir deyim asagidaki
	 * gibi yazilabilir.
	 */
	 
	 while (i < 20) {
		 printf("%d", i);
		 ++i;
		 
		 /**
		 * Kosul ifadesinin tersi alinir ve if
		 * deyiminin dogru kismina yildiz, cizgi
		 * ve nokta ifadleri yazilir.
		 */
		 if(i % 3 != 0)
		 {
			printf("*");
			printf("-");
			printf(".");
		 }
	 }
 }