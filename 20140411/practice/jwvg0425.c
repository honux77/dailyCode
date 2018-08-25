#include<stdio.h>
#include<math.h>

int arr[1000001];

int main(void)
{
	long long int min, max, num = 0;
	long long int smax, i, j;

	scanf("%lld %lld", &min, &max);
	smax = (long long int)sqrt((double)max);

	for (i = 2; i <= smax; i++)
	{
		for (j = 2 * i; j <= smax; j += i)
		{
			if (arr[i] == 0)
				arr[j]++;
			else if(arr[i]>1)
				arr[j]--;
		}

		num -= (max / (i*i) - (min - 1) / (i*i))*(arr[i] - 1);
	}

	printf("%lld", max - min - num + 1);
}
