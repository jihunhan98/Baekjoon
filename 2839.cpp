#include <stdio.h>

int main()
{
	int n,bucket;
	scanf("%d", &n);
	int cnt = n;	/*대체자*/
	int i = 0;

	if (n % 5 == 0)
		bucket = n / 5;

	else {
		while (cnt >= 0) {
			i = i + 1;
			cnt = cnt - (3);
			if (cnt % 5 == 0) {
				bucket = (cnt / 5) + i;
				break;
			}
		}

		if (cnt < 0) {
			if (n % 3 == 0)
				bucket = n / 3;
			else
				bucket = -1;
		}
	}

	printf("%d", bucket);
	return 0;
}
