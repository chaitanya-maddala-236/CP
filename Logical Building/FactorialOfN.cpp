#include<iostream>
using namespace std; 

int Fact(int n){
    int result=1;
    if(n==1){
        return 1;
    }
    else if (n==0){
        return 0;
    }
    else{
        result=n*Fact(n-1);
        return result;
    }

}

int main(){
    cout<<Fact(0);
return 0;
}