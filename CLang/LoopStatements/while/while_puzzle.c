/**
 * @file while_puzzle.c
 * @author Canberk Sahin
 * @date 11 Sep 2020
 *
 * */
 
 #include <stdio.h>
 
 /**
 *	Asagidaki kodun ekran ciktisi nedir?
 */
 int main()
 {
	 int i = 0;
	 
	 while(i++ < 5);
		printf("%d ", i);

	/**
	* Ekranda sadece 6 yazar. While parantezinden sonra virgul
	* kullanilmistir. While parantezinin ici sequence point
	* olusturdugu icin yanlis olan kosul sorgulandiktan sonra
	* i degiskeni 6 olur. Aslinda kod asagidaki ile esdegerdir:
	*
	* 	 while(i++ < 5)
	*	     ;
    *
	*	 printf("%d ", i);
	*/		
 }