#include<iostream>
using namespace std;

void printArray(int arr[],int size) {
    for(int i=0;i<size;i++) cout<<arr[i]<<" ";
    cout<<endl;
}

void revArray(int arr[],int size)
{
    int left = 0;
    int right = size-1;
    while (left<=right)
    {
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
   
}

int main(){

    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[100];

    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<size;i++) cin>>arr[i];

    revArray(arr,size);
    printArray(arr,size);

return 0;
}