#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum = 0;
        for(int i=0;i<k;i++){
            sum += cardPoints[i];
        }
        int j=1;
        int curr = sum;
        while(j<=k){
            curr -= cardPoints[k-j];
            curr += cardPoints[cardPoints.size()-j];
            sum = max(sum,curr);
            j++;
        }
        return sum;
    }
};