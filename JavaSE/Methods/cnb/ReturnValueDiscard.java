/**
 * @file ReturnValueDiscard.java
 * @author Canberk Sahin
 * @date 13 Sep 2020
 * @package cnb
 * @class 
 * */
 
 package cnb;
  
 class ReturnValueDiscard {
	 
	 public static void main(String [] Args)
	 {
		 NumberUtil.square();
	 }
 }
 
/**
 * @verbatim
 * Geri dönüş değeri olan metotlar geri dönüş değerleri işleme 
 * sokulmadan da çağrılabilirler. Şüphesiz metodun da tasarımı
 * bu kullanım açısından anlamlı olmalıdır. Örneğin aşağıdaki 
 * square metodu klavyeden alınan değerin karesini ekrana basıp
 * aynı zamanda da değere geri dönmektedir. Bu metodu çağıran 
 * programcı (client) sadece ekrana basmasıyla ilgilenmiş
 * ve geri dönüş değerini kullanmamıştır (discard edilmiş).
 * @endverbatim
 */

 class NumberUtil {
   /**
	* NumberUtil sınıfında square isimli bir method tanimlanmistir.
	* Klavyeden alinan sayinin karesini ekrana yazdirir.
	* @retval ekrandan alinan tam sayinin karesini geri dondurur.  
	*/
	public static int square()
	{
		java.util.Scanner kb = new java.util.Scanner(System.in);
		System.out.print("Bir sayi girin: ");
		
		int val = Integer.parseInt(kb.nextLine());
		
		int result = val * val;
		
		System.out.println(result);
		
		return result;
	}
 }
 
    