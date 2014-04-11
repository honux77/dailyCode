# Problem: http://oj.leetcode.com/problems/reverse-integer/
class Solution:
    # @return an integer
    def reverse(self, x):
        is_negative = False
        if x < 0 :
        	is_negative = True
        str_x = str(abs(x))
        rev = int(str_x[::-1])
        if is_negative == True :
        	return -rev
        return rev
