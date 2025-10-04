// Brute Force Approach O(n^3)
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int maxSum=INT_MIN;
    int arr[]={1,2,-3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<size;i++){
        int sum=0;
        for(int j=i;j<size;j++){
            sum+=arr[j];
                cout<<arr[j]<<" ";
                maxSum=max(maxSum,sum);
            }
                cout<<"=>"<<sum;
            
        cout<<endl;
    }
    cout<<maxSum;

}