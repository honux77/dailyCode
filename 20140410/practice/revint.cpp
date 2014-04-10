#include <iostream>

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


int main(void) {
	using namespace std;
	Solution s;
	cout << (s.reverse(123) == 321) << endl;
	cout << (s.reverse(-1023) == -3201) << endl;
	cout << (s.reverse(5010) == 105) << endl;
	return 0;
}
