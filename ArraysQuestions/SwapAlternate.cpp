#include<iostream>
using namespace std;

void printArray(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    
}
void swapAlternate(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size) swap(arr[i],arr[i+1]);
    }
}

int main(){

    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;

    int arr[100];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<size;i++) cin>>arr[i];

    swapAlternate(arr,size);
    
    printArray(arr,size);

return 0;
}