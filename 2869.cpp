#include <stdio.h>

int main()
{
	int A, B, V;
	scanf("%d %d %d", &A, &B, &V);
	int day, cnt;
	cnt = V - A;
	if (cnt % (A - B) == 0)
		day = cnt / (A - B) + 1;
	else
		day = cnt / (A - B) + 2;

	printf("%d", day);
	return 0;
}
