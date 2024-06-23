/**
 * @file macro_guard.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 #include <stdio.h>
 
 /**
 *  Hem makrolarla ilgili bazı guvenlik problemeleri ile bas
 *  edebilmek icin hem de client kodu yazan programciya hem
 *  makro hemde fonksiyon secenegi sunmak icin bir cok durumda
 *  kutuphaneler aynı isimli hem bir makro olusturur hem de 
 *  fonksiyon olusturmaktadir. Ancak ayni isimli hem makro
 *  hem de fonksiyon aynı c dosyasi icinde olacaksa once 
 *  fonk. tanimi yapilmalidir sonra da makro tanimi yapilmalidir.
 *  Bunun nedeni once makro tanimlanirsa sonra fonk. tanimlanirsa
 *  makrodaki gecen square ismi fonksiyonda gecen isim yerinde 
 *  acilarak sentaks hatasi olur.
 * 
 *   #define   square(t)   ((t) * (t))
 *
 *    int square(int a)
 *    {
 *  	return a * a;
 *    }
 *
 *    int ((t) * (t))(int a) error
 *    {
 *  	return a * a;
 *    }
 * 
 *  Yukaridaki hatadan kurtulabilmek icin fonksiyon taniminda 
 *  fonk. ismi parantez icine alinir.
 *
 *  int (square)(int a)
 *  {
 *     return a * a;
 *  }
 */
 
 int square(int a)
 {
	return a * a;
 }
 
 #define   square(t)   ((t) * (t))
 
 int main()
 {
	/*
	* Asagidaki kodda makro mu kullanılmistir
	* fonksiyon mu kullanilmistir?
	*/
	
	int x = 23;
	int y = square(x);
	
	/**
	* Cevap: makro kullanilmisir. Cunku on islemci programi
	* derlemeden once calismaktadir ve derleme zamaninda ortada
	* bir fonk. ismi bulunmamaktadir. 
	* Burada eger fonksiyon secilmek istenirse su yapilir:
	* square(x); fonksiyonunda () acilan ve kapanan parantezler 
	* fonksiyon cagirma operatorudur. Fon. cagirma op. ile fonk.
	* ismi bir adrese donusturulur. Bu donusturmeye function to
	* pointer conversion denilmektedir. Fonksiyon cagrisi operatorun
	* operandının bir adres olmasi ile yapilmaktadir. Eger fonksiyon
	* cagrisinda fonk. ismini parantez icine alinirsa fonks.
	* cagirma ozelligi bozulmaz. Cunku kullanilan oncelik parantezidir
	* fakat makronun acilabilmesi icin isimden sonra gelen ilk token'ın
	* acilan parantez olamsi gerekir. Asagidaki gibi square ismi 
	* parantez icine alinirsa makro degil fonksiyon cagrilir.
	*
	* int x = 23;
	* int y = (square)(x); -> fonk. cagirilir.
	*/
 }
 
