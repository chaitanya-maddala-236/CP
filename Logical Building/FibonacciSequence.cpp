#include<iostream>
using namespace std; 

void Fibonacci(int n){
    int a =0;
    int b=1;

    cout<<a<<" "<<b<<" ";
    for(int i=3;i<=n;i++){
        int next=a+b;
        cout<<next<<" ";
        a=b;
        b=next;

    }
}

int main(){
    Fibonacci(9);
 return 0;   
}