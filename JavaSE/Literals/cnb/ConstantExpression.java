/**
 * @file ConstantExpression.java
 * @author Canberk Sahin
 * @date 13 Sep 2020
 * @package cnb
 * @class 
 * */
 
 package cnb;
 
 class ConstantExpression {

	public static void main(String [] args) 
	{
	   /**
	   * Yalnızca sabitlerden veya operatörlerden oluşan yani içerisinde 
	   * değişken içermeyen ifadeler sabit ifades, (constant expression)
	   * denir. 
	   *
	   * Not: İleride aslında sabit olan değişkenler de göreceğiz. Bu tarz 
	   * değişkenler de bir ifade içerisinde sabit olarak ele alınır.(enum)
	   */
	   	int a = 10, b = 20;
			
	   	System.out.println(NumberUtil.add(10 + 4, 5)); //Argümanlar sabit ifadesi				
		System.out.println(NumberUtil.add(a - b, b)); //Argümanlar sabit ifadesi değil
		
		/**
		* Derleyiciler sabit ifadelerinin değerlerini hesaplayarak sonucu "byte code"'a 
		* yazarlar. Bu optimizasyona "constant folding optimization" denir. Bu sebeple 
		* aşağıdaki kodda 1000 * 60 * 60 * 24 * 365 değeri "byte code"'a 1471228928 
		* şekilde yazılır. Aşağıdaki örnekte bilgi kaybı oluşmaması için 1000 sabit long 
		* olarak ele alınmıştır. Mili saniyeyi gun'e ceviren ifade:
		*/
		long divider = 1000L * 60 * 60 * 24 * 365; //byte code -> long divider = 31536000000;
		
		System.out.println(divider);
	}
 }
 
 class NumberUtil {
	public static int add(int a, int b)
	{
		return a + b;
	}
 }