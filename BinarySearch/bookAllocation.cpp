#include<bits/stdc++.h>
using namespace std;
class Solution {
private:
    bool isPossible(vector<int>& nums, int k, int max){
        int divs = 1;
        int sum =0;

        for(int i=0;i<nums.size();i++){
            sum += nums[i];
            if(sum > max){
                divs++;
                sum = nums[i];
            }
            if(divs > k)
                return false;
        }

        return true;
    }
public:
    int splitArray(vector<int>& nums, int k) {
        if(nums.size() < k)
            return -1;
        int maxEle = nums[0];
        int maxSum = 0;
        for(int i=0;i<nums.size();i++){
            maxSum += nums[i];
            maxEle = max(maxEle,nums[i]);
        }

        int low = maxEle;
        int high = maxSum;
        int res = -1;

        while(low <= high){

            int mid = low + (high-low)/2;
            if(isPossible(nums,k,mid)){
                res = mid;
                high = mid-1;
            }
            else
                low = mid+1;
        }
        return res;
    }
};