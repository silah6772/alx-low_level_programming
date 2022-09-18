#include <stdio.h>
void mutliple_of_3_and_5(int j) {
	   int i;
	      int allsum = 0;
	      	for (i = 0; i < 1024; i++)
				{
							if ((i % 3) == 0 || (i % 5) == 0)
											allsum += i;
								}

			printf("%d\n", allsum);
}
int main() {
	  mutliple_of_3_and_5(1024);
	    return 0;
}

