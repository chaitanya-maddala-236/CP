#include<iostream>
using namespace std;

int main(){
    int n=10;
    int ch=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<ch<<" ";
            ch++;
        }cout<<endl;
    }
    return 0;
}