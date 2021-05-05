		#include <stdio.h>

		int main()
		{
			double Testcase, N;
			scanf("%lf", &Testcase);

			for (int i = 0; i < Testcase; i++) 
			{
				scanf("%lf", &N);
				double score[1000] = { 0 };

					for (int k = 0; k < N; k++)
					scanf("%lf", &score[k]);

				int j = 0; double av = 0; int sum = 0;

				while (j < N)
				{
					sum = sum + score[j];

					j = j + 1;
				}
		
				av = sum / N;
				int cnt = 0;
				for (int i = 0; i < N; i++)
				{
					if (score[i] > av)
						cnt = cnt + 1;
				}
				printf("%.3lf%%\n", (cnt / N)*100);
			}
			return 0;
		}
