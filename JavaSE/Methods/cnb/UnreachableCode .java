/**
 * @file UnreachableCode.java
 * @author Canberk Sahin
 * @date 13 Sep 2020
 * @package cnb
 * @class 
 * */
 
 package cnb;
  
 class UnreachableCode {
	 
	 public static void main(String [] Args)
	 {
		 int result;
		 
		 result = NumberUtil.square() * 2;
		 
		 System.out.println(result);
	 }
 }
 
/**
 * @verbatim
 * Notlar: Java derleyicisi genel olarak bir deyime akışın hiçbir 
 * zaman gelemeyeceğini anlarsa o yazılan deyim için error oluşturur 
 * (unreachable code)
 * @endverbatim
 */

 class NumberUtil {
   /**
	* NumberUtil sınıfında square isimli bir method tanimlanmistir.
	* @retval ekrandan alinan tam sayinin karesini geri dondurur.  
	*/
	public static int square()
	{
		java.util.Scanner kb = new java.util.Scanner(System.in);
		System.out.print("Bir sayi girin: ");
		
		int val = Integer.parseInt(kb.nextLine());
		
		int result = val * val;
		
		return result;
		System.out.println("unreachable code"); //error 
	}
 }
 
    /**
	* Geri dönüş değeri olan metotlarda (void olmayan metotlarda) 
	* return tek başına kullanılamaz
	*
	* class NumberUtil {
	*   public static int square()
	*   {
	* 	  java.util.Scanner kb = new java.util.Scanner(System.in);
	* 	  System.out.print("Bir sayı giriniz:");
	* 	  int val = Integer.parseInt(kb.nextLine());		
	*	
    *	  return; //error		
	*   }
    * }
	*/
	
	/**
	* Geri dönüş değeri olan metotlarda akışın her noktasında 
	* return deyimi bulunmalıdır. Aksi durumda error oluşur
	*
	*  class NumberUtil {
	*  public static int square() //error
	*  {
	*	java.util.Scanner kb = new java.util.Scanner(System.in);
	*	System.out.print("Bir sayı giriniz:");
	*	int val = Integer.parseInt(kb.nextLine());		
	*	
    *   if (val > 0)
	*		return val;	
	*  }
    *}
	*/