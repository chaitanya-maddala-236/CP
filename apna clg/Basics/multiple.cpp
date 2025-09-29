#include<iostream>
using namespace std;

int main(){
  int n=40;
//   bool isprime=true;?
//   for(int i=2;i<n;i++){
// optimized
  for(int i=2;i*i<n;i++){
    if(n%i==0){
        cout<<"not prime";
        break;
    }
    
  }
}