/**
 * @file undef_operator.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 #include <stdio.h>
 
 /**
 * C dilinde onislemci program #undef operatorunu gordugunde 
 * operatorun operandı olan tanimi iptal eder. Artik makro
 * tanimli olsa bile tanimsiz muamelesi yapilir. Asagidaki
 * kodda CAN makrosu tamili olsa bile undef operatru kullanildigi
 * icin artik makro tanimsizdir. #undef operatoru bir makronun
 * tanimini ortadan kaldiran, iptal eden onislemci komutudur. 
 * MAkronun taniminin object like makro veya functional macro 
 * olmasinin bir onemi yoktur. Makro undef operatoru ile kullanilmissa
 * artik makro tanimli degildir. 
 */
 
 #define  MYDEBUG   
 #define  SIZE        100
 #define  max2(a, b)  ((a) > (b) ? (a) : (b))

 #undef   MYDEBUG 
 #undef   SIZE
 #undef   max2      //#undef   max2(a, b) seklinde degil sadece #undef max2 yazilir.
 
 #ifdef   MYDEBUG 
 typedef int BOOL;
 #endif
 
 int main()
 {
	BOOL a = 10; //error cunku artik makro tanimli degil
	
	printf("a = %d\n", a); 
 }
 
 /**
 * 1.ub'den kacinmak icin
 * Bir makronun iki farkli bicimde tanimlanmis olmasi.
 * C dilinde #undef onislemci operatoru tanimsiz davranistan kacinmak icin kullanilir. 
 * Bir makroyu iki farkli sekilde define etmek tanimsiz davranistir. Ornegin SIZE makrosunu
 * asagidaki gibi iki kere define etmek tanimsiz davranisir.
 *
 *  #define    sIZE    100
 * 
 *  codes...
 *
 *  #define    sIZE    100
 *
 * Bu probleme karsi onlem alinmistir. Bu onlem #undef op ile yapilir. Ornegin bir takim
 * baslik dosyalari include edilmektedir:
 * #include "can.h"
 * #include "berk.h"
 * Ancak ya bu include edilen baslik dosyalari ya da gelecekte edilecek baslik dosyalari
 * ayni isimli makrolar gelirse tanimsiz davranis olmaktadir. Bunu onlemek icin makro
 * define edilmeden once undefine edilirse problem ortadan kalkar.
 *
 * #undef   SIZE 
 * #define  SIZE   100
 * 
 * Yukardaki gibi makro once undef edilirse makro baska baslik dosyasindan gelse bile 
 * tamimsiz olacagi icin tekrardan define edilmesi tanimsiz davranis degildir. 
 *
 * 2.Makrolara sozde (pseudo) bir scope kazandirmaktir. 
 * #undef op.'nun diger bir kullanimi ise makrolara sozde bir scope kazandirmaktir. 
 * Scope normalde compiler'a ait bir kavramdir. Bundan dolayi buradki scope sozde bir
 * scope'dur. Kullanilan makro tanimlandigi yerden dosyanin sonuna kadar her yerde 
 * yer degistirme islemi yapşlacaktir. Cunku makronu curly brace'ler ile alakasi yoktur.
 * Ancak makronun sadece main fonksiyonu icinde etkili olmasini istiyorsak makroya
 * sozde bir scope kaandirilir:
 * 
 * int main()
 * {
 *    #undef   SIZE   -> baslik dosyalarindan gelme ihtimaline karsi onlem
 *    #define   SIZE   100 
 *    //sadece bu aralikta SIZE 100 ile yer degistirilir.
 *    
 *    #undef  SIZE    
 * }
 *
 * 3. Kosullu derleme komutlarinin yonunu degistirmek icin kullanilir.
 * 
 * #define  CAN  
 *
 * #ifdef   CAN
 *    typedef int BOOL;
 *    //codes 
 * #endif
 *
 * Yukaridaki kodlar dosyanin baska bolumlerinde daha farkli olarak kullanilmis olsun.
 * 
 * #undef  CAN
 *
 * #ifdef   CAN
 *    typedef double DOLLAR;
 *    //codes 
 * #endif
 *
 * Yukarida #define  CAN  makrosu tanimli oldugu icin onislemci programi her iki 
 * kosullu derleme blogunun icinede girecektir. Ancak ikinci kosullu derleme blogundan 
 * once makronun tanimi ortadan kaldirilirsa artik onislemci #undef CAN ile karsilastiginda
 * makro tanimli olmayacagi icin ikinci bloga girmez.
 */