/**
 * @file type_conversion.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 #include <stdio.h>

 
 /**
 * Asagidaki kodda e sayisi hesaplanmaktadir. 
 * Eger kodda bulunan 1 sabiti 1.0 olarak 
 * double türde yazimazsa sonuc hep 2.000000
 * cikmaktadir. Ancak 1 sabiti 1.0 yani double 
 * turunde yazilirsa islem double turune donusturulerek
 * yapilacagindan sonuc 2.78 yani e sayisi cikar.
 */
 
 int factorial(int x)
 {
	return x < 2 ? 1 : x * factorial(x - 1);
 }
 
 int main()
 {
	double sum = 0;
	
	for (int i = 0; i < 13; ++i)
	{
		//sum += 1 / factorial(i); 
		sum += 1. / factorial(i); 
	}
	
	printf("sum = %f\n", sum);
 }