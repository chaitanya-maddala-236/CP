#include<iostream>
using namespace std;
int LinearSearch(int arr[],int len,int key){
    for(int i=0;i<len;i++){
        if(arr[i]==key){
            return i;
        }
           }
           return -1;
}
int main(){
    int arr[]={2,5,2,6,37,2,60,9};
    int len=sizeof(arr)/sizeof(arr[0]);
    int key=60;
    cout<<LinearSearch(arr,len,key);
    // cout<<LinearSearch(arr,len,9);
    // cout<<LinearSearch(arr,len,60);
}
