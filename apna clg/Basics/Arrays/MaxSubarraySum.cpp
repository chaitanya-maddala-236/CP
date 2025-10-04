// Kadane's Algorithm O(n)
#include<iostream>
using namespace std;
#include<climits>
int main(){
    int arr[]={2,-3,6,-5,4,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    int maxSum=INT_MIN;
    int currSum=0;

    for(int i=0;i<size;i++){
        currSum+=arr[i];
        maxSum=max(maxSum,currSum);
        if(currSum<0){
            currSum=0;
        }
    }cout<<maxSum;
}