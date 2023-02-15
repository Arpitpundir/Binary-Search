class Solution {
public:

    int countOcc(int val, vector<int> nums){
        int ans = 0, n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i] <= val) ans++;
        }
        return ans;
    }
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int st=1, end = nums.size()-1, ans = -1;
        /*
        * number of elements which are <= nums[i] would be nums[i] only but since there is a duplicate
        * for nums[i] number of elements which are <= nums[i] may be nums[i]+1
        * we have to find the first index where countOcc(nums[i]) > nums[i]
        * since number of element which are <= nums[i] is a monotonic search space
        * we can use binary search to find the first index where countOcc(nums[i]) > nums[i]
        */
        while(st<=end){
            int mid = st+(end-st)/2;
            int count = countOcc(mid, nums);
            if(count > mid){
                ans = mid;
                end = mid-1;
            }else{
                st = mid+1;
            }
        }
        return ans;
    }
};