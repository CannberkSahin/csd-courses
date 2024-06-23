/**
 * @file CompoundAssignmentOperators.java
 * @author Canberk Sahin
 * @date 13 Sep 2020
 * @package cnb
 * @class 
 * */
 
 package cnb;
 
 class CompoundAssignmentOperators {

	 public static void main(String [] args)
	 {
		/**
		* İşlemli atama operatörlerinin genel biçimi:
		* <ifade1> <op>= <ifade2> ifadesinin yaklaşık karşılığı
		*
	 	* <ifade1> = <ifade1> op <ifade2>
		*
		* a *= b -> a = a * b
		* a += b -> a = a + b
		*/
		int a = 10, b = 20, c = 30;;
		
		a += b; // a = a + b;
		
		System.out.printf("a = %d%n", a);
		System.out.printf("b = %d%n", b);

		/**
		* İşlemli atama operatörleri ifadeleri daha basit yazmak 
		* için tercih edilebilir.
		*/
		a *= b + c; //a = a * (b + c);
		
		System.out.printf("a = %d%n", a);

		/**
		* Aşağıdaki örnekte aynı seviyede olan *= ve += operatörleri 
		* right associative olduğundan işlem sağdan sola yapılır.
		*/
		a = 10;
		b = 20;
		c = 30;		
		
		a *= b += c; //a = a * (b = b + c);
		
		System.out.printf("a = %d%n", a);		
		System.out.printf("b = %d%n", b);
		System.out.printf("c = %d%n", c);
	 }
 }