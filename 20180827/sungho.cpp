#include <iostream>
using namespace std;

int main(void) {
        cout.sync_with_stdio(false);
        cin.tie(nullptr);
        int n;
        cin >> n;
        int pi, ai, cnt = 1, ans = 1;
        cin >> ai;
        for (int i = 1; i < n; ++i) {
                pi = ai;
                cin >> ai;
                cnt = (ai <= pi * 2)? cnt + 1: 1;
                ans = max(cnt, ans);
        }
        cout << ans << endl;
        return 0;
}