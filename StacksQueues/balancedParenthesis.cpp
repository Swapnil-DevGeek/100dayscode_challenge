#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        int len = s.length();
        stack<char> st;
        for(int i=0;i<len;i++){
            char ch = s[i];

            if(ch == '(' || ch=='[' || ch=='{')
                st.push(ch);
            else if(ch == ')'){
                if(st.empty())
                    return false;
                else if(st.top() == '(')
                    st.pop();
                else if(st.top() != '(')
                    return false;
            }
            else if(ch == ']'){
                if(st.empty())
                    return false;
                else if(st.top() == '[')
                    st.pop();
                else if(st.top() != '[')
                    return false;
            }
            else if(ch == '}'){
                if(st.empty())
                    return false;
                else if(st.top() == '{')
                    st.pop();
                else if(st.top() != '{')
                    return false;
            }
        }
        if(!st.empty()) return false;

        return true;
    }
};