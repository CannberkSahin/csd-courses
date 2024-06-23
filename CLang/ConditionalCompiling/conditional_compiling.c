/**
 * @file conditional_compiling.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 #include <stdio.h>
 
 /**
 * Conditional Compiling Komutlari
 * #if
 * #endif
 * #else
 * #elif
 * #ifdef
 * #ifndef
 */
 
 /**
 * Kosullu derleme yapmanin nedenlerinden biri donanım 
 * farklılıgıdır. Mesela dosyada bazı kodlar ortak, 
 * bazı kodlar kullanılacak mikrodenetleyicinin ne olduguna
 * bagli olarak degisebilir. Baska bir neden isletim 
 * sistemi farklılıgı olabilir. Ornegin Windows'un kodlari
 * icin bazı kodların calismasi gerekiyor ama linux icin 
 * farklı kodlarin calısması gerekiyor. Derleyiciye bagli
 * farkliliklar olabilir. Mesela gcc icin bazı extension'lari
 * kullanilacak ancak clang derleyicisi ile farklı extension'Lar
 * kullanılacaktır. Veriyon farklılıklarında kullanılmaktadır.
 * Ulke ve dile gore farklı bildirimler olabilir.Birim testi
 * yaparken ve debug versiyonu cikarirken kullanılmaktadır. 
 */
 
 #define  CODE  4
 
 #define  USD   1
 #define  EUR   2
 #define  JPY   3
 #define  GBP   4
 
 #define  CUR   EUR  //CUR -> currency (guncel kur)
 
 int main()
 {
	#if   CODE > 2 //preprocessor expression 
	 
	#include <stddef.h> 
	#define   SIZE  100
	void func(int);
	typedef long Word;
	//kodlar
	//kodlar
	//kodlar
	//kodlar
	
	#else
		
    #define   SIZE  200
	void foo(int);
	typedef int Word;
	//kodlar
	//kodlar
	//kodlar
	//kodlar
	
	#endif 
	
	
	#if  CUR == USD
		char str[] = "dollar";
	#else
		
	#if  CUR == EUR
		char str[] = "euro";
	#else
		
	#if  CUR == JPY
		char str[] = "japan yen";
	#else
		
	#if  CUR == GBP
		char str[] = "pound";
		
		
	#endif
	#endif
	#endif
	#endif
	
	/**
	* Yukaridaki kosullu derleme komutlari else if merdiveni gibi
	* yazilmistir. Bunun icin C dilinde ozel bir komut bulunmaktadir.
	* bu komut #elif'dir. Yukardaki kodlari asagidaki gibi yazabiliriz.
	*/
	
	#if   CUR == USD
		char str[] = "dollar";
	#elif CUR == EUR
		char str[] = "euro";
	#elif CUR == JPY
		char str[] = "japan yen";
	#elif CUR == GBP
		char str[] = "pound";
	#endif
	
	/**
	* Eger bir makro define edilirse bu drumda yer degistirme listesi
	* konulmak zorunda da degildir. Sadece isim yazmak mesela CAN bu 
	* makroyu tamnimli kılar. Kosullu derleme komutlarini bir makronun 
	* tanimli olup olmamasina bagli olarak on islemcinin bir koda 
	* girmesini ya da girmemesi saglanabilir. 
	*/
	#define  CAN
	
	#ifdef   CAN   //ifndef de tam tersidir. ifndef CAN -> CAN tanımli degilse gir.
		typedef int Word;
		typedef unsigned char Byte;
	#endif
	
	/**
	* defined operatoru bir simi operand olarak almaktadir. Eger defined op.'nun 
	* operatoru olan isim tanimli bir makroysa ifade true tanımli degilse false'dur.
	* Birden fazla kosula bagli on islemci kosul ifadeleri olusturulmak istenirse
	* defined op. kullanilir. 
	*/
	
	#define  CAN
	#define  ASP
	
	#if defined  CAN && !defined ASP
		typedef int Word;
	#endif 
	
	#define  BRIDGE
	
	//poker icin bu dizilim gecerli 
	#ifdef BRIDGE
	typedef enum {Club, Diamond, Heart, Spade};
	#else  
	//konsol icin bu dizilim gecerli 
	typedef enum {Club, Diamond, Spade, Heart};
	#endif
	
	/**
	* Eger bir makro kod icinde gecerse ve makronun yer degistime
	* listesinde hic bir sey yoksa on islemci program bu PUBLIC 
	* makrosunu silmek zorundadir. Yani #define  PUBLIC makrosunun
	* yurutulmesi ile fonksiyonun basindaki PUBLIC sozcugu silinir.
	*/
	
	#define  PUBLIC

	PUBLIC void bar(int x)
	{
		printf("%d\n", x);
	}
 }