/**
 * @file function_like_makro.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 #include <stdio.h>
 
 /**
 * Asagidaki kodlarda square isimli bir makro tanimlanmistir.
 * Bu makro client tarafindan kullanılırken tıpkı bir fonksiyon
 * cagriliyormus gibi gozukmektedir ancak fonksiyon cagrisi ile 
 * hic bir iliskisi yoktur. Bir function like makro tanımlamak icin
 * #define önislemci komutu basa yazılarak sonrasında bir isim 
 * yazilir isimden hemen sonra bosluk bırakmadan () acilan kapanan
 * kume parantezi yazilir ve icine yer degistirilmesi istenen ifade
 * yazilir. Parantez icerisinde makro argumanlari ismi verilen 
 * ifadeler yer alir. On islemcide tur bilgisi kullanilmaz. 
 * Parantez'den sonra yazilan bolume replacement list yani 
 * yer degistirme listesi denilir. 
 */
 
 #define   square(x)	((x) * (x))
 
 int main()
 {
	int a;
	
	printf("Bir sayi girin: ");
	scanf("%d", &a);
	
	int x = square(a);
	//int x = ((a) * (a));
	
	printf("Girilen sayinin karesi: %d\n", x);
	
	/**
	* Function like makrolar yazilirken yer degistirme listesindeki ifadeler
	* bireysel olarak parantez icine alinmalidir. Bunun nedeni makrolar'a gecilen
	* argumanlar fonksiyonlardaki gibi once hesaplanip sonra isleme sokulmaz. 
	* Makralar direkt olarak yazilan ifadeye acilirlar.
	*
	* Eger makro asagidaki gibi yazilsaydi:
	* #define  square(x)   x * x
	* 
	* Client kod makroyu asagidaki gibi cagirsaydi:
	* int x = square(a + 1);
	* 
	* Bu durumda makro soyle acilirdi:
	* int x = a + 1 * a + 1; kullani klavyeden 5 degerini girerse 
	* sonuc 25 olması gerkirken 11 olur. 
	*/
	
	/**
	* Ancak makro yerdegistirme ifadesindeki bireysel parantezlerde
	* her zmamn dogru calismayabilir. Bundan dolayı ifadeler birde genel
	* olarak en distanda parantez icine alinmasi gerekir. 
	* 
	* Eger makro asagidaki gibi yazilsaydi:
	* #define  square(x)   (x) * (x)
	*
	* int x = 5;
	* int y = 100 / square(x);
	*
	* printf("%d\n", y);
	*
	* Eger kullanici klavyeden 5 degeri girerse, square makro degilde 
    * bir fonksiyon olsaydi y degeri 100 / 25 = 4 olurdu, ancak makro 
	* direkt acildigi icin ve carpma bolme islemleri onceligi soldan 
	* saga dogru oldugu icin y = 100 / (x) * (x) islemi yailacak ve
    * 100 once 5'e bolunecek 4 olacak sonra yine 5 ile carpilarak 100
	* olacaktır. Bundan dolayi makro #define   square(x)	((x) * (x))
	* olacak sekilde disaridan bir daha paranteze alinmalidir. 
	*/

 }