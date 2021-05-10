#include <stdio.h>

int main()
{
	int n, m;
	int x[10000] = { 0 };
	scanf("%d %d", &n, &m);
	int length = m - n + 1;
	for (int i = n; i <= m; i++) {
		if (i == 1)
			x[i] = 0;
		else
			x[i] = i;
	}
	int i = 2;
	int k = 2;
	while (i <= m) {
		if (i * k < n)
			k = k + 1;
		else {
			if (i * k > m) {
				k = 2;
				i = i + 1;
			}
			else {
				x[i * k] = 0;
				k = k + 1;
			}
		}
	}
	for (int i = n; i <= m; i++) {
		if (x[i] != 0)
			printf("%d\n", x[i]);
	}
	return 0;
}
