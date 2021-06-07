#include <stdio.h>

int main(void)
{
	int n, m, i, k, j, o, sum, ans;
	int card[100] = { 0 };
	int cnt = 300000;

	scanf("%d %d", &n, &m);

	for (i = 0; i < n; i++)
		scanf("%d", &card[i]);

	for (k = 0; k < i - 2; k++) {
		for (j = k + 1; j < i - 1; j++) {
			for (o = j + 1; o < i; o++) {

				sum = card[k] + card[j] + card[o];

				if (m - sum >= 0 && m - sum < cnt) {
					ans = sum;
					cnt = m - sum;
				}
			}
		}
	}

	printf("%d", ans);

	return 0;
}
