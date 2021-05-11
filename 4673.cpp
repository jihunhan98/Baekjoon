#include <stdio.h>

/*수열 공식*/
int selfnumber(int n)	
{
	int sum = n + (n % 10) + ((n % 100) / 10) + ((n % 1000) / 100) + ((n % 10000) / 1000);
	return sum;
}

int main()
{
	int n = 1;
	int z[10001];

	for (int i = 0; i <= 10000; i++)
		z[i] = i;
	int i = 1;

	for (int k = 1; k < 100000; k++) {
		if (selfnumber(k) <= 10000)
			z[selfnumber(k)] = 0;
	}

	for (int j = 0; j <= 10000; j++) {
		if (z[j] != 0)
			printf("%d\n", z[j]);
	}
	return 0;
}
