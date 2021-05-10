#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int cnt = 2;
	while (1) {
		if (cnt>n)
			break;
		if (n % cnt == 0) {
			printf("%d\n", cnt);
			n = n / cnt;
			cnt = 2;
		}
		else
			cnt++;
	}
	return 0;
}
