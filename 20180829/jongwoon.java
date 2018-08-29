class Solution {
    public int peakIndexInMountainArray(int[] A) {
        if(A == null || A.length == 0) {
            return 0;
        }       
        
        int start = 0;
        int end = A.length - 1;
        
        while(start <= end) {
            int mid = (end + start) / 2;
            
            if(A[mid - 1] < A[mid] && A[mid] < A[mid + 1]) {
                start = mid + 1;
            } else if(A[mid - 1] > A[mid] && A[mid] > A[mid + 1]) {
                end = mid - 1;
            } else {
                return mid;
            }
        }
        
        return 0;
        
    }
}