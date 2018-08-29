#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

using ii = pair<int, int>;

int main()
{
	int n;
	scanf("%d", &n);

	vector<ii> seg(n);
	vector<int> l(n), r(n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &l[i], &r[i]);
		seg[i].first = l[i];
		seg[i].second = r[i];
	}

	sort(l.begin(), l.end());
	reverse(l.begin(), l.end());

	sort(r.begin(), r.end());

	int ans = 0;

	for (int i = 0; i < n; i++)
	{
		int li = seg[i].first;
		int ri = seg[i].second;

		int ml = l[0];
		int mr = r[0];

		if (li == ml)
			ml = l[1];

		if (ri == mr)
			mr = r[1];

		ans = max(ans, mr - ml);
	}

	printf("%d\n", ans);

	return 0;
}