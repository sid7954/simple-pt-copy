#include<stdio.h>

int main() {
	volatile int i, n = 1000000000, a = 1, b = 0;
	for (i = 0; i < n; ++i) {  // branch present in decoded trace
		a++;
		a--;
		if (a<b) {         // branch present in decoded trace only when taken
			a = (a*a + b)%2;   // even iterations jump here
			b = (b*b + a)%2;
//			printf("1\n");
		} else {
			a = (a*a + b)%2;  // odd iterations jump here
			b = (b*b + a)%2;
//			printf("2\n");
		}
	}
	return 0;
}
