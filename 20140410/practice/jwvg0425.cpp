class Solution {
public:
	int reverse(int x) {
		int t = 0;
		for (; x; x /= 10)
		{
			t *= 10;
			t += x % 10;
		}
		return t;
	}
};
