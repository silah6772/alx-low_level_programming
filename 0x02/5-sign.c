#include <stdio.h>
#include <ctype.h>

int print_sign(int n) {
	  if (n > 1) {
		    putchar('+');
		      		return (1);
				  } else if (n == 0 ) {
					   putchar('0');
					    		return (0);
							  } else {
								    putchar('-');
								      		return (-1);
										  }
}
int main () {
	int r;

	    r = print_sign(98);
	        putchar(',');
		    putchar(' ');
		        putchar(r + '0');
			    putchar('\n');
			        r = print_sign(0);
				    putchar(',');
				        putchar(' ');
					    putchar(r + '0');
					        putchar('\n');
						    r = print_sign(0xff);
						        putchar(',');
							    putchar(' ');
							        putchar(r + '0');
								    putchar('\n');
								        r = print_sign(-1);
									    putchar(',');
									        putchar(' ');
										    putchar(r + '0');
										        putchar('\n');
											    return (0);
}

