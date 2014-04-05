/*
http://oj.leetcode.com/problems/reverse-words-in-a-string/
*/

#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

class Solution {
public:
    void reverseWords(string &s) {
        string token, result;
        stringstream ss(s);

        result = "";
        
        while(ss >> token) result.insert(0, token+" ");
        result = result.substr(0, result.size()-1);
        s = result;
    }
};

int main()
{
    Solution s;
    string str("This is a string to be split");
    s.reverseWords(str);
    cout << str << endl;
    return 0;
}