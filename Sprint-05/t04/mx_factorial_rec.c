#include <limits.h>

int mx_factorial_rec(int n) {
	if(n < 0) return 0;
	
	if(n == 0 || n == 1) return 1;
	
	if(INT_MAX / n < mx_factorial_rec(n - 1)){
		return 0;
	}
	
	return n * mx_factorial_rec(m - 1);
}

