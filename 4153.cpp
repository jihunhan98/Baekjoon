#include <stdio.h>

int main()
{
	int x, y, z;
	while (1) {
		int cnt;
		scanf("%d %d %d", &x, &y, &z);
		if (x > z) {
			cnt = x;
			x = z;
			z = cnt;
		}
		if (y > z) {
			cnt = y;
			y = z;
			z = cnt;
		}
		if (x == 0 && y == 0 && z == 0)
			break;
		if ((x * x) + (y * y) == z * z)
			printf("right\n");
		else
			printf("wrong\n");
	}
	return 0;
}
