class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         vector<int> ans; int flag = 0;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(nums[i] + nums[j] == target && i!=j){
                    ans.push_back(i);
                    ans.push_back(j);
                    flag = 1;
                    break;
                }
            }
            if(flag==1){
                break;
            }
            
        }
        return ans;
    }
};