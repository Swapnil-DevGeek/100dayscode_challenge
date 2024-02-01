#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        
        int i=0;
        int j= m-1;
        while(i>=0 && i<n && j>=0 && j<m){
            int compare = matrix[i][j];
            if(compare == target)
                return true;
            else if(compare > target)
                j--;
            
            else
                i++;
        }
        return false;
    }
};