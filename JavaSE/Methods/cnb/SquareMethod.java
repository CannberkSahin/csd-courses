/**
 * @file SquareMethod.java
 * @author Canberk Sahin
 * @date 13 Sep 2020
 * @package cnb
 * @class 
 * */
 
 package cnb;
 
 /**
 * @verbatim
 * Bir metodun geri dönüş değeri varsa geri dönüş değeri bilgisi 
 * yerine bir tür yazılır. Bir metodun geri dönüş değeri varsa metot
 * çağrısı bittikten sonra çağrıldığı noktaya bir değer ile gelinir. 
 * İşte bu değer metodun çağrıldıktan sonra döndürdüğü değerdir.
 * Bir metodun geri dönüş değeri yoksa geri dönüş değeri bilgisi yerine
 * void anahtar sözcüğü yazılır. Bir metodun geri dönüş değeri return 
 * deyimi ile oluşturulur. return deyiminin genel biçimi:
 * 	    return [ifade];
 * 	
 * return deyimi nasıl kullanılırsa kullanılsın metodu sonlandırır. 
 * Yani metot içerisindeki akışta return deyimi görüldüğünde metot
 * sonlanır ve akış çağrılan noktaya geri döner. return deyimine 
 * ilişkin ifadenin değeri çağıran metoda aktarılır. Aşağıdaki örnekte 
 * square metodunun geri dönüş değeri 2 ile çarpılmış ve sonuç
 * result değişkenine atanmıştır.	
 * @endverbatim
 */
 
 
 class SquareMethod {
	 
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
 * return deyimi nasıl kullanılırsa kullanılsın metodu sonlandırır.
 * Sabitlerden, operatörlerden ve değişkenlerden oluşan herhangi 
 * bir dizilime ifade (expression) denir. Değişkenler ve sabitler 
 * tek başına ifade olabilirken, operatörler tek başına ifade olamaz
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
		/**
		* Akış return deyimine geldiğinde return deyimine ilişkin 
		* ifade önce yapılır, elde edilen değer döndürülür
		*/
		//return val * val; 
	}
 }