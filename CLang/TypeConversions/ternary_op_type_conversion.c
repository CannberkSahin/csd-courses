/**
 * @file ternary_op_type_conversion.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 #include <stdio.h>
 
 /**
 * Asagidaki kodlar derlenip calistrildiginda ekrana 
 * ne yazar? Kosul op. tur donusturme kurallarina tabiidir.
 * Kosul op.'nun ikinci ve ucuncu operandalari arasinda 
 * tıpkı toplamadaki gibi otomatik tur donusumu söz konusudur.
 * (x > 5 ? y : dval) bu ifadenin turu double'dır. Kosul
 * dogru da olsa yanlis da olsa ifadenin turu double'dır. 
 * Budnan dolayi sonuc 4.500000 cikar. Yani x > 5 dogruysa
 * int yanlissa double seklinde bir durum söz konusu degildir.
 * Kosul operatorunun ikinci ve ucuncu op. arasinda otomatik
 * tur donusumu yapilmakatdir. Yani her hangi bir operand double
 * digeri int ise ifade double turdendir.
 */
 
 int main()
 {
	int x = 10;
	int y = 9;
	double dval = 1.2;
	
	double dx = (x > 5 ? y : dval) / 2;
	
	printf("dx = %f\n", dx); 
 }