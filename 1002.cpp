#include <stdio.h>
#include <math.h>
int main()
{
	int t; /*TestCase*/
	double x1, x2, y1, y2,d;
	int r1, r2,rep;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%lf %lf %d %lf %lf %d", &x1, &y1, &r1, &x2, &y2, &r2);
		d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));	/*두 점 사이의 거리*/
		if (x1 == x2 && y1 == y2 && r1 == r2)
			printf("-1\n");
		else {
			rep = r1;	/*r1 r2중 큰거 구하기*/
			if (r2 > r1)
				rep = r2;
			if (fabs(r2 - r1) < d && d < r2 + r1)
				printf("2\n");
			else if (fabs(r2 - r1) == d || r1 + r2 == d)
				printf("1\n");
			else if (d < fabs(r2 - r1) || r1 + r2 < d)
				printf("0\n");
		}
	}
	return 0;
}
