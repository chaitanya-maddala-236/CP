#include<iostream>
using namespace std;

int main(){
    int ic=150;
    if(ic<=50){
        cout<<"no tax";
    }
    else if(ic>50 && ic<=100){cout<<"10 percent tax";
    }
    else if (ic>100 && ic<250){
        cout<<"20 percent tax";
    }
    else{
        cout<<"30";
    }
}