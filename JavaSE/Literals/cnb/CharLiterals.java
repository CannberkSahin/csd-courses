/**
 * @file CharLiterals.java
 * @author Canberk Sahin
 * @date 13 Sep 2020
 * @package cnb
 * @class 
 * */
 
 package cnb;
 
 class CharLiterals {

	public static void main(String [] args) 
	{
	   /**
	    * char türden sabitler
	    */
		char ch = 'a';
		
		System.out.printf("ch = %c%n", ch);
		
		/**
		* İki tane tek tırnak arasında özel durumlar dışında 
		* birden fazla karakter yazımı geçersizdir.
		*/
		
		//char ch = 'abc'; //error
		
		/**
		* Line feed karakter sabiti bir sonraki satırın baina gecirir.
		*/
		ch = '\n';
		
		System.out.print("Merhaba");
		System.out.print(ch);
		System.out.println("Nasilsin");
		
		/**
		* Backspace karakter sabiti en sondaki karakteri siler.
		* Aşağıdaki kodu işletim sisteminin komut yorumlayıcı (terminal) 
		* programında çalıştırırak sonucu gözlemleyiniz. Eclipse IDE 
		* programının console'unda aynı sonucu elde edemeyebilirsiniz.
		*/
		ch = '\b';
		
		System.out.print("Merhaba");
		System.out.print(ch);
		System.out.println("iyi misin?");
		
		/**
		* Carriage return karakter sabiti. Imleci konsolun basina tasir.
		* Aşağıdaki kodu işletim sisteminin komut yorumlayıcı (terminal) 
		* programında çalıştırırak sonucu gözlemleyiniz. Eclipse IDE 
		* programının console'unda aynı sonucu elde edemeyebilirsiniz
		*/
		ch = '\r';
		
		System.out.print("Hello, my name is Canberk");
		System.out.print(ch);
		System.out.println("Are you ok?");
		
		/**
		* Aşağıdaki karakter sabit yazılan karakter tek tırnak 
		* karakteri değildir (backtick)
		*/
	    ch = '`'; //ileride java'da bu karaktere bir anlam yuklenecektir. 
		
		System.out.println(ch);
		
		/**
		* Ters bölü ve u ile bir karakterin sıra numarası hexadecimal olarak 
		* tek tırnak içerisinde (kesinlikle iki byte olarak) yazıldığında o 
		* karaktere ilişkin karakter sabiti yazılmış olur. Buradaki u harfinin
		* anlami unicode sira numarasi demektir. 
		*/
		ch = '\u1789';
		
		System.out.println(ch);
		
		/**
		* Ters bölü ve u ile yazılan karakter sabiti değişken isimlendirmede 
		* de kullanılabilir. Şüphesiz pratik değildir.
		*/
		int \u0041\u0042\u017C = 10;
		
		System.out.println(AB\u017C);
	}
 }
 
