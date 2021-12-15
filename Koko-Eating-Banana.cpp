class Solution {
public:
    bool isSpeedValid(vector<int> piles, int h, long int currSpeed){
        int n = piles.size();
        long int hoursCount = 0;
        for(int i=0;i<n;i++){
            hoursCount+=(piles[i]/currSpeed);
            piles[i]%currSpeed != 0?hoursCount++:hoursCount+=0;
            if(hoursCount > h) return false;
        }
        return true;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        
        long int st = 1, end = *max_element(piles.begin(), piles.end());
        while(st<end){
            long int mid = st +floor((end-st)/2);
            if(isSpeedValid(piles, h, mid)){
                end = mid;
            }else{
                st = mid+1;
            }
        }
        return st;
    }
};