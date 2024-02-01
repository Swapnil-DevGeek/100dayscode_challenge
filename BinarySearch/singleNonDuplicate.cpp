#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        int i=0;
        int j = nums.size()-1;
        if(nums.size() == 1)
            return nums[0];
        while(i<=j){

            if(nums[i] == nums[i+1])
                i = i+2;
            else
                return nums[i];
            if(nums[j] == nums[j-1])
                j=j-2;
            else
                return nums[j];
        }
        return -1;
    }
};