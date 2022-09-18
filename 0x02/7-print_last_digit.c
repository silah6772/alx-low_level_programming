#include <stdio.h>
int print_l(int n) {
	int l = n % 10;

		if (l < 0)
					l *= -1;

			putchar(l + '0');

				return (l);
}
int main(void)
{
	    int r;

	        print_l(98);
		    print_l(0);
		        r = print_l(-1024);
			    putchar('0' + r);
			        putchar('\n');
				    return (0);
}

