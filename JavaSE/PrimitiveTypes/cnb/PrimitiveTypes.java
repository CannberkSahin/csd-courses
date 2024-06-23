/**
 * @file primitiveType.java
 * @author Canberk Sahin
 * @date 13 Sep 2020
 * @package cnb
 * @class 
 * */
  
 /**
 * @verbatim 	
 *   Tür (type): Bir değişken için bellekte ne kadar yer ayrılacağını
 *   ve içerisindeki değerin hangi formatta tutulacağını 
 *   belirten kavramdır.
 *  
 *  Temel türler (built-in types veya predefined types veya primitive types)
 *
 *  Tür ismi				Uzunluğu (byte)
 *   short						2
 *  *int						4 (default type for integer)
 *   long						8
 *   byte						1
 *   
 *   float						4
 *  *double						8 (default type for reel number)
 *   
 *   char						2
 *   boolean					-
 * @endverbatim
 **/	
 
  package cnb;
  
  class PrimitiveTypes {
	  
	  public static void main(String [] Args)
	  {
		System.out.println("byte " + Byte.BYTES);
		System.out.println("char " + Character.BYTES);
		System.out.println("int " + Integer.BYTES);
		System.out.println("long " + Long.BYTES);
		System.out.println("short " + Short.BYTES);
		System.out.println("double " + Double.BYTES);
		System.out.println("float " + Float.BYTES);
	  
		/**
		* Gercek sayilar Java'da IEEE 754	standartlarına gore tutulurlar.
		* Bundan dolayi her gercek sayi gercege en yakin sekilde yuvarlanarak
		* tutulmaktadir. Bundan dolayı asagidaki kod esit degil olarak 
		* cikmistir. Aslinda 0.1 ile 0.2'nin toplami 0'a cok yakindir 
		* ancak tam olarak 0.3 degildir. Buna IEEE 754 formatinda yuvarlama
		* hatasi denilir. 
		*/
		double a, b, c;
	  
		a = 0.1;
		b = 0.2;
	  
		c = a + b;
	  
		//c =  0,30000000000000004000
		System.out.printf("%.20f%n", c);
	  
		if(c == 0.3)
			System.out.println("Esit");
		else
			System.out.println("Esit degil");
	  
		/**
		* Javada Char türü Unicode Karakter Tablosunda tutulmaktadir.
		* Unicode'da 0 - 65535 adet sira numarasi vardir. 
		*/
	  
		char ch = 4000;
	  
		System.out.println(ch);
	  
		/**
		* Javada Boolean türü mantiksal dogrulugu ve yanlisligi 
		* temsil etmektedir. Ya true ya da false degerini almaktadir.
		*/
	  
		boolean bool = true;
	  
		if(bool == true)
			bool = false;
	  
			System.out.println(bool);
	}
  }
  
  