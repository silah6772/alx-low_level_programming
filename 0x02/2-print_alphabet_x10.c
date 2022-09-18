#include <stdio.h>
void print_alphabet_x10(void) {
	 int count =0;
	  do {
		    char alphabet;
		        for (alphabet ='a'; alphabet <= 'z';alphabet++) {
				        putchar(alphabet);
					     }
			     putchar('\n');
			         count +=1;
				  } while(count< 10);
}
int main () {
	  print_alphabet_x10();
	    return 0;
}

