#include<bits/stdc++.h>
using namespace std;
class Solution {
private:
    int maxElement(vector<int>& bloomDay,int start,int end){
        int ans = bloomDay[start];
        for(int i=start;i<=end;i++)
            ans = max(ans,bloomDay[i]);
        return ans;
    }
private:
    bool isPossible(vector<int>& bloomDay, int m, int k, int maxDays){
        int n = bloomDay.size(); 
        int count = 0;
        int consecutive = 0;
        for(int i=0;i<n;i++){
            if(bloomDay[i] <= maxDays){
                consecutive++;
                if(consecutive == k){
                    count++;
                    consecutive = 0;
                }
            }
            else
                consecutive=0;
        }
        return count >= m;
    }
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int size = bloomDay.size();
        int low = 1;
        int high = maxElement(bloomDay,0,size-1);
        int res = -1;
        while(low <= high){
            int mid = low + (high - low) / 2;
            if (isPossible(bloomDay, m, k, mid)) {
                res = mid;
                high = mid - 1;
            } else
                low = mid + 1;
        }
        return res;
        }
};