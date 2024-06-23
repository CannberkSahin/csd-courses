/**
 * @file ArgumentsParametersReturnVal.java
 * @author Canberk Sahin
 * @date 13 Sep 2020
 * @package cnb
 * @class 
 * */
 
 package cnb;
 
 class ArgumentsParametersReturnVal {
	 public static void main(String [] args)
	 {
	    /**
		* Bir metodun hem parametre değişkeni ya da değişkenleri hem de 
		* geri dönüş değeri olabilir
		*/
		java.util.Scanner kb = new java.util.Scanner(System.in);
		System.out.print("Birinci sayıyı giriniz:");
		int a = Integer.parseInt(kb.nextLine());
		
		System.out.print("İkinci sayıyı giriniz:");
		int b = Integer.parseInt(kb.nextLine());
		
		int result = NumberUtil.add(a, b);
		int square = NumberUtil.square(a);
		
		System.out.println(result);
		System.out.println(square);
		
		/**
		* Bir metodun geri dönüş değeri başka bir metoda argüman 
		* olarak verilebilir. Bu tip kompakt çözümler kodun
	    * okunabilirliğini etkilememelidir. Gerekirse ayrı ayrı 
		* hesaplanabilir. Buna dikkat edilmelidir.
		*/
		int outcome = NumberUtil.square(NumberUtil.add(a - 4, b + 7));
		
		System.out.println(outcome);
	 }
 }
 
 class NumberUtil {
	public static int add(int a, int b)
	{
		return a + b;
	}
	
	public static int square(int val)
	{
		return val * val;
	}
}