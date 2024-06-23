/**
 * @file define_prep_string.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 #include <stdio.h>
 
 /**
 * Bir makro olusturulurken makro ismi ile bir 
 * string literali yer degistirebilir. 
 */
 
 #define  ERROR_MSG   "bellek yetersiz program sonlandiriliyor"
 
 int main()
 {
	 //...
	 printf(ERROR_MSG);
	 /**
	 * yukaridaki kodun karsiligi:
     * printf("bellek yetersiz program sonlandiriliyor");
	 */
 }