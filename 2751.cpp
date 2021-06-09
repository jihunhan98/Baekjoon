#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
	int num1 = *(int*)a;
	int num2 = *(int*)b;

	if (num1 > num2)
		return 1;
	if (num1 < num2)
		return -1;

	return 0;
}

int main()
{
	int n,i;
	int array[1000000];

	scanf("%d", &n);
	
	for (i = 0; i < n; i++) 
		scanf("%d", &array[i]);

	for (int k = i; k < 1000000; k++)
		array[k] = 1000000;

	qsort(array, sizeof(array) / sizeof(int), sizeof(int), compare);

	for (int k = 0; k < n; k++)
		printf("%d\n", array[k]);

	return 0;	
}
