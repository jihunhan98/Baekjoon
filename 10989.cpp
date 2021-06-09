#include <stdio.h>

int main()
{
	int n,x;
	int cnt = 0;
	int k = 0;
	int array[10000] = { 0 };

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &x);
		array[x] += 1;
	}
	
	while (cnt < n) {

		if (array[k] == 0)
			k++;
		else {
			printf("%d\n", k);
			array[k]--;
			cnt++;
		}
	}

	return 0;
}
