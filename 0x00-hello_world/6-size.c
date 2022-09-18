#include<stdio.h>
int main()
{
	    char charType;
	        int intType;
		    long longInttype;
			        long long int llType;
				    float floatType;   
		        printf("Size of char: %lu byte\n", sizeof(charType));
			    printf("Size of int: %lu bytes\n", sizeof(intType));
			        printf("Size of long int: %lu bytes\n", sizeof(
							longInttype));
				    printf("Size of long long int: %lu bytes\n", sizeof(llType));
				        printf("Size of float: %lu bytes\n", sizeof(floatType));
					    return 0;
}
