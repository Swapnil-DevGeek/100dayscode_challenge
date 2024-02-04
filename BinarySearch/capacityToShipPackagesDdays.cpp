#include<bits/stdc++.h>
using namespace std;
class Solution {
private:
    int minElement(vector<int>& weights){
        int ans = weights[0];
        for(int i=0;i<weights.size();i++)
            ans = min(ans,weights[i]);
        return ans;
    }
private:
    bool isPossible(vector<int>& weights, int mid, int days){
        int weight = 0;
        int count = 1;
        for(int i=0;i<weights.size();i++){
            if(weights[i] > mid)
                return false;
            weight += weights[i];
            if(weight > mid){
                weight = weights[i];
                count ++;
            }
            if(count > days)
                return false;
        }
        return true;
    }
public:
    int shipWithinDays(vector<int>& weights, int days) {
        if(weights.size() == 1)
            return weights[0];
        int low = minElement(weights);
        int high = 0;
        for(int i=0;i<weights.size();i++)
            high += weights[i];
        int res = -1;

        while(low <= high){
            int mid = low + (high - low) / 2;
            if(isPossible(weights,mid,days)){
                res = mid;
                high = mid - 1;
            }
            else{
                low = mid +1;
            }
        }
        return res;
    }
};