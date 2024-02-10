#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i=0,j=0;
        int nz = 0;
        int maxLen= 0;

        while(j < nums.size()){
            if(!nums[j])
                nz++;
            
            if(nz <= k)
                maxLen = max(maxLen,j-i+1);

            else{
                while(nz > k){
                    if(!nums[i])
                        nz--;
                    i++;
                }
            } 

            j++;
        }
        return maxLen;
    }
};