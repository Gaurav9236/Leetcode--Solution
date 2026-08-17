// Last updated: 17/08/2026, 18:30:44
class Solution {
public:
    int maximumCount(vector<int>& nums) {

        int positive = 0;
        int negative = 0;

        for(int i =0; i<nums.size() ; i++){
            if(nums[i]<0){
                negative++;
            }
            if(nums[i]>0){
                positive++;
            }
        }
        return max(negative, positive);
        
    }
};