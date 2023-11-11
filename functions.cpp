#include<iostream>
using namespace std;

bool isPrime(int num){

    for(int i=2;i<num;i++){
        if(num%i == 0) return 0;
    }
    return 1;
}

int main(){

    int n;
    cin>>n;

    if(isPrime(n)) cout<<"the number is prime";
    else cout<<"the number is composite";

return 0;
}