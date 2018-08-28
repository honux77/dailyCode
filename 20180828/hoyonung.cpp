#include <iostream>
#include <algorithm>
#include <cstdio>

const int N = 300001;
const int INF = int(1e9);

using namespace std;

int l[N], r[N];
int prel[N], prer[N], sufl[N], sufr[N];

int main() {
    int n;
    cin >> n;
	for(int i = 0; i < n; i++) {
        scanf("%d%d", &l[i], &r[i]);
    }		
	
	prel[0] = sufl[n] = 0;
	prer[0] = sufr[n] = INF;
	
	for(int i = 0; i < n; i++) {
		prel[i + 1] = max(prel[i], l[i]);
		prer[i + 1] = min(prer[i], r[i]);
	}
	
	for (int i = n - 1; i >= 0; i--){
		sufl[i] = max(sufl[i + 1], l[i]);
		sufr[i] = min(sufr[i + 1], r[i]);
	}
	
	int ans = 0;
	for( int i = 0; i < n; i++) {
        int maxl = max(prel[i], sufl[i + 1]);
        int minr = min(prer[i], sufr[i + 1]);
		ans = max(ans, minr - maxl);
    }
	cout << ans << endl;
	return 0;
}