#include <stdio.h>
void print_times_table(int n) {
	int num, mult, prod;

		if (n >= 0 && n <= 15)
				{
							for (num = 0; num <= n; num++)
										{
														putchar('0');

																	for (mult = 1; mult <= n; mult++)
																					{
																										putchar(',');
																														putchar(' ');

																																		prod = num * mult;

																																						if (prod <= 99)
																																												putchar(' ');
																																										if (prod <= 9)
																																																putchar(' ');

																																														if (prod >= 100)
																																																			{
																																																									putchar((prod / 100) + '0');
																																																														putchar(((prod / 10)) % 10 + '0');
																																																																		}
																																																		else if (prod <= 99 && prod >= 10)
																																																							{
																																																													putchar((prod / 10) + '0');
																																																																	}
																																																						putchar((prod % 10) + '0');
																																																									}
																				putchar('\n');
																						}
								}
			}
int main () {
	  print_times_table(3);
	      putchar('\n');
	          print_times_table(5);
		      putchar('\n');
		          print_times_table(98);
			      putchar('\n');
			          print_times_table(12);
				      return (0);
}

