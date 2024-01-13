#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> v) {
    int size = v.size();
    cout<<"the size of the vec: "<<size<<endl;  
    for(int i=0;i<size;i++){
        cout<<v[i] << " " ;
    }
    cout<<endl;
}

int main(){
    
    vector<int> v;
    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    printVec(v);

return 0;
}