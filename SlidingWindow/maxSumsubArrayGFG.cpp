#include<bits/stdc++.h>
using namespace std;
class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        
        int i=0,j=0;
        long ans =0;
        long sum=0;
        while(j<N){
            sum+= Arr[j];
            
            if(j-i+1 < K)
                j++;
            else if(j-i+1 == K){
                ans = max(ans,sum);
                j++;
                sum -= Arr[i];
                i++;
            }
        }
        return ans;
    }
};