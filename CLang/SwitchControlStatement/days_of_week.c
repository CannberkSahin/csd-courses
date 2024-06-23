/**
 * @file days_of_week.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 #include <stdio.h>
 
 /**
 * Asagidaki kodlarda switch case kontrol ifadesinin sentaksini gostermek
 * icin kullanicidan alinan degere gore haftanin gununu ekrana yazdiran 
 * kodlar bulunmaktadir. 
 */
 
 int main()
 {
	int n;
	
	printf("haftanin kacinci gunu :");
	scanf("%d", &n);
	
	/**
	* programcilar tipik olarak case label'lari kucukten buyuge yazma egilimindedir.
	* ancak boyle bir mecburiyet bulunmamaktadir. Ayrica ardisik olma mecburiyeti de 
	* yoktur. switch anahtar sozcugunun parantezleri icine sadece tam sayi türünden 
	* bir sayi yada degisken gelmelidir. Eger switch anahtar sozcugunun icine double
	* turden bir sayi veya degisken yazilirsa sentaks hatasi olur. Ayrica case label'
	* larinin da onundeki sayilar tam sayi olmalidir hatta constant expression olmalidir.
	* Yani case label'lari ile degiskenler kullanilamaz. Case expresion'larindan sonra
	* break deyimi kullanilmadigi icin n degerine gore kodlar run time'da etiketin oldugu
	* yerden switch deyiminin sonuna kadar yurutulecektir. Ornegin n = 3 girilirse 
	* carsambadan pazar gunune kadar tum gunler ekrana yazdirilir.
	*/
	switch (n) {
		case 1: printf("pazartesi\n"); 
		case 2: printf("sali\n");
		case 3: printf("carsamba\n");
		case 4: printf("persembe\n");
		case 5: printf("cuma\n");
		case 6: printf("cumartesi\n");
		case 7: printf("pazar\n");
	}
	
	printf("switch deyimi yurutuldu\n");
	
	/**
	* Eger sadece girilen n degerindeki gunu yazdirmak istersek break deyimi kullanilmasi
	* gerekmektedir. 
	*/
	
	switch (n) {
		case 1: printf("pazartesi\n"); break;
		case 2: printf("sali\n"); break;
		case 3: printf("carsamba\n"); break;
		case 4: printf("persembe\n"); break;
		case 5: printf("cuma\n"); break;
		case 6: printf("cumartesi\n"); break;
		case 7: printf("pazar\n"); break;
	}
	
	printf("switch deyimi yurutuldu\n");
	
	/**
	* Eger n degeri 1 - 7 arasindaki sayilar girildiginde ekrana gunlerin 
	* yazilmasi isteniyorsa ve aynı zamanda n'e 1 - 7 arasindan farkli bir deger
	* girilirse girilen gun sayisi yanlistir yazdirmak icin default anahtar
	* sozcugu yazilmalidir. 
	*/
	
	switch (n) {
		case 1: printf("pazartesi\n"); break;
		case 2: printf("sali\n"); break;
		case 3: printf("carsamba\n"); break;
		case 4: printf("persembe\n"); break;
		case 5: printf("cuma\n"); break;
		case 6: printf("cumartesi\n"); break;
		case 7: printf("pazar\n"); break;
		default: printf("Yanlis gun saiyisi girilmistir!\n"); break;
	}
	
	printf("switch deyimi yurutuldu\n");
	
	/**
	* C dilinde case etiketinden sonra en az bir tane statement olmak zorundadır.
	* Aksi halde sentaks hatasi olusur.
	*/
	
	int  a = 5;
	
	switch () {
		case 1: 
		case 4: printf("canberk\n"); //eger bu ifade olmasaydi sentaks hatasi olurdu. 
		case 2: ; //sadece null statement olursa da sentaks hatasi olmaz. 
		case 3;
	}
 }
 
