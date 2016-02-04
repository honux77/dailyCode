class Solution:
    # @param s, a string
    # @return a string
    def reverseWords(self, s):
        words = s.split(" ")
        ret = ""
        for word in words:
            if word =="":
				continue
            if ret=="":
                ret = word
            else:
                ret = word + " " + ret;
        return ret