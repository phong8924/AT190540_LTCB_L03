#include <stdio.h>

int fibonacci(int n){
	if (n == 0) return 0;
	if (n == 1) return 1;
	
	int num1 = 0, num2 = 1, sum = 0;
	for (int i = 2; i <= n; i++){
		sum = num1 + num2;
		num1 = num2;
		num2 = sum;
	}
	return sum;
}

int main()
{
	int t, n;
	scanf("%d", &t);
	for (int i = 0; i < t; i++){
		scanf("%d", &n);
		printf("%d\n", fibonacci(n));
	}
    return 0;
}

