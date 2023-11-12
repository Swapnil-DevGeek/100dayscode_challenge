/*
    N and M two arrays sorted in non decr order
    find their intersection array
*/

#include<bits/stdc++.h>
using namespace std;



int main(){

    int size1;
    cout<<"Enter the size1 of the array: ";
    cin>>size1;
    int size2;
    cout<<"Enter the size2 of the array: ";
    cin>>size2;

    int arr1[100];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<size1;i++) cin>>arr1[i];
    int arr2[100];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<size2;i++) cin>>arr2[i];

    vector<int> ans;

    int i=0;
    int j=0;

    while(i<size1 && j<size2) {
        if(arr1[i] == arr2[j]) {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j]) i++;
        else j++;
    }

    //print the vector

return 0;
}