#include <stdio.h>
int swap(int* a, int* b)
{
	int rep;
	rep = *a;
	*a = *b;
	*b = rep;

	return 0;
}

int main()
{
	int n;
	int array[10] = { 0 };
	int cnt = 0;

	scanf("%d", &n);
	
	while (n != 0) {
		array[cnt++] = n % 10;
		n = n / 10;
	}

	for (int i = 0; i < cnt - 1; i++) {
		for (int k = 0; k < cnt - i - 1; k++) {
			if (array[k] < array[k + 1])
				swap(&array[k], &array[k + 1]);
		}
	}

	for (int i = 0; i < cnt; i++)
		printf("%d", array[i]);

	return 0;
}
