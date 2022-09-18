#include <stdio.h>

void print50fbonacci(int n) {
	   int t1 = 0, t2 = 1, nextTerm = 0;

	        printf("%d, %d, ", t1, t2);
		     putchar('\n');
		          nextTerm = t1 + t2;
			       while (nextTerm <= n) {
				              printf("%d, ", nextTerm);
					             t1 = t2;
						            t2 = nextTerm;
							           nextTerm = t1 + t2;
								        }
}
int main() {
	 print50fbonacci(50);
	   return 0;
}

