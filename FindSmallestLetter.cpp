class Solution {
public:
    char nextGreatestLetter(vector<char>& a, char t) {
        int n = a.size();
        int st = 0, end = n-1, ans = -1;
        while(st<=end){
            int mid = st+(end-st)/2;
            if(st == end){
                ans = st;
                break;
            }else if(a[mid] <= t){
                st = mid+1;
            }else{
                ans = mid;
                end = mid;
            }
        }
        if(a[ans]>t){
            return a[ans];
        }
        return a[0];
    }
};