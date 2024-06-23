/**
 * @file preprocessor_operators.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 #include <stdio.h>
 
 /**
 * C ve Cpp dillerinde, eger birden fazla string literali arasinda
 * whitespace (bosluk karakteri) dısında baska karakter olmazsa 
 * derleyici string literallerini otomatik olarak birlestirir. 
 * 
 */
 
 //#define  iprint(a)    printf("%d\n", a);
 #define  iprint(a)    printf(#a "%d\n", a);
 
 int main()
 {
	 /*printf(
		"osman"
		"mert"
		"can"
		"busra"); */
	printf("osmanmertcanbusra"); //derleyici yukaridaki kodu birlestirir.
	
	int x = 10, y = 20, z = 35;
	
	printf("%d\n", x);
	printf("%d\n", x + y + z);
	printf("%d\n", x * x + y * y + z * z);
	
	/**
	* Yukaridaki printf cagrilarinda yazma zahmetini azaltmak icin
	* iprint makrosunu yazabiliriz. 
	*/
	
	//iprint(x);
	//iprint(x + y);
	//iprint(x * x + y * y + z * z);
	
	/**
	* Ancak # preprocessor operatoru ile oyle bir makro yazabiliriz ki
	* makrolar acildigi zaman yapılan fonksiyon cagrisi ekrana once ifadenin
	* kendisini sonra esittir sonrada ifadenin degerini yazdirsin. Ornek:
	* x = 10;
	* x + y + z = 65;
	* x * x + y * y + z * z = 1725
	*/
	
	iprint(x);
	iprint(x + y);
	iprint(x * x + y * y + z * z);
 }