/**
 * @file macro_usage_enumaration.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 #include <stdio.h>
 #include <locale.h>
 #include <stdlib.h> 
 
 /**
 * C dilinde sembolik sabitler makrolarla numaralandirma
 * amacli kullanılmaktadir. Burada numaralandirma enumaration
 * anlamindadir. Problem domainindeki veriler sınırlı bir 
 * küme içerisinden seçilmek zorundadir. Ornegin haftanin
 * gunleri, kart oyununda suit rnegi karo kupa sinek maca gibi.
 * Bu gibi durumlarda en cok kullanilan teknik bu degeeleri
 * tam sayilarla eslemektir. Ornegin 0 sabiti sinek olsun,
 * 1 karo olsun, 2 kupa olsun ve 3 maca olsun gibi. Buna 
 * numaralandirma denilmektedir. Yani değerleri tam sayilara map
 * etmek, tam sayilarla eslemek. 
 */
 
 #define  PAZARTESI  1
 #define  SALI		 2
 #define  CARSAMBA	 3
 #define  PERSEMBE	 4
 #define  CUMA		 5
 #define  CUMARTESI  6
 #define  PAZAR	  	 7
 
 int main()
 {
	/**
	* fseek fonksiyonu dosya konum göstericisini konumlandiran fonksiyondur.
	* Fonksiyonun 3. parametre degiskeninin turu int'dir fakat buraya gecilecek 
	* olan deger ya 0 ya 1 ya da 2'dir. 0 gecilince konumlandirma dosyanin
	* basindan itibaren, 1 gecilince dosya konum göstericisinin aktüel degerinden
	* itibaren, 2 gecilince dosya konum göstericisi dosyanın sonunu orjin olarak
	* alip konumlandirma yapmaktadir. Ancak buraya degerleri sayi alarak 
	* gecersek kodu okumak daha zor olacaktir. Bundan dolayi stdio.h dosyasi
	* icinde makrolar tamimlanmistir.
	*/ 
	
	//SEEK_SET -> dosyanın basından konumlandirma yapar (0)
	
	//fseek(..., ..., SEEK_SET);
	
	setlocale(LC_MONETARY, "turkish"); //LC_MONETARY => 3
	
	//exit(EXIT_FAILURE); //EXIT_FAILURE => 1 
	
	int day;
	
	printf("Gun sayisini giriniz: ");
	scanf("%d", &day);
	
	switch (day)
	{
		case PAZARTESI:
			printf("Pazetesi\n");
			break;
			
		case SALI:
			printf("Sali\n");
			break;
			
		case CARSAMBA:
			printf("Carsamba\n");
			break;
			
		case PERSEMBE:
			printf("Persembe\n");
			break;
				
		case CUMA:
			printf("Cuma\n");
			break;
				
	    case CUMARTESI:
			printf("Cumartesi\n");
			break;
			
		case PAZAR:
			printf("Pazar\n");
			break;
			
		default:
			printf("yanlis deger girdiniz...\n");
			break;
	}
 }