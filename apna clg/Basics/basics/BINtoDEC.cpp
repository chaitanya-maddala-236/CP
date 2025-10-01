#include<iostream>
using namespace std;

int main(){
    int n=101;
    int val=0;
    int pow=1;
    while(n>0){
        int bit=n%10;
        cout<<bit;
        val+=bit*pow;
        pow*=2;
        n=n/10;
    }
    cout<<endl<<val;
}