/**
 * @file lineaer_search_idiom.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 #include <stdio.h>
 
 /**
 * Asagidaki kodda bir dizi icerisinde istenilen bir 
 * degerin olup olmadiğini bulan bir program yazilmistir.
 */
 
 #define SIZE 10
 
 int main()
 {
	 /**
	 * Asagidaki kodlarda dongu deyiminden iki durumda cikilir.
	 * Eger aranan deger bulunursa donguden break deyimi ile 
	 * cikilir. Eger aranan deger bulunamazsa dongu deiminin
	 * sonlanmasi ile donguden cikilir. Donguden break ile mi
	 * dongunun sonlanmasi ile mi cikildigini anlamak icin break
	 * deyimi kullanilir.
	 */
	 
	 int arr[SIZE] = {345, 986, 253, 186, 652, 789, 241, 675, 934, 268 };
	 
	 int sval = 652; //dizide aranan deger.
	 
	 int i;
	 
	 /**
	 *  int flag = 0;
	 *
	 *  for(i = 0; i < SIZE; ++i) {
	 *	   if (arr[i] == sval) {
	 *		 flag = 1;
	 *		 break;
	 *	   }
	 *  }
	 *
	 *  if(flag)
	 *     printf("aranan deger bulundu...\n");
     */
	 
	 /**
	 * Ancak tecrubeli programcilar yukaridaki kodu asagidaki gibi
	 * bir idiyom ile yazarlar. Bu idiyom eger donguden break ile 
	 * cikilmissa dongu degiskeninin degeri olan i SIZE'dan daha
	 * kucuktur.
	 */
	 
	 //Short circuit behavior
	 for(i = 0; i < SIZE && a[i] != sval; ++i)
		 ;
	 
	 if(i < SIZE)
		 printf("aranan deger bulundu...\n");
 }