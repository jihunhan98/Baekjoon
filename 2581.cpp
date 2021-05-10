#include <stdio.h>

int main()
{
	int n, m;
	int x[10000];
	scanf("%d %d", &n, &m);
	int length = m - n+1;
	int k = 0;

	for (int i = 0; i < length; i++) {
		int cnt = 2;
		while (1) {
			if (n == 1)
				break;
			if (n == cnt) {
				x[k] = n;
				k = k + 1;
				break;
			}
			if (n % cnt == 0)
				break;
			cnt++;
		}
		n++;
	}
	int min = x[0];
	int sum = 0;

	for (int i = 0; i < k; i++) {
		sum = sum + x[i];
		if (min > x[i])
			min = x[i];
	}

	if (k == 0)
		printf("-1");
	else
		printf("%d\n%d", sum, min);
	return 0;
}
