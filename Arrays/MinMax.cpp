#include<bits/stdc++.h>
using namespace std;

int getMax(int arr[],int size) {
    int max = INT16_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max) max = arr[i];
    }

    return max; //returning max value
}

int getMin(int arr[],int size) {
    int min = INT16_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<min) min = arr[i];
    }

    return min; //returning min value
}

int main(){

    int size;
    cout<<"Set the size of the array ";
    cin>>size;

    int arr[100];
    //taking the input of array
    for(int i=0;i<size;i++) cin>>arr[i];

    cout<<"The max element of the array is "<<getMax(arr,size)<<endl;
    cout<<"The min element of the array is "<<getMin(arr,size)<<endl;

return 0;
}