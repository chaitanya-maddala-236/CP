#include<iostream>
using namespace std; 
// int Reverse(int n);
int Reverse(int n){
    int result=0;
    
    while (n>0){
        int digit=n%10;
        result=result*10+digit;
        n=n/10;
    }
    return result; 
    
}

void isPalindrome(int n){
    if( n==Reverse(n)){
        cout<<"Palindrome";

    }
    else{
        cout<<"Not a Palindrome";
    }
}

int main(){
    isPalindrome(121234);
    return 0;
}