/**
 * @file DivisionIntegers.java
 * @author Canberk Sahin
 * @date 14 Sep 2020
 * @package cnb
 * @class 
 * */
 
 package cnb;
 
 class DivisionIntegers {
	public static void main(String [] args)
	{	
		/**
		* Bölme işlemi tamsayılar ile yapıldığında sonuç her zaman 
		* tamsayı çıkar. Elde edilen sayının noktadan sonraki kısmı 
		* yuvarlanmadan atılır.
	    * Tamsayılar ile bölme işleminde paydanın sıfır olması durumunda
        * exception oluşur.
		*
	    * Aşağıdaki örneği çeşitli değerler girerek sonuçları gözlemleyiniz: 
		*/
		
		java.util.Scanner kb = new java.util.Scanner(System.in);
		System.out.print("Birinci sayıyı giriniz:");
		int a = Integer.parseInt(kb.nextLine());
		System.out.print("İkinci sayıyı giriniz:");
		int b = Integer.parseInt(kb.nextLine());
		
		double result;
		
		result = a / b;
		
		System.out.printf("%d / %d = %f%n", a, b, result);
	}
 }