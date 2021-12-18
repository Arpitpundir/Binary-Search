class Solution {
public:
    int findMin(vector<int>& a) {
        int n = a.size();
        int st = 0, end = n-1;
        while(st<=end){
            int mid = st+(end-st)/2;
            if((mid-1 < 0 || a[mid-1]>a[mid])&&(mid+1>=n||a[mid+1]>a[mid])){
                return a[mid];
            }else if(a[end]<a[mid]){
                // go only if that part is unsorted, this will handle edge case when array is sorted
                st = mid+1;
            }else{
                end = mid-1;
            }
        }
        return -1;
    }
};
