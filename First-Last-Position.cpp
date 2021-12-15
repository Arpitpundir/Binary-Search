class Solution {
public:
    int firstPosn(vector<int> &nums, int n, long int target){
        int st = 0, end = n-1, ans = -1;
        while(st<=end){
            int mid = st+(end-st)/2;
            if(nums[mid] == target){
                ans = mid;
                end = mid-1;
            }else if(nums[mid]<target){
                st = mid+1;
            }else{
                end = mid-1;
            }
        }
        return ans;
    }
    int lastPosn(vector<int> &nums, int n, long int target){
        int st = 0, end = n-1, ans = -1;
        while(st<=end){
            int mid = st+(end-st)/2;
            if(nums[mid] == target){
                ans = mid;
                st = mid+1;
            }else if(nums[mid]<target){
                st = mid+1;
            }else{
                end = mid-1;
            }
        }
    return ans;
    }
    
    
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> ans;
        ans.push_back(firstPosn(nums, n, target));
        ans.push_back(lastPosn(nums, n, target));
        return ans;
    }
};