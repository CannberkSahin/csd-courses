/**
 * @file function_scope.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 #include <stdio.h>
 
 /**
 * Diğer programlama dillerinde olduğu gibi C dilinde de programın akışı, bir koşula bağlı
 * olmaksızın kaynak kod içinde başka bir noktaya yönlendirilebilir. Bu, C dilinde goto
 * deyimi ile yapılır:
 * <goto etiket;>
 * ....
 * <etiket:>
 * <deyim;> 
 * 
 * Etiket (label), programcının verdiği bir
 * isimdir. Şüphesiz isimlendirme kurallarına uygun olarak seçilmelidir. Programın akışı, bu
 * etiketin yerleştirilmiş olduğu yere yönlendirilir. Etiket, goto anahtar sözcüğünün
 * kullanıldığı işlev içinde herhangi bir yere yerleştirilebilir. Etiket isminden sonra ':' atomu
 * yer almak zorundadır. Etiketi izleyen deyim de goto kontrol deyiminin sözdiziminin bir
 * parçasıdır. Etiketten sonra bir deyimin yer almaması bir sözdizim hatasıdır.
 * Etiketin goto anahtar sözcüğünden daha sonraki bir kaynak kod noktasına yerleştirilmesi
 * zorunluluğu yoktur. Etiket goto anahtar sözcüğünden önce de tanımlanmış olabilir: 
 * #include <stdio.h>
 * int main()
 * {
 * 
 * goto GIT;
 * 
 * GIT:
 * printf("goto deyimi ile buraya gelindi\n");
 * return 0;
 * }
 *  
 * Yukarıdaki programda, etiket goto anahtar sözcüğünden daha sonra yer alıyor.
 * 
 * int main()
 * {
 * GIT:
 * printf("goto deyimi ile gelinecek nokta\n");
 *
 * goto GIT;
 * 
 * return 0;
 * }
 *
 * goto etiketleri, geleneksel olarak büyük harf ile, birinci sütuna dayalı olarak yazılır.
 * Böylece kaynak kod içinde daha fazla dikkat çekerler.
 * goto etiketleri bir işlev içinde, bir deyimden önce herhangi bir yere yerleştirilebilir. Yani
 * etiket, aynı işlev içinde bulunmak koşuluyla, goto anahtar sözcüğünün yukarısına ya da
 * aşağısına yerleştirilebilir. Bu özelliğiyle goto etiketleri, yeni bir bilinirlik alanı kuralı
 * oluşturur. Bir isim, işlev içinde nerede tanımlanırsa tanımlansın o işlev içinde her yerde
 * bilinir. Bu bilinirlik alanı kuralına "işlev bilinirlik alanı" (function scope) denir.  
 */
 

 int main()
 {
	 /**
	 * Bloğun isim alanına eklenmez. goto etiket isimleri ayrı bir isim alanında değerlendirilir. 
	 * Bir blok içindeki goto etiketi ile aynı isimli bir yerel değişken olabilir: 
	 */
	int can = 10;
	
can:
	; //etiketlerden sonra mutlaka bir statement olmalidir. Aksi halde sentaks hatasi olur.
 }
 
