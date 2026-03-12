class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int k=0; k<nums.size(); k++){
            for(int j=k+1; j<nums.size(); j++){
               if( nums[k] + nums[j] == target){
                return {k,j};
                }
            }
        }
        return {};
    }
};