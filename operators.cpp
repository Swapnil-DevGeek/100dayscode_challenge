#include<bits/stdc++.h>
using namespace std;

/*Bitwise Operators

    AND & OR |  NOT ~ XOR ^

    2 & 3 =>  2-> 10
              3-> 11
              ==> 10 = 2
    2 | 3 =>  2-> 10
              3-> 11
              ==> 11 = 3       
*/

int main(){

    int a = 4;
    int b = 6;

    cout<<"a & b "<<(a&b)<<endl;  //4
    cout<<"a | b "<<(a|b)<<endl;  //6  
    cout<<"a ^ b "<<(a^b)<<endl;  //2
    cout<<"~a "<<~a<<endl;  //-5

    //sum from 1 to n

    int n;
    cin>>n;
    int sum=0;
    for (int i=1;i<=n;i++) sum+=i;
    cout<<sum<<endl;

    //Fibonacci series

    int no = 10;
    int f1=0;
    int f2 =1;

    cout<<f1<<" "<<f2<<" ";

    for(int i=1;i<=no;i++) {
        int f3 = f1+ f2;
        cout<<f3<<" ";
        f1=f2;
        f2=f3;
    }

    //counting no of 1 bit

    int bit_num;
    int count = 0;
    while(bit_num!=0){
        if(bit_num&1) count++;
        bit_num = bit_num>>1;
    }

    


return 0;
}