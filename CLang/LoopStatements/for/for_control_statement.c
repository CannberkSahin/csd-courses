/**
 * @file for_control_statement.c
 * @author Canberk Sahin
 * @date 11 Sep 2020
 *
 **/
 
 #include <stdio.h>
 
 /**
 * For kontrol deyiminin amacı genel olarak 
 * dongu olusturmaktir. Ancak for deyimi kullanilirken
 * asagidaki gibi bir kullanim soz konusu olabilir:
 *
 *  int f1(void);
 *  int f2(void);
 *  int f3(void);
 *  int f4(void);
 *  
 *  int main()
 *  {
 *	   for(f1(); f2(); f3())
 *		   f4();
 *  }
 *
 *  Yukaridaki kodda for'un ilk deyimi olan f1 fonk.
 *  bir kez cagirilip daha sonra cagirilmayacaktir.
 *  daha sonra f2'nin geri donus degeri lojik true ise
 *  deyimin govdesindeki f4 fonk. cagirilacaktir.
 *  daha sonra f3 fonksiyonu cagrilarak f2 tekrar 
 *  sinanacaktir. f2'nin geri donus degeri yanlis 
 *  olana kadar dongu tekrar etmektedir. 
 */
 
 int main()
 {
	int i;
	
	// Asagidaki kod 0 - 9 sayilarini ekrana yazdirir.
	for(i = 0; i < 10; ++i)
		printf("%d ", i);
	
	printf("\n");
	
	/**
	* Yukaridaki kodun esdegeri asagidaki gibi yazilabilir:
	* 
	*   int i;
	* 
	*   i = 0;
	* 
	*  	for(; i < 10;)
	*   {
	*	   printf("%d ", i);
	*      ++i;
	*   }
	*/
 }
 