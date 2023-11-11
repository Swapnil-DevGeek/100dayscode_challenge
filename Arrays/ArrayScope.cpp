#include<iostream>
using namespace std;

void printArray(int arr[],int size) {
    for(int i=0;i<size;i++) cout<<arr[i]<<" ";
    cout<<endl;
}

void updateArray(int arr[],int size){
    arr[0] = 120;
    cout<<"inside the function"<<endl;
    printArray(arr,size);
}

int main(){

    int arr[6] = {2,3,5,10,22,1};
    cout<<"original array"<<endl;
    printArray(arr,6);

    updateArray(arr,6);
    
    cout<<"in the main function"<<endl;
    printArray(arr,6);

return 0;
}