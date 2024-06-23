/**
 * @file FloatingPointLiterals.java
 * @author Canberk Sahin
 * @date 13 Sep 2020
 * @package cnb
 * @class 
 * */
 
 package cnb;
 
 class FloatingPointLiterals {

	public static void main(String [] args) 
	{
		/**
		* Gerçek sayı sabitlerinin üstel (bilimsel) gösterilişinin
	    * bir kullanımı.
		*/
		double a = 1.3E10;
		double b = 1.3e10;
		double c = 1.3E-10;
		double d = 1.3e-10;
		
		
		System.out.printf("a = %f%n", a);
		System.out.printf("b = %f%n", b);
		System.out.printf("c = %.12f%n", c);
		System.out.printf("d = %.12f%n", d);
		
		/**
		* Gercek sayi sabitlerinin bilimsel olarak yazilmasinin amaci
		* sayilarin daha kolay yazilip okunmasidir yani daha kolay
		* anlasilmasi icindir.
		*/
		double avogadro = 6.02E23;
		System.out.printf("%f%n", avogadro);
		
		/**
		* Java 7 ile birlikte tamsayı ve gerçek sayı sabitleri içerisinde 
		* alttire karakteri kullanılabilmektedir.
		*/
		int val = 0xFC_AB_fC;
		
		System.out.printf("val = %d%n", val);
		System.out.printf("val = %X%n", val);
		
		long lval = 5_000_000_000L;
		
		System.out.printf("lval = %d%n", lval);
		System.out.printf("lval = %X%n", lval);
		
		/**
		* Alttire karakteri kullanılabildiği yerde istenildiği kadar 
		* yazılabilir.
		*/
		int x = 1___________________________________0;
		
		System.out.printf("x = %d%n", x);
		System.out.printf("x = %X%n", x);
		
		/**
		* Bazi hex sayilarda bir byle ile gosterilen basamaklar icin
		* tek alttire iki byte ile gosterilen basamaklar icin iki alttire
		* konulmaktadir.
		*/
		long y = 0b00011000_10000011__00001010_00001010L;
		
		System.out.printf("y = %d%n", y);
		System.out.printf("y = %X%n", y);
		
		/**
		* Alttire karakteri sabitin başında ya da sonunda geçersizdir.
		*/
		int k = _67; //error
		int m = 67_; //error
		
		/**
		* Alttire karakteri sayı nokta içeriyorsa noktadan hemen önce 
		* ya da hemen sonra geçersizdir. 
		*/
		double g = 3_.14; //error
		double h = 4._5; //error 
		
		/**
		* Alttire karakteri sabit sonundaki eklerden önce ya da sonra 
		* kullanılamaz. 
		*/
		long t = 5000000000L_; //error
		long r = 5000000000_L; //error
		
		/**
		* Alttire karakteri sabit önündeki eklerden önce, sonra ya da 
		* ekler arasında geçersiz.
		*/
		int i = 0x_AB; //error
		int u = _0xAB; //error
		int o = 0_xAB; //error
		
		/**
		* Alttire kullanımı octal sabitler için önek ile (sıfır ile) 
		* ilk basamak arasında geçerlidir. 
		*/
		int p = 0_12;
		
		System.out.printf("p = %d%n", p);
		
		/**
		* Yukarıdaki alttire kullanımına ilişkin detaylar için, alttire 
		* özet olarak basamaklar arasında kullanılabilir. Kullanıldığı
        * her yerde istenildiği sayıda kullanılabilir. Şüphesiz kullanımı 
		* okunabilirliği/algılabilirliği artırmak için tercih edilmelidir. 
		* Çok sayıda ya da anlamsız kullanımı aksine okunabilirliği/
		* algilanbilirliği olumsuz yönde etkileyebilir.
		*/
	    p = 50_000_00; //dogru ama kullanimi anlamsiz.
		
		System.out.printf("p = %d%n", p);
		/**
		* Gerçek sayı sabitlerinin tamsayı kısmının değeri sıfır ise 
		* noktadan önce sıfır yazılmayabilir. Benzer şekilde sayının noktadan 
		* sonraki kısmının tamamı sıfır ise yine sıfır noktadan sonra 
		* yazılmayabilir.
		*/
	    a = .25;
		b = 3.;
		
		System.out.printf("a = %f%n", a);				
		System.out.printf("b = %f%n", b);
		
		/**
		* Gerçek sayı sabitlerinin tamsayı kısmının değeri sıfır ise noktadan 
		* önce sıfır yazılmayabilir. Benzer şekilde sayının noktadan sonraki 
		* kısmının tamamı sıfır ise yine sıfır noktadan sonra yazılmayabilir.
		*/
		a = .25;
		b = .0;
		
		System.out.printf("a = %f%n", a);				
		System.out.printf("b = %f%n", b);
	}
 }
 