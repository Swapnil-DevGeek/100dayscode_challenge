/*
    Binary search is applicable only if the array is monotonic
    i.e decreasing or increasing sorted
*/

#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int key){
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;
    while (start<=end)
    {
        if(arr[mid]==key) return mid;
        else if(key>arr[mid]) start = mid+1;
        else end = mid -1;

        mid =  start + (end-start)/2;    
        
    }
    return -1;
}

int main(){

    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[100];

    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<size;i++) cin>>arr[i];

    int element;
    cout<<"Enter the element to be searced: ";
    cin>>element;

    binarySearch(arr,size,element);
    cout<<endl;

return 0;
}