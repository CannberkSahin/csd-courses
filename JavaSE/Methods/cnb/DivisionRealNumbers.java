/**
 * @file DivisionRealNumbers.java
 * @author Canberk Sahin
 * @date 14 Sep 2020
 * @package cnb
 * @class 
 * */
 
 package cnb;
 
 class DivisionRealNumbers {
	public static void main(String [] args)
	{	
		/**
		* Gerçek sayılar ile bölme işleminde payda sıfır olsa da 
		* işlem yapılır. Gerçek sayılar içerisinde genel olarak 
		* "belirsizlik" için kullanılan "Not a number (NaN)" değeri
        * vardır. Ayrıca sonsuzluk (ya da genel olarak tanımsızlık)
		* için kullanılan +Infinity ve -Infinity değerleri de vardır. 
		* Bu durumda gerçek sayılar ile bölme işleminde pay sıfırdan
		* farklı payda sıfırsa payın işaretine göre + veya - Infinity, 
		* pay ve paydanın ikisi birden sıfır ise NaN sonucu elde edilir.
		*/
		
		java.util.Scanner kb = new java.util.Scanner(System.in);
		System.out.print("Birinci sayıyı giriniz:");
		double a = Double.parseDouble(kb.nextLine());
		System.out.print("İkinci sayıyı giriniz:");
		double b = Double.parseDouble(kb.nextLine());
		
		double result;
		
		result = a / b;
		
		System.out.printf("%f / %f = %f%n", a, b, result);
	}
 }