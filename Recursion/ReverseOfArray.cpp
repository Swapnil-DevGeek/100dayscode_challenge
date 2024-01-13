#include<iostream>
using namespace std;

void printArray(int arr[], int n) {
   cout << "The reversed array is:- " << endl;
   for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
   }
}


void reverseArray(int size,int arr[])
{
    int start =0,end=size-1;
    while (start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    
    printArray(arr, size);
}

int main(){

    int arr1[5] = {5,4,3,2,1};
    int arr2[6] = {6,5,4,3,2,1};

    reverseArray(5,arr1);
    reverseArray(6,arr2);

return 0;
}