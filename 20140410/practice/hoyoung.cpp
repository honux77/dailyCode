class Solution {
public:
	int reverse(int x) {
		int i=0;
		while (x != 0) {
			i = i * 10 + x % 10;
			x /= 10;
		}
		return i;
	}
};
