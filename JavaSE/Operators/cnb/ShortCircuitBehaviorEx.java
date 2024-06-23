/**
 * @file ShortCircuitBehaviorEx.java
 * @author Canberk Sahin
 * @date 13 Sep 2020
 * @package cnb
 * @class 
 * */
 
 package cnb;
 
 class ShortCircuitBehaviorEx {

	 public static void main(String [] args)
	 {
		/**
		* && ve || operatörlerinde doğru sonuca en kısa yoldan ulaşabilmek 
		* (yani kısa devre davranışı için) için ifadenin önce sol tarafı yapılır. 
		* Yani bu operatörler	işlem sırasında işlem önceliğine uymazlar. Ancak 
		* işlem önceliğine uyulursa, yani matematiksel olarak (ya da daha kabaca 
		* kağıt üzerinde) elde edilen sonucu verirler. Şu cümle unutulmamalıdır:
		* "&& ve || operatörleri doğru sonuca en kısa yoldan erişirler." Aşağıdaki
		* örnekte && operatörü || operatöründen daha yüksek öncelikli olmasına 
		* karşın önce || işlemi yapılmaktadır. Ancak && operatörünün önceliğine 
		* göre işlem yapıldığında elde edilen sonuç aynıdır
		*/
		boolean result;
		
		result = Sample.foo() || Sample.bar() && Sample.tar();
		
		System.out.printf("result = %b%n", result);
		
		result = Sample.bar() && Sample.foo() || Sample.tar();
		
		System.out.printf("result = %b%n", result);
	 }
 }
 
 class Sample {
	public static boolean foo()
	{
		System.out.println("foo");
		
		return true;
	}
	
	public static boolean bar()
	{
		System.out.println("bar");
		
		return false;
	}
	
	public static boolean tar()
	{
		System.out.println("tar");
		
		return false;
	}
}
 