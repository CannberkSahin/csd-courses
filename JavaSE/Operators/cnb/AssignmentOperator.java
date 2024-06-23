/**
 * @file AssignmentOperator.java
 * @author Canberk Sahin
 * @date 13 Sep 2020
 * @package cnb
 * @class 
 * */
 
 package cnb;
 
 class AssignmentOperator {

	 public static void main(String [] args)
	 {
		/**
		* Atama (=) operatörü iki operandlı araek durumunda bir operatördür. 
		* Bu operatörün birinci operandı değişken olmalıdır.
		* Operatörün şüphesiz birinci operandına yan etkisi vardır. Bu operatör
		* sağdan sola (right associative) önceliklidir.
		* Atama operatörü ikinci operandına ilişkin değeri üretir.
		*/
		int a, b, c;

		a = b = c = 10;
		System.out.printf("a = %d%n", a);
		System.out.printf("b = %d%n", b);
		System.out.printf("c = %d%n", c);

		/**
		* Aşağıdaki mörnekte atama operatörünün birinci operandının değişken 
		* olmamasından dolayı error oluşur.
		*/
		int x = 12, y = 1, z = -20;

		(x = y) = z = 10;  //burada x'e y değişkeni değeri atanır. Operator atama islemi sonucunda
		//12 degerini uretecegi icin 12'ye de z atanamayacagi icin hata olur.

		System.out.printf("x = %d%n", x);
		System.out.printf("y = %d%n", y);
		System.out.printf("z = %d%n", z);
	 }
 }