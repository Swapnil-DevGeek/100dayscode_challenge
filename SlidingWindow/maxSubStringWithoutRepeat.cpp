#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0 , j=0;
        map<char,int> mpp;
        int maxLen= 0;
        while(j < s.length()){
            mpp[s[j]]++;
            if(mpp.size() == j-i+1)
                maxLen = max(maxLen,j-i+1);
            else{
                while(mpp.size() < j-i+1 ){
                    mpp[s[i]]--;
                    if(!mpp[s[i]])
                        mpp.erase(s[i]);
                    i++;
                }
            }
            j++;
        }
        return maxLen;
    }
};