#include<iostream>
using namespace std;
int fact(int n){
    if(n==0||n==1){return 1;
    }
    return n*fact(n-1);
}
int bi(int nm,int r){
return fact(nm)/fact(r)*fact(nm-r);
}
int main(){
    cout<<bi(5,2);
}