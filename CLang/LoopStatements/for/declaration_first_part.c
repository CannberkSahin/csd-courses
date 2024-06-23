	/**
	 * @file declaration_first_part.c
	 * @author Canberk Sahin
	 * @date 11 Sep 2020
	 *
	 **/
	 
	 #include <stdio.h>
	 
	 int main()
	 {
		 /**
		 * C89 standartlarına gore C dilinde for 
		 * dongusunun ilk kısminda dongu degiskeninin
		 * bildirimi yapilamamaktadir.
		 */
		 
		 //C89'a gore bildirim for'un dısında yapilmalidir.
		 int i;
		 
		 for(i = 1; i < 10; ++i)
			 printf("%d\n", i);
		 
		//C99 standartlarında bildirim for'un icinde de yapilabilmektedir.
		for(int k = 1; k < 10; ++k)
			 printf("%d\n", k);	
	 }