/**
 * @file integers_promotion.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 #include <stdio.h>
 
 /**
 * Asagidaki kodlarda  char turden bir degisken tanimlanarak
 * 165 ilk degeri verilmistir. Sonra c degiskeni if kontrol
 * deyimi ile 165 constant literali ile esit olup olmadigi
 * sinanmistir. Ancak sonuc hayir yanlis esit degil cikmaktadir.
 * Bunun nedeni int alti turler bir isleme sokuldugunda ornegin
 * char turu C dilinde int turune yukseltilir. Buna integral 
 * promotion denilmektedir. Burada char türü derleyiciye bagli
 * olarak signed veya unsigned olarak kullanilir. Gcc derleyicisinde 
 * char turu signed olarak ele alinmaktadir. ch == 135 karşılaştırma 
 * işleminde char türden olan c değişkeni, karşılaştırma işlemi 
 * öncesi signed int türüne yükseltilir. İşlem öncesi tamsayıya 
 * yükseltme sonucu, yüksek anlamı byte'ler 1 bitleriyle beslenir. 
 * Çünkü ch negatif bir değere sahiptir. Karşılaştırma işlemi öncesinde
 * c'nin değeri 1111 1111 1000 0111'dir. Oysa karşılaştırma işlecinin 
 * sağ terimi olan 135 değeri, int türden bir değişmezdir.
 * Yani aslında karşılaştırılan değerler aşağıdaki gibi olur:
 * 1111 1111 1000 0111
 * 0000 0000 1000 0111
 */
 
 int main()
 {
	char c = 165;
		
	if (c == 165)
		printf("evet dogru esit!\n");
	else
		printf("hayir yanlis esit degil!\n");
 }