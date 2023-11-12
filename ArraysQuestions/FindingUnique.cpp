/*
    array size 2M+1 
    in the array 'M' numbers are present twice and 1 number is present only once 
    return the num that is present once
    [1,2,2,1,4] -> 4
*/

#include<iostream>
using namespace std;

int findUnique(int arr[],int size){
   
   int ans = 0;

    for(int i=0;i<size;i++) {
        ans = ans^arr[i];
    }

    return ans;
}

int main(){

    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;

    int arr[100];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<size;i++) cin>>arr[i];

    cout<<findUnique(arr,size)<<endl;

return 0;
}


/*
    unique idea :-
    XOR operator a^a = 0 
                 0^a = a   
*/