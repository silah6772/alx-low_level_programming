#include <stdio.h>
void print_to_98(int n) {
	   if (n >= 98)
		      	{
				   		while (n > 98)
							   			printf("%d, ", n--);
						   		printf("%d\n", n);
								   	}

	      	else
			   	{
					   		while (n < 98)
								   			printf("%d, ", n++);
							   		printf("%d\n", n);
									   	}
}
int main() {
	    print_to_98(0);
	        print_to_98(98);
		    print_to_98(111);
		        print_to_98(81);
			    print_to_98(-10);
			        return (0);
}

