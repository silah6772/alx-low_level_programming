#include <stdio.h>

void times_table(void){
	  int el, n, p;

	    	for (el = 0; el <= 9; el++)
			  	{
					  		putchar('0');

							  		for (n = 1; n <= 9; n++)
										  		{
													  			putchar(',');
																  			p = el * n;
																			  			if (p <= 9)
																							  				putchar(' ');
																						  			else
																										  				putchar((p / 10) + '0');

																									  			putchar((p % 10) + '0');
																												  		}
									  		putchar('\n');
											  	}
}
int main() {
	   times_table();
	       return (0);
}

