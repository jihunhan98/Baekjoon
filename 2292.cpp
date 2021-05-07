#include <stdio.h>

int main()
{
	int N;
	scanf("%d", &N);
	int x, y;	/*x는 등비, y는 등차의 합*/
	int i = 0;
	y = 1;
	if (N == 1)
		printf("1");
	else {
		while (N > y) {
			i++;
			x = 6 * i;
			y = y + x;
		}
		printf("%d", i+1);
	}
		return 0;
}
