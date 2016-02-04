#include<stdio.h>

class Solution {
public:
	int searchInsert(int A[], int n, int target)
	{
		int left = 0, right = n - 1, mid = 0;

		while (left <= right)
		{
			mid = left + (right - left) / 2;

			if (A[mid] == target)
				return mid;

			if (A[mid] > target)
				right = mid - 1;
			else
				left = mid + 1;
		}

		if (A[mid] > target)
			return mid;
		else
			return mid + 1;
	}
};

int main(void)
{
	int list[4] = { 2, 4, 5, 7 };
	Solution s;
	int i;

	for (i = 1; i <= 8; i++)
	{
		printf("%d\n", s.searchInsert(list, 4, i));
	}
}
