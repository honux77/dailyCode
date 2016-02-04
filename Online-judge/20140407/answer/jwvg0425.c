//https://www.acmicpc.net/problem/1002

#include<stdio.h>

int main(void)
{
	int T;
	int x1, y1, x2, y2, r1, r2, d, a, b, result;

	scanf("%d", &T);

	while (T--)
	{
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
		if (x1 == x2&&y1 == y2&&r1 == r2)
		{
			printf("-1\n");
			continue;
		}

		d = (y2 - y1)*(y2 - y1) + (x2 - x1)*(x2 - x1);
		a = r1*r1 + r2*r2;
		b = 2 * r1*r2;

		if (a - b > d)
		{
			result = 0;
		}
		else if (a - b == d)
		{
			result = 1;
		}
		else if (d < a + b)
		{
			result = 2;
		}
		else if (d == a + b)
		{
			result = 1;
		}
		else
		{
			result = 0;
		}
		printf("%d\n",result);
	}
}
