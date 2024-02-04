#include<bits/stdc++.h>
using namespace std;
vector<long long> printFirstNegativeInteger(long long int A[],long long int N, long long int K) {
        long long int  i=0,j=0;
        vector<long long> ans;
        queue<long long > neg;
        
        while(j < N){
            if(A[j] < 0)
                neg.push(A[j]);
            if(j-i+1 < K)
                j++;
            else if(j-i+1 == K){
                if(neg.size() == 0)
                    ans.push_back(0);
                else{
                    ans.push_back(neg.front());
                    if(neg.front() == A[i])
                        neg.pop();
                }
                j++;
                i++;
            }
        }
    return ans;                               
}