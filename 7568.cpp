#include <stdio.h>

int main()
{
	int n;
	int w[50] = { 0 };
	int h[50] = { 0 };
	int rank;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%d %d", &w[i], &h[i]);
	
	for (int i = 0; i < n; i++) {
		rank = 1;
		for (int k = 0; k < n; k++) {
			if (w[i] < w[k] && h[i] < h[k])
				rank++;
		}
		printf("%d\n", rank);
	}
	return 0;
}
