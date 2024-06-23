/**
 * @file CalculateSumInteger.java
 * @author Canberk Sahin
 * @date 13 Sep 2020
 * @package cnb
 * @class 
 * */
 
 package cnb;
 
 /**
 * 	Aşağıdaki örnekte iki add çağrısı arasında argümanlarda değişiklik 
 *  olmamasına karşın programcı iki kere çağırmıştır. Bu durumda kod 
 *  hem iki defa çağırmanın gereksizliği anlamında hem de 
 *  okunabilirlik/algılanabilirlik açısından kötü yazılmıştır.
 */
 
 class CalculateSumInteger {
	 public static void main(String [] args)
	 {
		 CalculateSumApp.run();
	 }
 }
 
 class CalculateSumApp {
	public static void run()
	{
		java.util.Scanner kb = new java.util.Scanner(System.in);
		System.out.print("Birinci sayıyı giriniz:");
		int a = Integer.parseInt(kb.nextLine());
		
		System.out.print("İkinci sayıyı giriniz:");
		int b = Integer.parseInt(kb.nextLine());
		
		System.out.println(NumberUtil.add(a, b));
		
		//... (burada a ve b'nin değerleri değişmiyor)
		
		System.out.println(NumberUtil.add(a, b));
		
		/**
		* Yukarıdaki kod aşağıdaki gibi bir çözümle daha iyi hale 
		* getirilebilir
		*/
		
		int result;
		
		result = NumberUtil.add(a, b);
		
		System.out.println(result);
		
		//... (burada a ve b'nin değerleri değişmiyor)
		
		System.out.println(result);
	}
}


class NumberUtil {
	public static int add(int a, int b)
	{
		return a + b;
	}
}