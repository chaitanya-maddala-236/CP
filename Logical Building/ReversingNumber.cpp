// 👉 Logic hint:

// Take the last digit using % 10.

// Add it to a result variable (but remember to multiply result by 10 each step).

// Remove the last digit using // 10.

// Repeat until number becomes 0.

#include<iostream>
using namespace std; 
void Reverse(int n){
    int result=0;
    
    while (n>0){
        int digit=n%10;
        result=result*10+digit;
        n=n/10;
    }
    cout<<result<<endl;

}
int main(){
    int n =1421192;
    Reverse(n);
    return 0;
}