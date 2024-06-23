


#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 20;
	int b = 5;
	
	if(a > 10)
		if(b > 20)
			printf("icteki if deyimi\n");
	else //else her zaman icteki if deyimine aittir. 
		printf("distaki if deyimi\n"); 
		
	/*
	 * eger else'in distaki if'e ait olmasi istenirse bloklanmasi gerekir.
	 * if(a > 10){
	 *	if(b > 20)
	 *		printf("icteki if deyimi\n");
	 * }
	 * else 
	 *	printf("distaki if deyimi\n");
	*/	
}