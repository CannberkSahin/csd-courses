/**
 * @file define_preprocessor.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 #include <stdio.h>
 
 /**
 * define onislemci direktifi ile makrolar tanimlanmaktadir.
 * #define komutundan sonra bir isim verilir daha sonra o ismin
 * yerine gecmesi istenilen ifade yazilir. İsim yazildiktan 
 * sonra ilk bosluk karekterinden sonra yazilan ifadeye 
 * "replacement list" denilmektedir. 
 */
 
 /**
 * Asagidaki makro ile ön islemci programa soyle bir talimat 
 * verilmis olmaktadir: ön islemci bu komutun bulundugu yerden
 * dosyanin sonuna kadar SIZE ismini gordugun her yere ismi 
 * silip 500 degerini yapistir.Bu isleme find-replace denilmektedir.
 */
 
 SIZE  //burada yer degistirme yapilamaz. Cunku tanimdan daha yukarida.
 
 #define  SIZE  500
 
 int main()
 {
	 int arr[SIZE];
	 /**
	 * Yukarida arr isimli dizi 500 elemanli olarak tanimlanmistir.
	 * int arr[500];
	 */ 
	 
	 /**
	 * SIZE makrosunun bir token formunda bulunmasi gerekir.Eger
	 * sadece SIZE degilde baska bir ismin icinde SIZE olarak geciyorsa
	 * yer degistirme islemi yapilamaz.
	 */
	 
	 int max = MAX_SIZE; //burada degistirme yapilamaz.
	 
	 /**
	 * String literali icinde gecen ifade makro ismi degildir.
	 * Asagidaki kodda yer degistirme islemi yapilmaz. 
	 */
	 printf("SIZE"); 
	 
	 /**
	 * Makro ismi tanimlanirken buyuk-kucuk harf duyarliligi
	 * bulunmaktadir. Ornegin SIZE makrosu kucuk isim olan size
	 * ile yer degistirilmez. 
	 */
	 
	 int size = 0; // burada yer degistirme yapilamaz.
	 
	 /**
	 * Eger yukaridaki makro  #define  SIZE  500 + 100 olarak tanimlanirsa
	 * SIZE ismi yerine 500 + 100 yapistirilir. Yani islem yapilip 600
	 * degeri yapistirilmaz.
	 */
	 
	 #define  SIZE 500 + 100
	 
	 int x = 3 * SIZE; //Burada islem 3 * 500 + 100 olur. x = 1600
	 printf("%d\n", x);
	 
	 /**
	 * Eger yukaridaki makro  #define  SIZE  (500 + 100) olarak tanimlanirsa
	 * parantez de yer degistirmenin bir parcasi olur. Dolayisiyla SIZE yerine
	 * (500 + 100) yapistirilir. Bu durumda parantez icindeki deger hesaplanir.
	 */
	 
	#define  SIZE (500 + 100)
	 
	 int y = 3 * SIZE; //Burada islem 3 * (500 + 100) olur. y = 1800
	 
	 /**
	 * Onislemci define komutunda koutun sonunda noktali virgul ; bulunmasi
	 * gibi bir sentaks kurali yoktur. Konula da bilir konulmayada bilir.
	 * Eger #define SIZE 500; gibi bir makro tanimlanirsa SIZE yerine 
	 * 500; yapistirilir. Bu da hataya neden olabilir. Ancak kullanım durumuna
	 * gore harta olmaya dabilir. Yani istenilerek konulmus olabilir. 
	 */
	 
	 #define SIZE  500;
	 
	 int z;
	 
	 z = SIZE; //Burada hata olusmaz. x = 500;; olur. En sondaki ; null statement'dir.
	 
	 int k = 10, m = 20;
	 
	 if (k == SIZE) //Burada hata olur. k == 500; olur. if deyiminde kullanilan ; sentak hatasidir.
		 ++y;
		 
	 /**
	 * Makro olusturulurken #define komutundan sonra isim gelmelidir. İki sayi 
	 * arasinda yer degistirme yapilmaz.
	 */ 
	 
	 #define  100  500  //Bu kod sentaks hatasidir. 100 degeri 500 ile yer degistirmez.
	 
	 #define  A100 500  //Sentaks hatasi yok. Cunku A100 isimlendirme kurallarini cignemez.
 }