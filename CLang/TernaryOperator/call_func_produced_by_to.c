/**
 * @file call_func_produced_by_to.c
 * @author Canberk Sahin
 * @date 11 Sep 2020
 *
 * */
 
 #include <stdio.h>
 
 void func(int x)
 {
	 printf("%d argument function called (func(%d))\n", x, x);
 }
 
 /**
 * Kosul op. ile olusturulan ifadenin bir fonksiyonun
 * geri donüs degeri olabilir. 
 */
 int foo(int x, int y)
 {
	 //...
	return x > 0 ? y : x;
 }
 
 int main()
 {
	 int a = 20;
	 int b = 5;
	 /**
	 * Kosul operatorunun urettigi deger ile 
	 * bir fonksiyon cagrilabilinir. 
	 */
	if (a > b)
		func(a);
	else
		func(b);
	
	/** 
	* Yukaridaki if ile yazilan kod yerine kosul op. ile
	* asagidaki gibi bir kod yazilabilir.
	*/
	func(a > b ? a : b);
	
	// Kosul op. geri donus degeri ile kullanildigi fonk. test kodu: 
	printf("%d\n", foo(2, 3);
 }