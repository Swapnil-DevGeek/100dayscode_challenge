#include<bits/stdc++.h>
using namespace std;
class Solution {
private : 
    int binarySearch(vector<int>& nums,int start,int end, int target){
        int s = start;
        int e = end;
        
        while(s<=e){
            int m = s + (e-s)/2;
            if(nums[m] == target)
                return m;
            else if(nums[m] > target)
                e = m-1;
            else
                s = m+1;
        }
        return -1;
    }

private: 
    int findPivot(vector<int>& nums){
        int size = nums.size();
        int start = 0;
        int end = size-1;

        if(nums[start] <= nums[end])
            return start;
        while(start<=end){
            int mid = start + (end-start)/2;
            int prev = (mid+size-1)%size;
            int next = (mid + 1)%size;
            
            if(nums[mid]<nums[prev] && nums[mid]<nums[next])
                return mid;
            else if(nums[mid]<= nums[end])
                end = mid-1;
            else if(nums[start]<=nums[mid])
                start = mid+1;
        }
        return start;
    }

public:
    int search(vector<int>& nums, int target) {
        int pivot = findPivot(nums);
        int isPresentFirst = binarySearch(nums,0,pivot-1,target);
        if(isPresentFirst != -1)
            return isPresentFirst;
        int isPresentSecond = binarySearch(nums,pivot,nums.size()-1,target);
        if(isPresentSecond != -1)
            return isPresentSecond;
        return -1;
    }
};