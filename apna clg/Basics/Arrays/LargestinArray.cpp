#include<iostream>
using namespace std;
int main(){
    int arr[]={2,5,2,6,37,2,60,9};
    int len=sizeof(arr)/sizeof(arr[0]);
    int max=arr[0];
    for(int i=1;i<len;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max;
}