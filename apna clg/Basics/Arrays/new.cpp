#include<iostream>
using namespace std;
int main(){
    int ar[8];
    int size=sizeof(ar)/sizeof(int);
for(int i=0;i<size;i++){
    cin>>ar[i];
}
    for(int i=0;i<size;i++)
    {
        cout<<ar[i]<<" ";
    }
}