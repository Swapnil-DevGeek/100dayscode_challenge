#include<iostream>
using namespace std;

int findDuplicate(int arr[],int size){
    int ans = 0 ;
    for(int i=0;i<size;i++) ans ^= arr[i];
    for(int i=1;i<size;i++) ans ^= i;
    return ans;
}

int main(){

    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;

    int arr[100];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<size;i++) cin>>arr[i];

    cout<<findDuplicate(arr,size)<<endl;

return 0;
}