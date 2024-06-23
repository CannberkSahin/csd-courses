 /**
 * @file Variable.java
 * @author Canberk Sahin
 * @date 13 Sep 2020
 * @package cnb
 * @class Variable
 * */
 
 /**
 * @verbatim 	
 *	Java'da 3(üç) çeşit değişken vardır:
 *	1. Yerel değişkenler (local variables)
 *	2. Parametre değişkenleri (parameter variables)
 *	3. Sınıf veri elemanları (class member variables)
 *	
 *	Değişkenler için temel kavramlar:
 *	İsmi: Belli kurallara göre yazılan karakterler topluluğu
 *	
 *	Türü: Değişken için bellekte ne kadar yer ayrılacağı 
 *  (değişkenin ne kadar kaplayacağı)ve içerisindeki değerin
 *	hangi formatta tutulduğudur.
 *	
 *	Faaliyet alanı (scope): Bir değişken isminin derleyici 
 *  tarafından görülebildiği kod aralığıdır. Derleme zamanına
 *	ilişkindir.
 *	
 *	Ömür (storage duration): Bir değişkenin bellekte kalma 
 *  süresidir. Çalışma zamanına ilişkin bir bilgidir.
 *	
 *	Temel kavramlar:
 *	Blok (block): Bir metot içerisinde { ile } arasında kalan 
 *  kod bölümüdür. Metodun gövdesi de bir blok gibi düşünülebilir
 *	
 *	İlkdeğer verme (initialization): Bir değişkene bildirim 
 *  noktasında verilen değere denir.
 * @endverbatim
 **/
 
 /**
 * @verbatim 
 *	<tür> <değişken ismi>;
 *
 *	int a;
 *	double b;
 *	boolean c;
 * @endverbatim
 **/
 
 package cnb;
 
 /**
 * Degisken: Tanimlanan bir isim icin bellekte belirli bir yer
 * ayrilan ve tutulacak degerin bu ayrilan bellekte hangi formatta
 * tutulacaginin belirlenmesine denir. Yani bir degisken define 
 * edilirse bu degisken icin bellekte yer ayrilir ve bu sayinin
 * bellekte 2'lik sayi sisteminde nasil tutulacagi belirlenir. 
 */
 
 class Variable {
	 
	 public static void main(String [] Args)
	 {
		/**
		* Aynı türden yerel değişkenler aralarına virgül k
		* konarak bildirilebilirler
		*/ 
		int b, c, d;
		double x, y, z;
		 
		/**
		* Yerel değişkenlere ilk değer verilmesine
		* initialization denilmektedir.
		*/
		int ival = 10;
		double pi = 3.14;
		
		/**
		* Yerel bir değişkenin faaliyet alanı bildirildiği 
		* yerden bildirildiği bloğun sonuna kadardır
		*/
		{
			int var;
			//...
			
			{
				var = 30;
			}
		}
		
		var = 10; //error
		
		/**
		* Aynı faaliyet alanı içerisinde aynı isimde yerel 
		* değişken bildirimi yapılamaz
		*/
		int locale;
		
		double locale; //error
		
		/**
		* print ve println metotları değişkenlerin içerisindeki 
		* değerleri ekrana basarlar
		*/
		int a = 10;
		char c = 67;
		double pi = 3.14;		
		
		System.out.println(a);
		System.out.println(c);
		System.out.println(pi);
		
		/**
		* Java'da içerisine değer verilmemiş bir değişken kullanılamaz 
		* yani içerisinde değer varmış gibi işleme sokulamaz.
	    * Yerel değişkenlere değer verme programcının sorumluğundadır.
		*/
		
		int num;
		int multip;
		
		multip = num * 2; //error
		
		System.out.println(num); //error
		
		/**
		* Değişken isimleri sayısal bir karakter başlatılamaz
		*/
		int 1number; //error
		
		/**
		* Değişken isimleri herhangi bir uygun karakter ile başlatılıp 
		* istenildiği kadar sayısal karakter içerebilir
		*/
		int a12345;
		
		a12345 = 10;
		
		System.out.println(a12345);
		
		/**
		* Değişken isimlendirmede UNICODE alfabetik karakterler kullanılabilir. 
		* Örneğin Türkçe karakterler kullanılabilir
		*/
		int öğrencisayısı;
		
		öğrencisayısı = 10;
		
		System.out.println(öğrencisayısı);
		
		/**
		* Değişken isimlerinde boşluk (whitespace) karakterler kullanılamaz
		*/
		int number of students; //error
		
		/**
		* Değişken isimleri büyük-küçük harf duyarlıdır (case sensitive)
		*/
		int val, Val, VaL, VAL, vaL;
		
		/**
		* Değişken isimlerinde _ (alttire, underscore) karakteri kullanılabilir. 
		* Hatta değişken ismi alttire ile başlatılabilir
		*/
		int _123 = 10;
		int _val = 23;
		int number_of_students = 20;
		
		System.out.println(_123);
		System.out.println(_val);
		System.out.println(number_of_students);
		
		/**
		* Java 9 ile birlikte alttire karakterinin tek başında değişken ismi 
		* olarak kullanılması geçersizdir. Bu durum Java 8 ile birlikte 
		* "deprecated" olmuştur
		*/
		int _ = 10; //error
		
		System.out.println(_); //error
		
		/**
		* Java'da değişken isimlendirmede $ karakteri kullanılabilir. 
		* Hatta isimler $ karakteri ile başlatılabilir. $ karakteri
	    * tek başına değişken ismi olabilir. Ancak programcı açısından değişken
		* isimlendirmede $ karakteri kullanılmamalıdır. Çünkü derleyici ve bazı 
		* kod üreten araçlar isimlendirmede $ karakterini kullanırlar. $ karakteri 
		* bu anlamda programcının isimlendirmesi ile derleyicinin ürettiği kodlardaki 
		* isimlerin ayrışması ve dolayısıyla isim çakışması olmaması için vardır 
		*/
		int amountOf$s = 10; //error
		int $ = 20;
		double $1234 = 20;
		
		System.out.println(amountOf$s);
		System.out.println($);
		System.out.println($1234);
		
		/**
		* Anahtar sözcükler tek başına değişken ismi olarak kullanılamaz. 
		* Ancak Java'ya daha sonra eklenmiş yerine göre anahtar sözcük biçiminde 
		* kullanılan bazı atomlar vardır. Bu tarz eklenen isimler tam anlamıyla 
		* anahtar sözcük değildir. Kullanıldığı yere göre değişken ismi olup 
		* olmadığı derleyici tarafından tespit edilir Bu tip sözcüklere programlamada
	    * "bağlamsal anahtar sözcükler (contextual keywords)" denir
		*/
		var x = 10;  //hem degisken ismi olarak kullanilir hem de anahtar sozcuk olarak kullanilir.
		int var = 20;
		int class; //error
		int static; //error
		int int; //error
	 }
 }