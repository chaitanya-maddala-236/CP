#include<iostream>
using namespace std; 

int PrintN(int n){
    for(int i=1; i<=n;i++){
        cout<<i <<" ";
    }cout<<endl;
}

int main(){


    PrintN(5);
    PrintN(10);
    PrintN(20);
    return 0;
}