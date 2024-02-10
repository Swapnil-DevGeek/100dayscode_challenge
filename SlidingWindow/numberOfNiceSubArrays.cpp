#include<bits/stdc++.h>
using namespace std;

class Solution {
private : 
    int atMostK(vector<int>& nums, int k){
        int i =0,j=0,count =0,ans=0;

        while(j<nums.size()){
            if(nums[j]%2 ==  1)
                count++;

                while(count >  k){
                    if(nums[i]%2)
                        count--;
                    i++;
                }
            ans += j-i+1;
            j++;
        }
        return ans;
    }

public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int res = atMostK(nums,k) - atMostK(nums,k-1);
        return res;
    }
};