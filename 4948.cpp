#include <stdio.h>

int main()
{
	int n;
	while (1) {
		scanf("%d", &n);
		if (n == 0)
			break;

		int x[260000] = { 0 };
		int m = n * 2;
		int cnt = 2;
		int k = 2;
		if (n == 1)
			printf("1\n");
		else {
			while (cnt <= n) {
				if (cnt * k < n)
					k++;
				else {
					if (cnt * k > m) {
						cnt++;
						k = 2;
					}
					else {
						x[k * cnt] = -1;
						k++;
					}
				}
			}
			int sum = 0;
			for (int i = n + 1; i < m; i++) {
				if (x[i] == 0)
					sum++;
			}
			printf("%d\n", sum);
		}
	}
	return 0;
}
