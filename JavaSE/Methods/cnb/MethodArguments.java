/**
 * @file MethodArguments.java
 * @author Canberk Sahin
 * @date 13 Sep 2020
 * @package cnb
 * @class 
 * */
 
 package cnb;
 
 
 class MethodArguments {
	 public static void main(String [] args)
	 {
		java.util.Scanner kb = new java.util.Scanner(System.in);
		System.out.print("Birinci sayıyı giriniz:");
		int x = Integer.parseInt(kb.nextLine());
		
		System.out.print("İkinci sayıyı giriniz:");
		double y = Double.parseDouble(kb.nextLine());
		
		Mample.foo(x, y);
		
		/**
		* Bir metot parametre sayısı kadar argüman ile çağrılmalıdır. 
		* Aksi durumda error oluşur
		*/
		
		Mample.foo(x, y, 10);//error
		Mample.foo(x); //error
	 }
 }	
 
 class Sample {
	 /**
	 * Metot bildiriminde metot isminden sonra parantezler arasında 
	 * bildirilen değişkenlere parametre değişkenleri denir 
	 */
	 public static void foo(int a, double b)
	 {
		 
	 }
	 
	 public static void bar(int a)
	 {
		
 	 }
	
	/**
	* Bir metodun parametre değişkenleri aynı türden olsa bile 
	* tür ismi yazılmalıdır 
	*/
	
     public static void tar(int a, b) //error
	 {
		
	 }
	 
	 /**
	 * Parametre değişkenleri faaliyet alanı bakımından metot başında 
	 * bildirilen yerel değişkenler gibidir. Yerel değişken ile parametre 
	 * değişkenleri aynı değildir.
	 */
	 
	 public static void func(int a, double a) //error
	 {
		
	 }
	
	public static void zar(int a, int b)
	 {
		double a; //error
	 } 
 }
 
 class Mample {
	 /**
	 * Metodun parametre değişkenlerine değerler metot çağrılırken verilir. 
	 * Metot çağrılırken parametrelere verilen ifadelere "argüman" denir. 
	 * Bir metot kaç tane parametreye sahipse o kadar sayıda argüman ile 
	 * çağrılmalıdır. Argümanlardan parametrelere aktarım da bir atama işlemidir.
	 */
	 
	 public static void foo(int a, double b)
	 {
		System.out.println(a);
		System.out.println(b);
	 }
 }