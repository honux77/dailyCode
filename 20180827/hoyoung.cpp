// http://codeforces.com/problemset/problem/1029/B

#include <iostream>
#include <cstdio>
#include <algorithm>

int arr[200000];

using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxc = 0;    
    for(int i = 0; i < n; i++) {            
        int j = i;        
        while (j < n - 1 && arr[j] * 2 >= arr[j + 1]) {           
            j++;
        }        
        maxc = max(maxc, j - i + 1);
        i = j;        
    }
    cout << maxc << endl;
    return 0;
}