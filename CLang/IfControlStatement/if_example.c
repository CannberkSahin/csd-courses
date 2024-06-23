


#include <stdio.h>
#include <stdlib.h>

int main()
{
	int ival;
	printf("bir tam sayi girin: ");
	scanf("%d", &ival);	

	if(ival % 2 == 0); //el aliskanligi olarak noktali virgul konulmasi.
		printf("evet cift\n");

	/*kodun anlami:
	 *
         * f(ival % 2 == 0)
	 *	; 
	 *
	 * printf("evet cift\n");
         * */
	
}
