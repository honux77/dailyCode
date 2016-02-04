#include<stdio.h>
#include<stdlib.h>
int compare(const void* a, const void* b)
{
	return *(int*)a - *(int*)b;
}

int main(void)
{
	int A[51], B[51], N, i, S = 0;

	scanf("%d", &N);
	for (i = 0; i < N; i++)
		scanf("%d", &A[i]);
	for (i = 0; i < N; i++)
		scanf("%d", &B[i]);

	qsort(A, N, sizeof(int), compare);
	qsort(B, N, sizeof(int), compare);

	for (i = 0; i < N; i++)
		S += A[i] * B[N - i - 1];

	printf("%d\n", S);
}

