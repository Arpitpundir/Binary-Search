class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int n = nums.size();
        int st = 0, end = n-1;
        while(st<end){
            int mid = st+floor((end-st)/2);
            if(nums[mid]<nums[end]){
                end = mid;
            }else{
                st = mid+1;
            }
        }
        return nums[st];
    }
};