#include<iostream>
using namespace std;

void printArray(int arr[], int size) {
    cout<<"Printing the array"<<endl;
    for(int i=0;i<size;i++) cout<<arr[i]<<" ";
    cout<<"Printing Done"<<endl;
}

int main(){

    int n = 3;
    int arr1[n] = {5,7,11};
    printArray(arr1,n);

    n = 10;
    int arr2[n] = {0};
    printArray(arr2,n);

    int arr3[n] = {2,7};
    printArray(arr3,n);

    int arr4[n] = {1};
    printArray(arr4,n);

return 0;
}