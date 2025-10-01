#include<iostream>
using namespace std;
int main(){
    int arr[]={3,2,5,2,6,2,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int start=0;
    int end=size-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}