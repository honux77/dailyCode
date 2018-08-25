#include <stdio.h>
#include <string.h>
 
int main(void)
{
    char Binaries[1000000];
    int len;
    int index;
    int firstNum = 0;
     
    scanf("%s", Binaries);
    len = strlen(Binaries);
     
    if(len % 3 > 0)
    {
        for(index = 0; index < len % 3; index++)
        {
            if(index == 1) firstNum *= 2;
            firstNum += Binaries[index] - '0';
        }
 
        printf("%d", firstNum);
    }
 
    for(index = len % 3; index < len; index += 3)
    {
        printf("%d",
           (Binaries[index] - '0') * 4 + (Binaries[index + 1] - '0') * 2 + (Binaries[index + 2] - '0'));
    }
 
    return 0;
}

