class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        map<int,int> ans;
        int size = nums.size();

        for(int i=0;i<size;i++){
            int a = nums[i];
            int moreNeeded = target - a;
            if(ans.find(moreNeeded) != ans.end()){
                return {i,ans[moreNeeded]};
                break;
            }
            ans[a] = i;
        }    
        return {};
    }
};