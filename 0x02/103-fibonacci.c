#include <stdio.h>
void fibonancci() {
	unsigned long f1 = 0, f2 = 1, fsum;
		float tot_sum;
			while (1)
					{
								fsum = f1 + f2;
										if (fsum > 4000000)
														break;
												if ((fsum % 2) == 0)
																tot_sum += fsum;
														f1 = f2;
																f2 = fsum;
																	}
				printf("%.0f\n", tot_sum);
}
int main () {
	  fibonancci();
	    return 0;
}

