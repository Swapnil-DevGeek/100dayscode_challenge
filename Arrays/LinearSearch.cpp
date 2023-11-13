#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    for(int i=0;i<size;i++) cout<<arr[i]<<" ";
    cout<<endl;
}

bool searchElement(int arr[],int size,int element)
{
    for(int i=0;i<size;i++) 
        if(arr[i] == element) return 1;

    return 0;
}

int main(){

    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[100];

    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<size;i++) cin>>arr[i];

    printArray(arr,size);

    int key;
    cout<<"Enter the element to be found: ";
    cin>>key;

    bool isFound = searchElement(arr,size,key);

    if(isFound) cout<<"Key is present in the array "<<endl;
    else cout<<"Key is absent in the array"<<endl;

return 0;
}