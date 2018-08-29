#include <cstdio>

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int first = 1;
        int last = A.size() - 2;      
        
        while(first<=last) {
            int m = (first + last) / 2;            
            
            //printf("%d %d %d\n", first, last, m);
            if (A.at(m - 1) < A.at(m) && A.at(m) > A.at(m + 1)) {
                return m;
            } else if (A.at(m - 1) > A.at(m)) {
                last = m - 1;
            } else {
                first = m + 1;
            }            
        }
    }
};