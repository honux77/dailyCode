#include<stdio.h>

int main(void)
{
	int month[] = { 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334 };
	char day[][4] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
	int x, y;

	scanf("%d %d", &x, &y);
	printf("%s", day[(month[x - 1] + y) % 7]);
}
