#include <stdio.h>

int main()
{
	int N,i;
	int x[100];
	scanf("%d", &N);

	for (i = 0; i < N; i++) {
		scanf("%d", &x[i]);
	}
	int sum = 0;
	for (i = 0; i < N; i++) {
		int cnt = 2;
		while (1) {
			if (x[i] == 1)
				break;
			if (cnt == x[i]) {
				sum = sum + 1;
				break;
			}
			if (x[i] % cnt == 0) {
				break;
			}
		cnt++;
		}
	}
	printf("%d", sum);
}
