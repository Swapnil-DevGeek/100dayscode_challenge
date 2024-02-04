#include<bits/stdc++.h>
using namespace std;
class Solution {
private:
    bool isPossible(vector<int>& piles, int h, int k){
        long long hrs = 0;
        for(int i = 0; i < piles.size(); i++){
            hrs += (static_cast<long long>(piles[i]) + k - 1) / k;
        }
        return hrs <= h;
    }

public:
    int minEatingSpeed(vector<int>& piles, int h) {

        if(piles.size() == 1){
            if (piles[0] <= h) {
                return 1;
            } else {
                return (piles[0] + h - 1) / h;
            }
        }

        int maxEle = piles[0];
        for (int i = 0; i < piles.size(); i++) {
            maxEle = max(maxEle, piles[i]);
        }
        int low = 1;
        int high = maxEle;
        int res = -1;
        while (low <= high) {

            int mid = low + (high - low) / 2;
            if (isPossible(piles, h, mid)) {
                res = mid;
                high = mid - 1;
            } else
                low = mid + 1;
        }
        return res;
    }
};