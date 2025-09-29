#include<iostream>
using namespace std;

int main(){
    // int n = 4;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // int n=10;
    // for(int i=n;i>0;i--){
    //     cout<<i<<" ";
    // }
int sum=0;
    int n=1829079;
while(n>0){
    int rem=n%10;
sum+=rem;
n=n/100;
}
cout<<sum<<endl;

}