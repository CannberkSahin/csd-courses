/**
 * @file IntegerLiterals.java
 * @author Canberk Sahin
 * @date 13 Sep 2020
 * @package cnb
 * @class 
 * */
 
 package cnb;
 
 class IntegerLiterals {

	public static void main(String [] args) 
	{
		/**
		* Bir tamsayı sabitinin öneki yoksa bu durumda sabit 
		* "decimal" olarak ele alınır.
		*/
		int a = 10;
		
		System.out.printf("a = %d%n", a);
		System.out.printf("a = %x%n", a);
		System.out.printf("a = %X%n", a);
		System.out.printf("a = %o%n", a);
		
		/**
		* Bir tamsayı sabitinin önüne bitişik olarak sıfır ve 
		* x(büyük veya küçük) yazıldığında bu ekten sonra gelen 
		* basamaklar "hexadecimal" olarak ele alınır.
		*/
		a = 0xA;
		
		System.out.printf("a = %d%n", a);
		System.out.printf("a = %08x%n", a);
		System.out.printf("a = %08X%n", a);
		System.out.printf("a = %o%n", a);
		
		/**
		* Bir tamsayı sabitinin önüne bitişik olarak sıfır yazıldığında 
		* bu ekten sonra gelen basamaklar "octal" olarak ele alınır.
		*/
		int b = 012;
		
		System.out.printf("b = %d%n", b);
		System.out.printf("b = %08x%n", b);
		System.out.printf("b = %08X%n", b);
		System.out.printf("b = %o%n", b);
		
		/**
		* Bir tamsayı sabitinin önüne bitişik olarak sıfır ve b 
		* (küçük veya büyük) yazıldığında bu ekten sonra gelen basamaklar 
	    * "binary" olarak ele alınır. İkilik sistemde yazılan sabitler 
		* Java 7 ile eklenmiştir.
		*/ 
				int c = 0b1010; //Since Java 7
		
		System.out.printf("c = %d%n", c);
		System.out.printf("c = %08x%n", c);
		System.out.printf("c = %08X%n", c);
		System.out.printf("c = %o%n", c);
		
		/**
		* Aşağıdaki örnekte DeviceUtil sınıfının out metodu 32 tane bacağı 
		* olan bir elektronik devre için aldığı argüman değerine göre 
		* değerinin bit'lerine gelen bacakları 1 ya da sıfır için "high" 
		* ya da "low" seviye çekiyor olsun. Bu durumda böyle bir metodun 
		* alacağı sabit argüman için "binary" veya "hexadecimal" olarak 
		* yazılması okunabilirliği ve kod yazım kolaylığını artırır.  
		* Aşağıdaki örneği yukarıdaki senrayoya göre düşününüz.
		*/
		int bval = 0b10101;
		
		DeviceUtil.out(bval);
		
		bval = 0x15;
		
		DeviceUtil.out(bval);
	}
 }
 
class DeviceUtil {
	public static void out(int val)
	{
		System.out.println(val);
		//...
	}
}