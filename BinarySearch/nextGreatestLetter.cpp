#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int low = 0;
        int high = letters.size()-1;
        char ans = letters[low];

        while(low<=high){
            int mid = low + (high-low)/2;

            if(letters[mid] <= target)
                low = mid+1;
            else{
                ans = letters[mid];
                high = mid-1;
            }
        } 
        return ans;
    }
};