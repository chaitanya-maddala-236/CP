#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10,14,64,84,93};
    int size=sizeof(arr)/sizeof(arr[0]);
    int key=5;

    int start=0;
    int end=size-1;
    
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==key){
            cout<<mid;
            break;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }

        else{
            end=mid-1;
        }
    }
    cout<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}