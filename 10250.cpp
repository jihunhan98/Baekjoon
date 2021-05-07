#include <stdio.h>

int main()
{
	int T, x, y;
	scanf("%d", &T);
	int H, W, N;	/*H는 높이 W는 너비 N은 손님 순서*/
	for (int i = 0; i < T; i++) {
		scanf("%d %d %d", &H, &W, &N);
		x = 1, y = 1;
		if (H >= N) {
			x = N;
			y = 1;
		}
		else {
			if (N % H == 0) {
				x = H;
				y = N / H;
			}
			else {
				x = N % H;
				y = (N / H) + 1;
			}
		}
		printf("%d\n", (x * 100) + y);
	}
	return 0;
}
