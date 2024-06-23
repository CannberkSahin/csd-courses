/**
 * @file wile_loop_idiom.c
 * @author Canberk Sahin
 * @date 11 Sep 2020
 *
 * */
 
 #include <stdio.h>
 
 /**
 *	While dongusu ile n kez donen dongusu
 *  isiyomu.
 */
 int main()
 {
	 int n;
	 printf("Kac kez donsun: ");
	 scanf("%d", &n);
	 
	 while(n-- > 0){
		 printf("merhaba!\n");
	 }
	 
	 /**
	 * Not: asil n kez donen dongu idiyomu yukaridaki gibi 
	 * degildir.Programilar yukardaki kod yerine asagidaki 
	 * gibi bir kod yazarlar. 
	 *
	 * while(n--){
	 *	 printf("merhaba!\n");
	 * }
	 */
	 
	 /**
	 * Programcilara asagidaki gibi bir kod yazilarak 
	 * --> uzun ok operatoru'nun olup olmadigini sorgularlar.
	 * 
	 * while(n --> 0){
	 *	 printf("merhaba!\n");
	 * }
	 *
	 * C dilinde boyle bir operator yoktur. Yukaridaki
	 * kodlarda n-- n degerini bir azaltırken 0'dan buyukse
	 * anlmainda > 0 kodu yazilir. Burada maximum munch 
	 * kurali ile derleyici bu kodu n-- > 0 olarak 
	 * algilar. 
	 */
 }