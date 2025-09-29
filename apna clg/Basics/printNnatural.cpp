#include<iostream>
using namespace std;

int main(){
    int N=4,SUM=0;
    for(int i=1;i<=N;i++){
        SUM+=i;
        cout<<i<<" "<<SUM<<endl;
    }
    return 0;
}