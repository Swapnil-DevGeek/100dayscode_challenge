#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
        vector<int> ans;
        stack<pair<int,int>> st;
        
        for(int i=0;i<n;i++){
            if(st.empty())
                ans.push_back(-1);
            else if(!st.empty() && st.top().first > price[i])
                ans.push_back(st.top().second);
            
            else if(!st.empty() && st.top().first <= price[i]){
                while(!st.empty() && st.top().first <= price[i])
                    st.pop();
                if(st.empty())
                    ans.push_back(-1);
                else
                    ans.push_back(st.top().second);
            }
            
            st.push({price[i],i});    
        }
        for(int i=0;i<n;i++)
            ans[i] = i-ans[i];
        
        return ans;
    }
};