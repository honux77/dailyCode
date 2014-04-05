#include <stdio.h>
 
int main()
{
    int n, input[40], max;
    scanf("%d", &n);
    for(int i=0; i<n; ++i) scanf("%d", &input[i]);
 
    max = 1;
    unsigned long fibo[1000] = {0, 1, };
 
    for (int i=0; i<n; ++i)
    {
        if(input[i]==0) { printf("1 0\n"); continue; }
        if(input[i] > max)
        {
            for (int j=max+1; j<=input[i]; ++j)
            {
                fibo[j] = fibo[j-1] + fibo[j-2];
            }
            max = input[i];
        }
        printf("%d %d\n", fibo[input[i]-1], fibo[input[i]]);
    }
 
    return 0;
}

