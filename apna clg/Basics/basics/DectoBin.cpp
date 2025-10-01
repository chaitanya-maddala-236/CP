#include<iostream>
using namespace std;
int main(){
    int n=5;
    int val=0;
    int pow=1;
    int bin=0;
    while(n>0){
        val=n%2;
        bin+=val*pow;
        n=n/2;
        pow*=10;
    }
    cout<<bin;
}