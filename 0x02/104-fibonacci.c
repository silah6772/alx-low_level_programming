#include <stdio.h>

void print98fbonacci(int n) {
	   int t1 = 0,i=0, t2 = 1, nextTerm = 0;
	        printf("%d, %d, ", t1, t2);
		     putchar('\n');
		          nextTerm = t1 + t2;
			       for (i=0; i <=n; i++) {
				              printf("%d, ", nextTerm);
					             t1 = t2;
						            t2 = nextTerm;
							           nextTerm = t1 + t2;
								        }
}
int main() {
	 print98fbonacci(98);
	   return 0;
}

