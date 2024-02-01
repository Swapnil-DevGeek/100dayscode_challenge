#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        int size = arr.size();
        int low =0;
        int high = size-1;
        if(size == 1)
            return 0;
        while(low<=high){
            int mid = low + (high-low)/2;

            if(mid >0 && mid < size-1){

                if(arr[mid]>arr[mid-1] && arr[mid] > arr[mid+1])
                    return mid;
                else if(arr[mid-1] > arr[mid])
                    high = mid-1;
                else
                    low = mid +1;    

            }
            else if(mid ==0){
                if(arr[0]>arr[1])
                    return 0;
                else 
                    return 1;
            }
            else{
                if(arr[size-1] > arr[size-2])
                    return size-1;
                else
                    return size-2;
            }
        }

        return low;
    }
};