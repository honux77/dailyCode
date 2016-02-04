#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[1000001];
	int len;
	int i, num, dig = 1;

	scanf("%s", str);
	len = strlen(str);
	
	for (i = 0; i < (len - 1) % 3; i++)
	{
		dig *= 2;
	}

	for (i = 0, num = 0; i < len; i++)
	{
		if (dig == 0)
		{
			printf("%d", num);
			num = 0;
			dig = 4;
		}

		num += (str[i] - '0')*dig;
		dig /= 2;
	}
	printf("%d", num);
}
