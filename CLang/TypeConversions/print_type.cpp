/**
 * @file print_type.c
 * @author Canberk Sahin
 * @date 12 Sep 2020
 *
 **/
 
 #include <iostream>
 
 using namespace std;
 
 /**
 * Asagidaki kodlarda degiskenlerin turleri ekrana yazdirilmaktadir.
 * Bu islem C dilinde yoktur. 
 */
 
 int main()
 {
	long double x =1.l;
	double y = 1.;
	
	short a = 10;
	short b = 20;
	
	char k = 10;
	
	cout << typeid(x + y).name() << "\n";
	cout << typeid(a + b).name() << "\n";  //integral promotion
	cout << typeid(+k).name() << "\n";  //integral promotion
 }