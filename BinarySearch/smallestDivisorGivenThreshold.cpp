#include<bits/stdc++.h>
using namespace std;
class Solution {
private:
    bool isPossible(vector<int>& nums, int threshold, int mid){
        int check = 0;
        for(int i=0;i<nums.size();i++){
            check += nums[i]/mid;
            if(nums[i]%mid)
                check ++;
            if(check > threshold)
                return false;
        }
        return true;
    }

private:
    int maxElement(vector<int>& nums){
        int ans = nums[0];
        for(int i=0;i<nums.size();i++)
            ans = max(ans,nums[i]);
        return ans;
}

public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = maxElement(nums);
        int res = -1;

        while(low <= high){
            int mid = low + (high-low)/2;

            if(isPossible(nums,threshold,mid)){
                res = mid;
                high = mid-1;
            }
            else {
                low = mid+1;
            }
        }
        return res;
    }
};