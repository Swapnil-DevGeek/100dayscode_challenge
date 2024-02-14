#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfSubstrings(string s) {
        int i=0,j=0;
        int ans = 0;
        unordered_map<char,int> mpp;

        while(j<s.length()){
            mpp[s[j]]++;

            if(mpp.size() == 3){
                ans += s.length() -j;
                while(mpp.size() == 3){
                    mpp[s[i]]--;
                    if(mpp[s[i]] == 0)
                        mpp.erase(s[i]);
                    i++;
                    if(mpp.size()==3)
                       ans += s.length() -j;
                }
            }
            j++;
        }
        return ans;
    }
};