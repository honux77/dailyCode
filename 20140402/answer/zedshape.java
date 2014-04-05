public class Solution {
    public String reverseWords(String s) {
        
        s = s.replaceAll(" +", " ");
        String[] s2 = s.split(" ");
        String result = ""; 
        
        if(s.equals("")) return s;
        
        for(int i=0;i<s2.length;i++)
            result += s2[s2.length-1-i]+" ";
        
        return result.trim();
    }
    
}