#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>
#include <iostream>
#include <string>
#include <bitset>
#include <map>
#include <set>
#include <tuple>
#include <string.h>
#include <math.h>
#include <random>
#include <functional>
#include <assert.h>
#include <math.h>
#include <stack>

using namespace std;

using i64 = long long int;
using ii = pair<int, int>;
using ii64 = pair<i64, i64>;

int main()
{
    int n, k;
    string t;

    cin >> n >> k >> t;

    int overlap = n;
    for (int i = 1; i < n; i++)
    {
        if (t.substr(i) == t.substr(0, n - i))
        {
            overlap = i;
            break;
        }
    }

    string res;
    res.resize(overlap*(k - 1) + n);

    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < n; j++)
        {
            res[overlap * i + j] = t[j];
        }
    }

    cout << res;

    return 0;
}