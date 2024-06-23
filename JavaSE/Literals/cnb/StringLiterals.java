/**
 * @file StringLiterals.java
 * @author Canberk Sahin
 * @date 13 Sep 2020
 * @package cnb
 * @class 
 * */
 
 package cnb;
 
 class StringLiterals {

	public static void main(String [] args) 
	{
	   /**
	   * Escape sequence karakterler String atomları (string literals) 
	   * içerisinde kendi anlamındadır.Asagidaki kodda kullanilan \n 
	   * escape sequence karakteri imleci yine alt satirin basina gecirir.
	   */
	   System.out.println("Merhaba,\nNasılsın\nİyi misin?");
	   
	   /**
	   * İki tırnak karakterinin karakter sabiti iki şekilde yazılabilir.
	   */
	   
	   	char ch1 = '"';
		char ch2 = '\"';
		
		System.out.println(ch1);
		System.out.println(ch2);
		
		/**
		* İki tırnak karakteri String atomu içerisinde ters bölü ile yazılmalıdır.
		*/
		System.out.println("\"ankara\"");
		
		/**
		* Tek tırnak karakteri String atomu içerisinde doğrudan ya da ters bölü 
		* ile kullanılabilir. Bunların ikisi de aynı anlamdadır.
		*/
		System.out.println("\'ankara'");
		
		/**
		* Aşağıdaki örnekte escape sequence karakterlerden dolayı istenilen elde edilemez.
		* Ekranda asagidaki gibi bir cikti yazdirilir:
	    * C:	est  
		* ames.txt
		*/
		System.out.println("C:\test\names.txt");
		
		/**
		* Yukarıdaki problem ters bölü karakterinin karakter sabit yazılarak yani iki 
		* tane ters bölü kullanarak çözülebilir
		*/
		System.out.println("C:\\test\\names.txt");
		
		/**
		* Ters bölü karakterinden sonra özel karakterler dışında yazılan karakter 
		* error oluşturur.Yani \music'de escape sequence karakterinden sonra m harfi
		* geldigi icin escape sequence karakteri bunu anlamlandiramaz. Ancak yukaridaki
		* ornekte C:\test\names.txt escape sequence karakterinden sonra rnegin t geldigi
		* icin ve \t tab kadar bosluk anlamina geldigi icin error olusmamistir. 
		*/
		System.out.println("C:\music\playlist.txt"); //error
		
		/**
		* \\192.168.1.156\test\names.dat yol ifadesinin String atomu içerisinde 
		* yazılması.
		*/
		System.out.println("\\\\191.168.1.156\\test\\names.dat");
		
		/**
		* Ters bölü u ile yazılan karakter sabitleri String atomu içerisinde de 
		* kullanılabilir.Buradaki u harfinin anlami unicode sira numarasi demektir. 
		*/
		System.out.println("Khmer Ketter Lyo:\u1789");
	}
 }
 
