#include <stdio.h>

int main()
{
	char a[100001], b[100001], z[100001], y[100001];
	scanf("%s %s", &a, &b);
	int length1 = 0, length2 = 0;
	int i = 0;
	/*문자열 길이 구하기*/
	while (a[i] != NULL) {
		length1 = length1 + 1;
		i = i + 1;
	}
	i = 0;

	while (b[i] != NULL) {
		length2 = length2 + 1;
		i = i + 1;
	}

	/*a가 큰수가 되도록 바꾸기*/
	if (length2 > length1) {
		for (int i = 0; i < length1; i++)
			z[i] = a[i];
		for (int i = 0; i < length2; i++)
			a[i] = b[i];
		for (int i = 0; i < length1; i++)
			b[i] = z[i];
		int rp;
		rp = length1;
		length1 = length2;
		length2 = rp;
	}

	/*문자열 덧셈*/
	int cnt = length1 - length2;
	for (int i = length2 - 1; i >= 0; i--) {
		b[i + cnt] = b[i];
	}
	for (int i = 0; i < cnt; i++) {
		b[i] = '0';
	}
	int k = length1;
	int buffer = 0;
	while (k >= 0) {
		int sum = (int(a[k]) - '0') + (int(b[k]) - '0') + buffer;
		if (sum > 9) {
			buffer = 1;
			sum = sum - 10;
		}
		else
			buffer = 0;
		char rep = char(sum + 48);
		y[k] = rep;
		k = k - 1;
	}
	if (buffer == 1) {
		for (int j = length1 - 1; j >= 0; j--) {
			y[j + 1] = y[j];
		}
		y[0] = '1';
		length1++;
	}

	for (int i = 0; i < length1; i++)
		printf("%c", y[i]);
	return 0;
}
