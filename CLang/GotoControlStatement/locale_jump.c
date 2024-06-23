/**
 * @file locale_jump.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 #include <stdio.h>
 
 /**
 * goto deyimiyle, bir işlevin içindeki bir noktadan, yine kendi içindeki bir başka noktaya
 * sıçrama yapılabilir. Böyle sıçramalara yerel sıçramalar (local jumps) denir. Bir işlevin
 * içinden başka bir işlevin içine sıçramak başka araçlarla mümkündür. Böyle sıçramalara
 * yerel olmayan sıçramalar (non-local jumps) denir. C dilinde, yerel olmayan sıçramalar
 * ismi setjmp ve longjmp olan standart işlevlerle yapılır. Bu sıçramalar çoğunlukla "Olağan
 * dışı hataların işlenmesi" (exception handling) amacıyla kullanılır. 
 */
 
 /*Macro Definitions*/
 #define ADDREC 	1
 #define LISTREC 	2
 #define DELREC 	3
 #define SORTREC 	4
 #define EXITPROG 	5	 
 
 /*Function  Prototypes*/
 int get_option(void);
 void add_rec(void);
 void list_rec(void);
 void del_rec(void);
 void sort_rec(void); 
 
 int main()
 {
	/**
	* Aşağıdaki örnekte ise goto deyimiyle hem switch deyiminden hem de switch deyiminin
	* içinde bulunduğu for döngüsünden çıkılmaktadır.
	*/
	int option;
	 
	for (;;) {
		option = get_option();
		switch (option) {
			case ADDREC :add_rec();break;
			case LISTREC :list_rec();break;
			case DELREC :del_rec(); break;
			case SORTREC :sort_rec(); break;
			case EXITPROG :goto EXIT;
		}
	}
EXIT: 
	 /**
	 * Yukarıdaki main işlevinde option değişkeninin değeri EXITPROG olduğunda programın
     * akışı, goto deyimiyle sonsuz döngünün dışına gönderiliyor. goto deyimi yerine break
     * deyimi kullanılsaydı, yalnızca switch deyiminden çıkılmış olurdu.
	 */
 }
 
