class Solution {
public:
    int findPeakElement(vector<int>& a) {
        int n = a.size();
        int st = 0, end = n-1, ans;
        while(st<=end){
            int mid = st+(end-st)/2;
            if(mid-1>=0 && a[mid-1]>a[mid]){
                end = mid-1;
            }else if(mid+1<n && a[mid+1]>a[mid]){
                st = mid+1;
            }else{
                ans = mid;
                break;
            }
        }
        return ans;
    }
};