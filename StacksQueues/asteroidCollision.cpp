#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& arr) {
        int size = arr.size();
        vector<int> ans;
        stack<int> st;

        for(int i=0; i<size;i++){

            if(st.empty())
                st.push(arr[i]);

            else if(!st.empty() && st.top()*arr[i] > 0)
                st.push(arr[i]);
            
            else if(!st.empty() && (st.top() <0 && arr[i]>0 ))
                st.push(arr[i]);
            
            else if(!st.empty() && (st.top()>0 && arr[i]<0)){
                while(!st.empty() && (st.top()>0 && arr[i]<0)){
                    if(st.top() + arr[i] == 0){
                        st.pop();
                        break;
                    }
                    else if (st.top() > abs(arr[i])){
                        break;
                    }
                    else {
                        st.pop();
                        if(st.empty())
                            st.push(arr[i]);
                        else if(!st.empty() && (st.top()*arr[i] >0 ||( st.top()<0 && arr[i]>0)))
                            st.push(arr[i]);
                    }

                }
             

            } 
            

        }

        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(),ans.end());

        return ans;
    }
};