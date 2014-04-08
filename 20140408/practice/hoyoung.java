public class Solution {
	public int singleNumber(int[] A) {
		int i, sum;
		for (i = 1, sum = A[0]; i < A.length ; i++) 
			sum ^= A[i];
		return sum;
	}   
}
