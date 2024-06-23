/**
 * @file infinite_lloop_do_wihle.c
 * @author Canberk Sahin
 * @date 11 Sep 2020
 *
 * */
 
 #include <stdio.h>
 
 /**
 *	C dilinde do-while dongu deyimi aslinda 
 *  while ile olusturulmus sonsuz bir dongu
 *  icerisinde kosul ifadesinin sonsuz dongunun
 *  son kisiminda yapilmasi ile es degerdir.
 *
 *  while (1) {
 *	 statement;
 *	 statement;
 *	 statement;
 *	 statement;
 *	 statement;
 *	 if(!expr)
 *		 break;
 *  }
 *
 *  Eger sonsuz dongu icinde kosul ifadesi
 *  basta sinanirsa bu durumda da while
 *  dongu deyimini elde etmis oluruz.
 *
 *   while (1) {
 *	 if(!expr)
 *		 break;
 *	 statement;
 *	 statement;
 *	 statement;
 *	 statement;
 *	 statement;
 *  }
 */
 int main()
 {
	 int i = 0;
	 
	 while (1) {
		 printf("%d ", i);
		 ++i;
		 
		 if(10 == i)
			 break;
	 }
 }