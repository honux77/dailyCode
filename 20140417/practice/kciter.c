#include <stdio.h>
#include <string.h>
 
int main() {
    char input[1000000] = {0, };
    int output[10000] = {0, };
    int bin[3] = {1,2,4};
    int count = 0;
 
    scanf( "%s", input );
 
    int len = strlen(input)-1;
    int value = 0;
    int index = 0;
    for (int i=len; i>=0; --i) {
        value = value + (input[i]-'0') * bin[count];
        ++count;
        if (count >= 3) {
            output[index++] = value;
            count = 0;
            value = 0;
        }
    }
    if (count != 0) output[index++] = value;
 
    for (int i=index-1; i>=0; --i) {
        printf( "%d", output[i] );
    }
 
    return 0;
}
