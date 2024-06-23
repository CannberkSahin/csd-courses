/**
 * @file methodCall.java
 * @author Canberk Sahin
 * @date 13 Sep 2020
 * @package cnb
 * @class Sample/Mample
 * */
 
 package cnb;
 
 /**
 * @verbatim 	
 *  Çağıran metodun (caller) ait olduğu sınıf ile 
 *  çağrılan metodun (callee)  ait olduğu sınıf aynı pakette ise
 *	çağırma sırasında paket ismi yazılmayabilir
 *
 *  Çağıran metot ile çağrılan metot aynı sınıfta ise bu durumda 
 *  paket ismi yazılmamışsa sınıf ismi de yazılmayabilir
  * @endverbatim
 **/		
 class MethodCall {
	 public static void main(String [] args)
	 {
		 System.out.println("Hello World");
		 Sample.foo(); //cnb.Sample.foo();
		 Sample.bar(); //cnb.Sample.bar();
		 Mample.tar(); //cnb.Mample.tar();
		 System.out.println("Goodby World");
	 }
 }
 
 class Sample {
	 public static void foo()
	 {
		 /**
		 * Mample ile Sample farkli siinf oldugu icin Mample 
		 * yazilmalidir.
		 */
		 System.out.println("foo");
		 Mample.tar(); //cnb.Mample.tar();
	 }
	 
	 public static void bar()
	 {
		 System.out.println("bar");
		 foo();  //Aynı sınıfta oldugu icin sinif ismine gerek yok
	 }
 }
 
 class Mample {
	 public static void tar()
	 {
		 System.out.println("tar");
	 }
 }