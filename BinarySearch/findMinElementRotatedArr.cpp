#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
     int findMin(vector<int> &nums) {
       int low =0;
       int high = nums.size()-1;
       if(nums[low]<=nums[high])
        return nums[low];
       while(low<=high){
           int mid = low + (high-low)/2;
           int prev = (mid-1+nums.size())%nums.size();
           int next = (mid+1)%nums.size();

            if(nums[mid] < nums[prev] && nums[mid]<nums[next])
                return nums[mid];
            else if(nums[mid] <= nums[high])
                high = mid-1;
            else if(nums[low] <= nums[mid])
                low = mid+1;
       }
       return 0;
    }

};