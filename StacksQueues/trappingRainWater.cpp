#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int size = height.size();

        int mxl[size];
        int mxr[size];

        mxl[0] = height[0];
        for(int i=1;i<size;i++){
            mxl[i] = max(height[i],mxl[i-1]);
        }

        mxr[size-1] = height[size-1];
        for(int i=size-2;i>=0;i--)
            mxr[i] = max(height[i],mxr[i+1]);

        int water = 0;
        for(int i=0;i<size;i++)
            water += min(mxl[i],mxr[i]) - height[i];

        return water;
    }
};