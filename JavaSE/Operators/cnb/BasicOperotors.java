/**
 * @file BasicOperators.java
 * @author Canberk Sahin
 * @date 13 Sep 2020
 * @package cnb
 * @class 
 * */
 
 package cnb;
 
 class BasicOperators {

	/**
	* Operand: Bir operatör ile işleme giren ifadelere denir
	* Operatörler 3(üç) biçimde sınıflandırılabilir
	* 1. İşlevlerine göre sınıflandırma:
	*	  - Aritmetik (arithmetic) operatörler
	*	  - Karşılaştırma (comparison) operatörleri
	*	  - Mantıksal (logical) operatörler
	*	  - Bitsel (bitwise) operatörler
	*	  - Özel amaçlı (special purpose) operatörler
	* 2. Operand sayısına göre sınıflandırma
  	* 	- Tek operandlı (unary)
  	*	- İki operandlı (binary)
  	*	- Üç operandlı (ternary)
	* 3. Operatörün ifadedeki konumuna göre sınıflandırma
	*  	- önek (prefix)
	* 	- araek (infix)
	*  	- sonek (postfix)
	* 	
	* Operatörün kısıtı (constraint)
	* Operatörün ürettiği değer (product value)
	* Operatörün yan etkisi (side effect) var mı?
	* Operatörün önceliği (precedence):
	* a = b + c * d ifadesinin derleyici tarafından üretilen kodda hesaplanma sırası
	* i1: c * d
	* i2: b + i1
	* i3: a = i2
	*  
	* a = (b + c) * d ifadesinin derleyici tarafından üretilen kodda hesaplanma sırası
	* i1: b + c
	* i2: i1 * d
	* i3: a = i2
	*  
	* a = b + c - d ifadesinin derleyici tarafından üretilen kodda hesaplanma sırası
	* i1: b + c
	* i2: i1 - d 
	* i3:a = i2
	*  
	* Not: Bir Java programcısı bir operatör için yukarıdaki durumları bilmelidir. 
	* Yani bir operatörün öğrenilmesi o operatör için yukarıdaki durumların bilinmesi 
	* anlamına gelir. 
	*  
	* Not: Bazı operatörler öncelik kuralına doğrudan uymazlar. Bu tarz operatörlerin de uymamadıkları durum
	* için nasıl çalıştıklarının bilinmesi gerekir. Şüphesiz bu operatörlerin neden uymadıklarının da bir gerekçesi vardır.
	*  
	* Not: Operatör öncelik tablosu gruplandındırma olarak düşünülebilir. Yani operatör öncelik tablosundaki
	* öncelik durumlarının istisnaları olabilir. Tamamen algıyı kolaylaştırmak için düşünülmüştür.
	*/

	public static void main(String [] args) 
	{
		/**
		* Aritmetik 4(dört) işlem ve mod operatörleri iki operandlı (binary) ve araek (infix) operatörlerdir.
		*/
		java.util.Scanner kb = new java.util.Scanner(System.in);
		System.out.print("Birinci sayıyı giriniz:");
		int a = Integer.parseInt(kb.nextLine());
		
		System.out.print("İkinci sayıyı giriniz:");
		int b = Integer.parseInt(kb.nextLine());
		
		System.out.printf("%d + %d = %d%n", a, b, a + b);
		System.out.printf("%d - %d = %d%n", a, b, a - b);
		System.out.printf("%d * %d = %d%n", a, b, a * b);
		System.out.printf("%d / %d = %d%n", a, b, a / b);
		System.out.printf("%d %% %d = %d%n", a, b, a % b);
	}
 }
 