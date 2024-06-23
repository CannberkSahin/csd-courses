/**
 * @file undefined_macro.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 #include <stdio.h>
 
 /**
 * C dilinde önislemci kosullu derleme ifadesinde daha onceden
 * tanimlanmamis bir isim kullanilirsa yani tanimlanmamis bir 
 * makronun ismi kullanilirsa, ifade icerisinde tanimlanmamis
 * olsada gecersiz degildir ve "0" sabiti olarak kullanilir.
 * Asagidaki ornekte CAN ismi tanimlanmadigi icin 0 olarak 
 * kullanilir. CAN = 0 > -1 oldugu icin if makrosu icine girilir.
 */
 
 #if  CAN  > -1 
 typedef int BOOL;
 
 #endif
 
 /**
 * Ancak yukarida anatilan durum #ifdef ile karistirilmamalidir.
 * Eger #ifdef ifadesi kullaniliyorsa daha once tanimli olan bir
 * makro isminin olup olmadigina bakilir. Asagida DEFINE makrso
 * tanimli oldugu icin replacement list bolumunde 0 olmasina 
 * ragmen #ifdef kismina girer.
 */ 
 
 #define  DEFINE  0
 
 #ifdef  DEFINE
 typedef char CH;
 
 #endif
 
 
 int main()
 {
	BOOL a = 10;
	
	printf("a = %d\n", a);
	
	CH c = 'A';
	
	putchar(c);
 }