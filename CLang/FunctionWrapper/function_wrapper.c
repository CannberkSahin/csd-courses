/**
 * @file function_wrapper.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 #include <stdio.h>
 #include <stdlib.h>
 #include "cutility.h"
 
 /**
 * Wrapper turkcede sarmalayici demektir.Bir sarmalayıcı işlevi, 
 * bir yazılım kütüpanesindeki veya bir bilgisayar programında bulunan 
 * ve asıl amacı çok az veya hiç ek hesaplama gerektirmeden ikinci bir
 *  alt programı veya bir sistem çağrısını çağırmak olan bir işlevdir
 */
 
 int main()
 {
	int n;
	printf("bir sayi giriniz: ");
	scanf("%d", &n);
	
	/**
	* Asagidaki kodu surekli yazarak kod tekrari yapmak yerine 
	* standart malloc fonksiyonuna bir wrapper yazılarak sarmalayici
	* fonksiyon cagrilir.
	*
	* int *pd = malloc(n * sizeof(int));
	*
	*if (pd == NULL){
	*	fprintf(stderr, "bellek yetersiz!\n");
	*	exit(EXIT_FAILURE);
	*}
	*/
	
	int *pd = (int *)checked_malloc(n * sizeof(int));
 }
 
