class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int st = 0, end = n-1, ans = -1;
        while(st<=end){
            int mid = st+(end-st)/2;
            if(mid>0&&arr[mid]<arr[mid-1]){
                end = mid-1;
            }else if(arr[mid]<arr[mid+1]){
                st = mid+1;
            }else{
                ans = mid;
                break;
            }
        }
        return ans;
    }
};