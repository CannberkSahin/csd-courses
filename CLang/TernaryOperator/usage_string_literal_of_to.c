/**
 * @file usage_string_literal_of_to.c
 * @author Canberk Sahin
 * @date 11 Sep 2020
 *
 * */
 
 #include <stdio.h>
 
 int main()
 {
	 /**
	 * String literalleri kosul op. operanllari olabilir.
	 */
	 
	 int x = 5;
	 int y = 10;
	 
	 /**
	 * String literalleri yazi tutan dizilerdir.
	 * Eger boyle bir ozellik olmasaydi if deyimine
	 * ihtiyac duyulacakti.
	 */
	 printf("%s\n", x == y ? "equal" :"not equal");
	 
	 /**
	 * Not: x > y ? printf("dogru\n") : printf("yanlis\n");
	 * Yukaridaki kullanim tercih edilmemektedir. Kosul op.
	 * if deyimi yerine kullanilmamalidir. Ayrica burada
	 * cagrilan fonksiyonlarin geri donus degerleri olmasaydi
	 * kod legal olmazdi. Kosul op. 2. yada 3. operandi olan
	 * ifadeler void turden ifadeler olamazlar!!!.
	 */
 }