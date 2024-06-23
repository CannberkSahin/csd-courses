/**
 * @file FormatSpecifiersApp.java
 * @author Canberk Sahin
 * @date 14 Sep 2020
 * @package cnb
 * @class 
 * */
 
 package cnb;
 
 class FormatSpecifiersApp {
	 
	 /**
	 * Klavyeden girilen iki tane int türden sayının toplamını ve 
	 * çarpımını formatlı olarak aşağıdaki gibi ekrana basan programı yazınız:
	 * Girilen sayılar 10 ve 20 ise
	 * 10 + 20 = 30
	 * 10 * 20 = 200
	 * şeklinde ekrana basılacaktır.
	 */
	public static void main(String [] args)
	{	
		/**
		* main metodu uygulama metodunu cagiriyor (entry point)
		*/
		FindSumMultiplyApp.run();
	}
 }
 
/**
* @class FindSumMultiplyApp iki int sayinin toplamini ve carpiimni formatli 
* olarak yazdiran run metota sahip sınıf.
*/
class FindSumMultiplyApp {
	public static void run()
	{
		java.util.Scanner kb = new java.util.Scanner(System.in);
		System.out.print("Birinci sayıyı giriniz:");
		int a = Integer.parseInt(kb.nextLine());
		System.out.print("İkinci sayıyı giriniz:");
		int b = Integer.parseInt(kb.nextLine());
		
		System.out.printf("%d + %d = %d%n", a, b, NumberUtil.add(a, b));
		System.out.printf("%d * %d = %d%n", a, b, NumberUtil.multiply(a, b));
	}
}

/**
* @class NumberUtil iki int sayinin toplamini ve carpiimni bulan 
* methodların bulundugu sınıf.
*/
class NumberUtil {
	/**
	* @param int turden birinci sayi
	* @param int turden ikinci sayi
    * @retval iki sayinin toplami
	*/
	public static int add(int a, int b)
	{
		return a + b;
	}
	
	public static int multiply(int a, int b)
	{
		return a * b;
	}
}