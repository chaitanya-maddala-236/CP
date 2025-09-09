#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool IfPrime(int n){
    if (n==1 || n==0){
        return false;
    }

    for(int i=2; i*i<=(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}


int main(){
    bool ans =IfPrime(23);
cout<<ans;
return 0;

}